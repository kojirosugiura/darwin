
const uint32_t _0i = 0;
const uint32_t _0v = 1;
const uint32_t _1i = 2;
const uint32_t _1v = 3;
const uint32_t _2i = 4;
const uint32_t _2v = 5;
const uint32_t _3i = 6;
const uint32_t _3v = 7;
const uint32_t _4i = 8;
const uint32_t _4v = 9;
const uint32_t _5i = 10;
const uint32_t _5v = 11;
const uint32_t _6i = 12;
const uint32_t _6v = 13;

typedef struct tagFilterMapping
{
    std::string  iv;
    struct {
        std::string  name;
        uint32_t     inputs[MAX_INPUTS];
    }            pp[2]; // 0:Image, 1:Value
} FilterMapping;

FilterMapping _filterMapping[] = {
    { "Zero",
        { "Zero", {  } },
        { "Zero", {  } },
    },
    { "Src*",
        { "Src*", {  } },
        { "Src*", {  } },
    },
    { "Tree*",
        { "Tree*", { _0i } },
        { "Tree*", { _0v } },
    },
    { "Split3rd",
        { "Split3rd", { _0i } },
        { "Move", { _0v } },
    },
    { "Split2nd",
        { "Split2nd", { _0i } },
        { "Move", { _0v } },
    },
    { "Split1st",
        { "Split1st", { _0i } },
        { "Move", { _0v } },
    },
    { "Red",
        { "Split3rd", { _0i } },
        { "Move", { _0v } },
    },
    { "Green",
        { "Split2nd", { _0i } },
        { "Move", { _0v } },
    },
    { "Blue",
        { "Split1st", { _0i } },
        { "Move", { _0v } },
    },
    { "Gray",
        { "BGR2Gray", { _0i } },
        { "Move", { _0v } },
    },
    { "BGR2HSV",
        { "BGR2HSV", { _0i } },
        { "Move", { _0v } },
    },
    { "BGR2YUV",
        { "BGR2YUV", { _0i } },
        { "Move", { _0v } },
    },
    { "Dilate3x3",
        { "Dilate3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Erode3x3",
        { "Erode3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Thin",
        { "Thin", { _0i } },
        { "Move", { _0v } },
    },
    { "Laplacian3x3",
        { "Laplacian3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Laplacian2nd3x3",
        { "Laplacian2nd3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Median3x3",
        { "Median3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Sharpen3x3",
        { "Sharpen3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Smooth3x3",
        { "Smooth3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Sobel3x3",
        { "Sobel3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "SobelX3x3",
        { "SobelX3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "SobelY3x3",
        { "SobelY3x3", { _0i } },
        { "Move", { _0v } },
    },
    { "Negate",
        { "Negate", { _0i } },
        { "Move", { _0v } },
    },
    { "ProjectionX",
        { "ProjectionX", { _0i } },
        { "Move", { _0v } },
    },
    { "ProjectionY",
        { "ProjectionY", { _0i } },
        { "Move", { _0v } },
    },
    { "Connection4",
        { "Connection4", { _0i } },
        { "Move", { _0v } },
    },
    { "Connection8",
        { "Connection8", { _0i } },
        { "Move", { _0v } },
    },
    { "Outline4",
        { "Outline4", { _0i } },
        { "Move", { _0v } },
    },
    { "Outline8",
        { "Outline8", { _0i } },
        { "Move", { _0v } },
    },
    { "Threshold",
        { "Threshold", { _0i } },
        { "Move", { _0v } },
    },
    { "ThresholdInv",
        { "ThresholdInv", { _0i } },
        { "Move", { _0v } },
    },
    { "Binarize",
        { "Binarize", { _0i } },
        { "Move", { _0v } },
    },
    { "BinarizeInv",
        { "BinarizeInv", { _0i } },
        { "Move", { _0v } },
    },
    { "Add",
        { "Add", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "AlgebraicProd",
        { "Diff", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "AlgebraicSum",
        { "AlgebraicProd", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "BoundedProd",
        { "AlgebraicSum", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "Diff",
        { "BoundedProd", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "LogicalProd",
        { "LogicalProd", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "LogicalSum",
        { "LogicalSum", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "Subtract",
        { "Subtract", { _0i, _1i } },
        { "Move", { _0v } },
    },
    { "HighPass",
        { "HighPass", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "LowPass",
        { "LowPass", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "ThresholdV",
        { "ThresholdV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "ThresholdInvV",
        { "ThresholdInvV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "BinarizeV",
        { "BinarizeV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "BinarizeInvV",
        { "BinarizeInvV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "BigBlob4",
        { "BigBlob4", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "BigBlob8",
        { "BigBlob8", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "AddV",
        { "AddV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "ModAvgV",
        { "ModAvgV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "MultiplyV",
        { "MultiplyV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "SubtractV",
        { "SubtractV", { _0i, _1v } },
        { "Move", { _0v } },
    },
    { "FillV",
        { "FillV", { _0v } },
        { "Move", { _0v } },
    },
    { "NoiseV",
        { "NoiseV", { _0v } },
        { "Move", { _0v } },
    },
    { "AvgPixel",
        { "Move", { _0i } },
        { "AvgPixel", { _0i } },
    },
    { "MaxPixel",
        { "Move", { _0i } },
        { "MaxPixel", { _0i } },
    },
    { "MinPixel",
        { "Move", { _0i } },
        { "MinPixel", { _0i } },
    },
    { "FGArea",
        { "Move", { _0i } },
        { "FGArea", { _0i } },
    },
    { "BGArea",
        { "Move", { _0i } },
        { "BGArea", { _0i } },
    },
    { "FGAreaV",
        { "Move", { _0i } },
        { "FGAreaV", { _0i, _1v } },
    },
    { "BGAreaV",
        { "Move", { _0i } },
        { "BGAreaV", { _0i, _1v } },
    },
    { "MassCenterBX",
        { "Move", { _0i } },
        { "MassCenterBX", { _0i } },
    },
    { "MassCenterBY",
        { "Move", { _0i } },
        { "MassCenterBY", { _0i } },
    },
    { "PSNR",
        { "Zero", {  } },
        { "PSNR", { _0i, _1i } },
    },
    { "Distance",
        { "Zero", {  } },
        { "Distance", { _0v, _1v, _2v, _3v } },
    },
    { "VNegate",
        { "Move", { _0i } },
        { "VNegate", { _0v } },
    },
    { "VAdd",
        { "Move", { _0i } },
        { "VAdd", { _0v, _1v } },
    },
    { "VAlgebraicProd",
        { "Move", { _0i } },
        { "VAlgebraicProd", { _0v, _1v } },
    },
    { "VAlgebraicSum",
        { "Move", { _0i } },
        { "VAlgebraicSum", { _0v, _1v } },
    },
    { "VDiff",
        { "Move", { _0i } },
        { "VDiff", { _0v, _1v } },
    },
    { "VLogicalProd",
        { "Move", { _0i } },
        { "VLogicalProd", { _0v, _1v } },
    },
    { "VLogicalSum",
        { "Move", { _0i } },
        { "VLogicalSum", { _0v, _1v } },
    },
    { "VSubtract",
        { "Move", { _0i } },
        { "VSubtract", { _0v, _1v } },
    },
    { "Select",
        { "Select", { _0i, _1i, _0v, _1v } },
        { "Select", { _0v, _1v } },
    },
    { "SelectV",
        { "SelectV", { _0i, _1i, _2v, _3v } },
        { "SelectV", { _0v, _1v, _2v, _3v } },
    },
};
