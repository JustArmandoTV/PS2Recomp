#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001946B8
// Address: 0x1946b8 - 0x194d80
void sub_001946B8_0x1946b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001946B8_0x1946b8");
#endif

    switch (ctx->pc) {
        case 0x1946b8u: goto label_1946b8;
        case 0x1946bcu: goto label_1946bc;
        case 0x1946c0u: goto label_1946c0;
        case 0x1946c4u: goto label_1946c4;
        case 0x1946c8u: goto label_1946c8;
        case 0x1946ccu: goto label_1946cc;
        case 0x1946d0u: goto label_1946d0;
        case 0x1946d4u: goto label_1946d4;
        case 0x1946d8u: goto label_1946d8;
        case 0x1946dcu: goto label_1946dc;
        case 0x1946e0u: goto label_1946e0;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946e8u: goto label_1946e8;
        case 0x1946ecu: goto label_1946ec;
        case 0x1946f0u: goto label_1946f0;
        case 0x1946f4u: goto label_1946f4;
        case 0x1946f8u: goto label_1946f8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194700u: goto label_194700;
        case 0x194704u: goto label_194704;
        case 0x194708u: goto label_194708;
        case 0x19470cu: goto label_19470c;
        case 0x194710u: goto label_194710;
        case 0x194714u: goto label_194714;
        case 0x194718u: goto label_194718;
        case 0x19471cu: goto label_19471c;
        case 0x194720u: goto label_194720;
        case 0x194724u: goto label_194724;
        case 0x194728u: goto label_194728;
        case 0x19472cu: goto label_19472c;
        case 0x194730u: goto label_194730;
        case 0x194734u: goto label_194734;
        case 0x194738u: goto label_194738;
        case 0x19473cu: goto label_19473c;
        case 0x194740u: goto label_194740;
        case 0x194744u: goto label_194744;
        case 0x194748u: goto label_194748;
        case 0x19474cu: goto label_19474c;
        case 0x194750u: goto label_194750;
        case 0x194754u: goto label_194754;
        case 0x194758u: goto label_194758;
        case 0x19475cu: goto label_19475c;
        case 0x194760u: goto label_194760;
        case 0x194764u: goto label_194764;
        case 0x194768u: goto label_194768;
        case 0x19476cu: goto label_19476c;
        case 0x194770u: goto label_194770;
        case 0x194774u: goto label_194774;
        case 0x194778u: goto label_194778;
        case 0x19477cu: goto label_19477c;
        case 0x194780u: goto label_194780;
        case 0x194784u: goto label_194784;
        case 0x194788u: goto label_194788;
        case 0x19478cu: goto label_19478c;
        case 0x194790u: goto label_194790;
        case 0x194794u: goto label_194794;
        case 0x194798u: goto label_194798;
        case 0x19479cu: goto label_19479c;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947a4u: goto label_1947a4;
        case 0x1947a8u: goto label_1947a8;
        case 0x1947acu: goto label_1947ac;
        case 0x1947b0u: goto label_1947b0;
        case 0x1947b4u: goto label_1947b4;
        case 0x1947b8u: goto label_1947b8;
        case 0x1947bcu: goto label_1947bc;
        case 0x1947c0u: goto label_1947c0;
        case 0x1947c4u: goto label_1947c4;
        case 0x1947c8u: goto label_1947c8;
        case 0x1947ccu: goto label_1947cc;
        case 0x1947d0u: goto label_1947d0;
        case 0x1947d4u: goto label_1947d4;
        case 0x1947d8u: goto label_1947d8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947e0u: goto label_1947e0;
        case 0x1947e4u: goto label_1947e4;
        case 0x1947e8u: goto label_1947e8;
        case 0x1947ecu: goto label_1947ec;
        case 0x1947f0u: goto label_1947f0;
        case 0x1947f4u: goto label_1947f4;
        case 0x1947f8u: goto label_1947f8;
        case 0x1947fcu: goto label_1947fc;
        case 0x194800u: goto label_194800;
        case 0x194804u: goto label_194804;
        case 0x194808u: goto label_194808;
        case 0x19480cu: goto label_19480c;
        case 0x194810u: goto label_194810;
        case 0x194814u: goto label_194814;
        case 0x194818u: goto label_194818;
        case 0x19481cu: goto label_19481c;
        case 0x194820u: goto label_194820;
        case 0x194824u: goto label_194824;
        case 0x194828u: goto label_194828;
        case 0x19482cu: goto label_19482c;
        case 0x194830u: goto label_194830;
        case 0x194834u: goto label_194834;
        case 0x194838u: goto label_194838;
        case 0x19483cu: goto label_19483c;
        case 0x194840u: goto label_194840;
        case 0x194844u: goto label_194844;
        case 0x194848u: goto label_194848;
        case 0x19484cu: goto label_19484c;
        case 0x194850u: goto label_194850;
        case 0x194854u: goto label_194854;
        case 0x194858u: goto label_194858;
        case 0x19485cu: goto label_19485c;
        case 0x194860u: goto label_194860;
        case 0x194864u: goto label_194864;
        case 0x194868u: goto label_194868;
        case 0x19486cu: goto label_19486c;
        case 0x194870u: goto label_194870;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x19487cu: goto label_19487c;
        case 0x194880u: goto label_194880;
        case 0x194884u: goto label_194884;
        case 0x194888u: goto label_194888;
        case 0x19488cu: goto label_19488c;
        case 0x194890u: goto label_194890;
        case 0x194894u: goto label_194894;
        case 0x194898u: goto label_194898;
        case 0x19489cu: goto label_19489c;
        case 0x1948a0u: goto label_1948a0;
        case 0x1948a4u: goto label_1948a4;
        case 0x1948a8u: goto label_1948a8;
        case 0x1948acu: goto label_1948ac;
        case 0x1948b0u: goto label_1948b0;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948b8u: goto label_1948b8;
        case 0x1948bcu: goto label_1948bc;
        case 0x1948c0u: goto label_1948c0;
        case 0x1948c4u: goto label_1948c4;
        case 0x1948c8u: goto label_1948c8;
        case 0x1948ccu: goto label_1948cc;
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        case 0x194c28u: goto label_194c28;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c30u: goto label_194c30;
        case 0x194c34u: goto label_194c34;
        case 0x194c38u: goto label_194c38;
        case 0x194c3cu: goto label_194c3c;
        case 0x194c40u: goto label_194c40;
        case 0x194c44u: goto label_194c44;
        case 0x194c48u: goto label_194c48;
        case 0x194c4cu: goto label_194c4c;
        case 0x194c50u: goto label_194c50;
        case 0x194c54u: goto label_194c54;
        case 0x194c58u: goto label_194c58;
        case 0x194c5cu: goto label_194c5c;
        case 0x194c60u: goto label_194c60;
        case 0x194c64u: goto label_194c64;
        case 0x194c68u: goto label_194c68;
        case 0x194c6cu: goto label_194c6c;
        case 0x194c70u: goto label_194c70;
        case 0x194c74u: goto label_194c74;
        case 0x194c78u: goto label_194c78;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c80u: goto label_194c80;
        case 0x194c84u: goto label_194c84;
        case 0x194c88u: goto label_194c88;
        case 0x194c8cu: goto label_194c8c;
        case 0x194c90u: goto label_194c90;
        case 0x194c94u: goto label_194c94;
        case 0x194c98u: goto label_194c98;
        case 0x194c9cu: goto label_194c9c;
        case 0x194ca0u: goto label_194ca0;
        case 0x194ca4u: goto label_194ca4;
        case 0x194ca8u: goto label_194ca8;
        case 0x194cacu: goto label_194cac;
        case 0x194cb0u: goto label_194cb0;
        case 0x194cb4u: goto label_194cb4;
        case 0x194cb8u: goto label_194cb8;
        case 0x194cbcu: goto label_194cbc;
        case 0x194cc0u: goto label_194cc0;
        case 0x194cc4u: goto label_194cc4;
        case 0x194cc8u: goto label_194cc8;
        case 0x194cccu: goto label_194ccc;
        case 0x194cd0u: goto label_194cd0;
        case 0x194cd4u: goto label_194cd4;
        case 0x194cd8u: goto label_194cd8;
        case 0x194cdcu: goto label_194cdc;
        case 0x194ce0u: goto label_194ce0;
        case 0x194ce4u: goto label_194ce4;
        case 0x194ce8u: goto label_194ce8;
        case 0x194cecu: goto label_194cec;
        case 0x194cf0u: goto label_194cf0;
        case 0x194cf4u: goto label_194cf4;
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        case 0x194d58u: goto label_194d58;
        case 0x194d5cu: goto label_194d5c;
        case 0x194d60u: goto label_194d60;
        case 0x194d64u: goto label_194d64;
        case 0x194d68u: goto label_194d68;
        case 0x194d6cu: goto label_194d6c;
        case 0x194d70u: goto label_194d70;
        case 0x194d74u: goto label_194d74;
        case 0x194d78u: goto label_194d78;
        case 0x194d7cu: goto label_194d7c;
        default: break;
    }

    ctx->pc = 0x1946b8u;

label_1946b8:
    // 0x1946b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1946b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1946bc:
    // 0x1946bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1946bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1946c0:
    // 0x1946c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1946c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1946c4:
    // 0x1946c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1946c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1946c8:
    // 0x1946c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1946c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1946cc:
    // 0x1946cc: 0x261101dc  addiu       $s1, $s0, 0x1DC
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
label_1946d0:
    // 0x1946d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1946d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1946d4:
    // 0x1946d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1946d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1946d8:
    // 0x1946d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1946d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1946dc:
    // 0x1946dc: 0x261303ac  addiu       $s3, $s0, 0x3AC
    ctx->pc = 0x1946dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
label_1946e0:
    // 0x1946e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1946e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1946e4:
    // 0x1946e4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1946e8:
    // 0x1946e8: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1946e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
label_1946ec:
    // 0x1946ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1946ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1946f0:
    // 0x1946f0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1946f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1946f4:
    // 0x1946f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1946f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1946f8:
    // 0x1946f8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1946f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1946fc:
    // 0x1946fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1946fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_194700:
    // 0x194700: 0xae0303d8  sw          $v1, 0x3D8($s0)
    ctx->pc = 0x194700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 984), GPR_U32(ctx, 3));
label_194704:
    // 0x194704: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x194704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194708:
    // 0x194708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19470c:
    // 0x19470c: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x19470cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
label_194710:
    // 0x194710: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x194710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_194714:
    // 0x194714: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x194714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_194718:
    // 0x194718: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x194718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
label_19471c:
    // 0x19471c: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x19471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
label_194720:
    // 0x194720: 0x40f809  jalr        $v0
label_194724:
    if (ctx->pc == 0x194724u) {
        ctx->pc = 0x194724u;
            // 0x194724: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x194728u;
        goto label_194728;
    }
    ctx->pc = 0x194720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194728u);
        ctx->pc = 0x194724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194720u;
            // 0x194724: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194728u; }
            if (ctx->pc != 0x194728u) { return; }
        }
        }
    }
    ctx->pc = 0x194728u;
label_194728:
    // 0x194728: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x194728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19472c:
    // 0x19472c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x19472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_194730:
    // 0x194730: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x194730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_194734:
    // 0x194734: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x194734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_194738:
    // 0x194738: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x194738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_19473c:
    // 0x19473c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x19473cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194740:
    // 0x194740: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194744:
    // 0x194744: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194744u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194748:
    // 0x194748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19474c:
    // 0x19474c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194750:
    // 0x194750: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x194750u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194754:
    // 0x194754: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194758:
    // 0x194758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19475c:
    // 0x19475c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19475cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194760:
    // 0x194760: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194764:
    // 0x194764: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x194764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194768:
    // 0x194768: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x194768u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19476c:
    // 0x19476c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194770:
    // 0x194770: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194774:
    // 0x194774: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194778:
    // 0x194778: 0x39030000  xori        $v1, $t0, 0x0
    ctx->pc = 0x194778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_19477c:
    // 0x19477c: 0x1051004  sllv        $v0, $a1, $t0
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194780:
    // 0x194780: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194784:
    // 0x194784: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194788:
    // 0x194788: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19478c:
    // 0x19478c: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x19478cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_194790:
    // 0x194790: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194794:
    // 0x194794: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194798:
    // 0x194798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19479c:
    // 0x19479c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x19479cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1947a0:
    // 0x1947a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1947a4:
    // 0x1947a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1947a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1947a8:
    // 0x1947a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1947a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1947ac:
    // 0x1947ac: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1947acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1947b0:
    // 0x1947b0: 0x29040014  slti        $a0, $t0, 0x14
    ctx->pc = 0x1947b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_1947b4:
    // 0x1947b4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1947b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1947b8:
    // 0x1947b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1947b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1947bc:
    // 0x1947bc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1947bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1947c0:
    // 0x1947c0: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1947c4:
    if (ctx->pc == 0x1947C4u) {
        ctx->pc = 0x1947C4u;
            // 0x1947c4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1947C8u;
        goto label_1947c8;
    }
    ctx->pc = 0x1947C0u;
    {
        const bool branch_taken_0x1947c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1947C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1947C0u;
            // 0x1947c4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947c0) {
            ctx->pc = 0x194838u;
            goto label_194838;
        }
    }
    ctx->pc = 0x1947C8u;
label_1947c8:
    // 0x1947c8: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x1947c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_1947cc:
    // 0x1947cc: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1947d0:
    if (ctx->pc == 0x1947D0u) {
        ctx->pc = 0x1947D0u;
            // 0x1947d0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1947D4u;
        goto label_1947d4;
    }
    ctx->pc = 0x1947CCu;
    {
        const bool branch_taken_0x1947cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1947CCu;
            // 0x1947d0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947cc) {
            ctx->pc = 0x1947F0u;
            goto label_1947f0;
        }
    }
    ctx->pc = 0x1947D4u;
label_1947d4:
    // 0x1947d4: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1947d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1947d8:
    // 0x1947d8: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1947d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1947dc:
    // 0x1947dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1947dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1947e0:
    // 0x1947e0: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x1947e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1947e4:
    // 0x1947e4: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1947e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1947e8:
    // 0x1947e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1947ec:
    if (ctx->pc == 0x1947ECu) {
        ctx->pc = 0x1947ECu;
            // 0x1947ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1947F0u;
        goto label_1947f0;
    }
    ctx->pc = 0x1947E8u;
    {
        const bool branch_taken_0x1947e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1947E8u;
            // 0x1947ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947e8) {
            ctx->pc = 0x1947FCu;
            goto label_1947fc;
        }
    }
    ctx->pc = 0x1947F0u;
label_1947f0:
    // 0x1947f0: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1947f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1947f4:
    // 0x1947f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1947f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1947f8:
    // 0x1947f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1947f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1947fc:
    // 0x1947fc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1947fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194800:
    // 0x194800: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194804:
    // 0x194804: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194804u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194808:
    // 0x194808: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19480c:
    // 0x19480c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194810:
    // 0x194810: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194810u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194814:
    // 0x194814: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194818:
    // 0x194818: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19481c:
    // 0x19481c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19481cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194820:
    // 0x194820: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194824:
    // 0x194824: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194828:
    // 0x194828: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19482c:
    // 0x19482c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19482cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194830:
    // 0x194830: 0x10000005  b           . + 4 + (0x5 << 2)
label_194834:
    if (ctx->pc == 0x194834u) {
        ctx->pc = 0x194834u;
            // 0x194834: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194838u;
        goto label_194838;
    }
    ctx->pc = 0x194830u;
    {
        const bool branch_taken_0x194830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194830u;
            // 0x194834: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194830) {
            ctx->pc = 0x194848u;
            goto label_194848;
        }
    }
    ctx->pc = 0x194838u;
label_194838:
    // 0x194838: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x194838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_19483c:
    // 0x19483c: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_194840:
    // 0x194840: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x194840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_194844:
    // 0x194844: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_194848:
    // 0x194848: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x194848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_19484c:
    // 0x19484c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_194850:
    if (ctx->pc == 0x194850u) {
        ctx->pc = 0x194850u;
            // 0x194850: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->pc = 0x194854u;
        goto label_194854;
    }
    ctx->pc = 0x19484Cu;
    {
        const bool branch_taken_0x19484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19484Cu;
            // 0x194850: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19484c) {
            ctx->pc = 0x1948C8u;
            goto label_1948c8;
        }
    }
    ctx->pc = 0x194854u;
label_194854:
    // 0x194854: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x194854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_194858:
    // 0x194858: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_19485c:
    if (ctx->pc == 0x19485Cu) {
        ctx->pc = 0x19485Cu;
            // 0x19485c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x194860u;
        goto label_194860;
    }
    ctx->pc = 0x194858u;
    {
        const bool branch_taken_0x194858 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x19485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194858u;
            // 0x19485c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194858) {
            ctx->pc = 0x194880u;
            goto label_194880;
        }
    }
    ctx->pc = 0x194860u;
label_194860:
    // 0x194860: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_194864:
    // 0x194864: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x194864u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_194868:
    // 0x194868: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x194868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19486c:
    // 0x19486c: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x19486cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_194870:
    // 0x194870: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x194870u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194874:
    // 0x194874: 0x10000005  b           . + 4 + (0x5 << 2)
label_194878:
    if (ctx->pc == 0x194878u) {
        ctx->pc = 0x194878u;
            // 0x194878: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x19487Cu;
        goto label_19487c;
    }
    ctx->pc = 0x194874u;
    {
        const bool branch_taken_0x194874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194874u;
            // 0x194878: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194874) {
            ctx->pc = 0x19488Cu;
            goto label_19488c;
        }
    }
    ctx->pc = 0x19487Cu;
label_19487c:
    // 0x19487c: 0x0  nop
    ctx->pc = 0x19487cu;
    // NOP
label_194880:
    // 0x194880: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x194880u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_194884:
    // 0x194884: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194888:
    // 0x194888: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x194888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19488c:
    // 0x19488c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x19488cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194890:
    // 0x194890: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194894:
    // 0x194894: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194894u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194898:
    // 0x194898: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19489c:
    // 0x19489c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19489cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1948a0:
    // 0x1948a0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1948a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1948a4:
    // 0x1948a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1948a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1948a8:
    // 0x1948a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1948ac:
    // 0x1948ac: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1948acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1948b0:
    // 0x1948b0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1948b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1948b4:
    // 0x1948b4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1948b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1948b8:
    // 0x1948b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1948b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1948bc:
    // 0x1948bc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1948bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1948c0:
    // 0x1948c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1948c4:
    if (ctx->pc == 0x1948C4u) {
        ctx->pc = 0x1948C4u;
            // 0x1948c4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1948C8u;
        goto label_1948c8;
    }
    ctx->pc = 0x1948C0u;
    {
        const bool branch_taken_0x1948c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1948C0u;
            // 0x1948c4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948c0) {
            ctx->pc = 0x1948D4u;
            goto label_1948d4;
        }
    }
    ctx->pc = 0x1948C8u;
label_1948c8:
    // 0x1948c8: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x1948c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_1948cc:
    // 0x1948cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1948ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1948d0:
    // 0x1948d0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1948d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1948d4:
    // 0x1948d4: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x1948d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_1948d8:
    // 0x1948d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1948dc:
    if (ctx->pc == 0x1948DCu) {
        ctx->pc = 0x1948DCu;
            // 0x1948dc: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->pc = 0x1948E0u;
        goto label_1948e0;
    }
    ctx->pc = 0x1948D8u;
    {
        const bool branch_taken_0x1948d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1948DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1948D8u;
            // 0x1948dc: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948d8) {
            ctx->pc = 0x194950u;
            goto label_194950;
        }
    }
    ctx->pc = 0x1948E0u;
label_1948e0:
    // 0x1948e0: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x1948e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_1948e4:
    // 0x1948e4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1948e8:
    if (ctx->pc == 0x1948E8u) {
        ctx->pc = 0x1948E8u;
            // 0x1948e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1948ECu;
        goto label_1948ec;
    }
    ctx->pc = 0x1948E4u;
    {
        const bool branch_taken_0x1948e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1948E4u;
            // 0x1948e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e4) {
            ctx->pc = 0x194908u;
            goto label_194908;
        }
    }
    ctx->pc = 0x1948ECu;
label_1948ec:
    // 0x1948ec: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1948f0:
    // 0x1948f0: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1948f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1948f4:
    // 0x1948f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1948f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1948f8:
    // 0x1948f8: 0x71f02  srl         $v1, $a3, 28
    ctx->pc = 0x1948f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1948fc:
    // 0x1948fc: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1948fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194900:
    // 0x194900: 0x10000004  b           . + 4 + (0x4 << 2)
label_194904:
    if (ctx->pc == 0x194904u) {
        ctx->pc = 0x194904u;
            // 0x194904: 0xae0302c4  sw          $v1, 0x2C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 3));
        ctx->pc = 0x194908u;
        goto label_194908;
    }
    ctx->pc = 0x194900u;
    {
        const bool branch_taken_0x194900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194900u;
            // 0x194904: 0xae0302c4  sw          $v1, 0x2C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194900) {
            ctx->pc = 0x194914u;
            goto label_194914;
        }
    }
    ctx->pc = 0x194908u;
label_194908:
    // 0x194908: 0x71702  srl         $v0, $a3, 28
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_19490c:
    // 0x19490c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19490cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194910:
    // 0x194910: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x194910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_194914:
    // 0x194914: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194914u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194918:
    // 0x194918: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19491c:
    // 0x19491c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x19491cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194920:
    // 0x194920: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194924:
    // 0x194924: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194928:
    // 0x194928: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_19492c:
    // 0x19492c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x19492cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194930:
    // 0x194930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194934:
    // 0x194934: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194938:
    // 0x194938: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194938u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_19493c:
    // 0x19493c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19493cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194940:
    // 0x194940: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194944:
    // 0x194944: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194948:
    // 0x194948: 0x10000004  b           . + 4 + (0x4 << 2)
label_19494c:
    if (ctx->pc == 0x19494Cu) {
        ctx->pc = 0x19494Cu;
            // 0x19494c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194950u;
        goto label_194950;
    }
    ctx->pc = 0x194948u;
    {
        const bool branch_taken_0x194948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194948u;
            // 0x19494c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194948) {
            ctx->pc = 0x19495Cu;
            goto label_19495c;
        }
    }
    ctx->pc = 0x194950u;
label_194950:
    // 0x194950: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_194954:
    // 0x194954: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x194954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_194958:
    // 0x194958: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x194958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_19495c:
    // 0x19495c: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x19495cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_194960:
    // 0x194960: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_194964:
    if (ctx->pc == 0x194964u) {
        ctx->pc = 0x194964u;
            // 0x194964: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->pc = 0x194968u;
        goto label_194968;
    }
    ctx->pc = 0x194960u;
    {
        const bool branch_taken_0x194960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194960u;
            // 0x194964: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194960) {
            ctx->pc = 0x1949D0u;
            goto label_1949d0;
        }
    }
    ctx->pc = 0x194968u;
label_194968:
    // 0x194968: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x194968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_19496c:
    // 0x19496c: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_194970:
    if (ctx->pc == 0x194970u) {
        ctx->pc = 0x194970u;
            // 0x194970: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x194974u;
        goto label_194974;
    }
    ctx->pc = 0x19496Cu;
    {
        const bool branch_taken_0x19496c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x194970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19496Cu;
            // 0x194970: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19496c) {
            ctx->pc = 0x194990u;
            goto label_194990;
        }
    }
    ctx->pc = 0x194974u;
label_194974:
    // 0x194974: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x194974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_194978:
    // 0x194978: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x194978u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_19497c:
    // 0x19497c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19497cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_194980:
    // 0x194980: 0x72702  srl         $a0, $a3, 28
    ctx->pc = 0x194980u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_194984:
    // 0x194984: 0x10000003  b           . + 4 + (0x3 << 2)
label_194988:
    if (ctx->pc == 0x194988u) {
        ctx->pc = 0x194988u;
            // 0x194988: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->pc = 0x19498Cu;
        goto label_19498c;
    }
    ctx->pc = 0x194984u;
    {
        const bool branch_taken_0x194984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194984u;
            // 0x194988: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194984) {
            ctx->pc = 0x194994u;
            goto label_194994;
        }
    }
    ctx->pc = 0x19498Cu;
label_19498c:
    // 0x19498c: 0x0  nop
    ctx->pc = 0x19498cu;
    // NOP
label_194990:
    // 0x194990: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194994:
    // 0x194994: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194994u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194998:
    // 0x194998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19499c:
    // 0x19499c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x19499cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1949a0:
    // 0x1949a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1949a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1949a4:
    // 0x1949a4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1949a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1949a8:
    // 0x1949a8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1949a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1949ac:
    // 0x1949ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1949acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1949b0:
    // 0x1949b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1949b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1949b4:
    // 0x1949b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1949b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1949b8:
    // 0x1949b8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1949b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1949bc:
    // 0x1949bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1949bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1949c0:
    // 0x1949c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1949c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1949c4:
    // 0x1949c4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1949c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1949c8:
    // 0x1949c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1949cc:
    if (ctx->pc == 0x1949CCu) {
        ctx->pc = 0x1949CCu;
            // 0x1949cc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1949D0u;
        goto label_1949d0;
    }
    ctx->pc = 0x1949C8u;
    {
        const bool branch_taken_0x1949c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1949C8u;
            // 0x1949cc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c8) {
            ctx->pc = 0x1949D8u;
            goto label_1949d8;
        }
    }
    ctx->pc = 0x1949D0u;
label_1949d0:
    // 0x1949d0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1949d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1949d4:
    // 0x1949d4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1949d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1949d8:
    // 0x1949d8: 0x2902000e  slti        $v0, $t0, 0xE
    ctx->pc = 0x1949d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)14) ? 1 : 0);
label_1949dc:
    // 0x1949dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1949e0:
    if (ctx->pc == 0x1949E0u) {
        ctx->pc = 0x1949E0u;
            // 0x1949e0: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->pc = 0x1949E4u;
        goto label_1949e4;
    }
    ctx->pc = 0x1949DCu;
    {
        const bool branch_taken_0x1949dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1949E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1949DCu;
            // 0x1949e0: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949dc) {
            ctx->pc = 0x194A58u;
            goto label_194a58;
        }
    }
    ctx->pc = 0x1949E4u;
label_1949e4:
    // 0x1949e4: 0x2508fff2  addiu       $t0, $t0, -0xE
    ctx->pc = 0x1949e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967282));
label_1949e8:
    // 0x1949e8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1949ec:
    if (ctx->pc == 0x1949ECu) {
        ctx->pc = 0x1949ECu;
            // 0x1949ec: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x1949F0u;
        goto label_1949f0;
    }
    ctx->pc = 0x1949E8u;
    {
        const bool branch_taken_0x1949e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1949E8u;
            // 0x1949ec: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949e8) {
            ctx->pc = 0x194A10u;
            goto label_194a10;
        }
    }
    ctx->pc = 0x1949F0u;
label_1949f0:
    // 0x1949f0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1949f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1949f4:
    // 0x1949f4: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1949f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1949f8:
    // 0x1949f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1949f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1949fc:
    // 0x1949fc: 0x71b82  srl         $v1, $a3, 14
    ctx->pc = 0x1949fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_194a00:
    // 0x194a00: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194a04:
    // 0x194a04: 0x10000005  b           . + 4 + (0x5 << 2)
label_194a08:
    if (ctx->pc == 0x194A08u) {
        ctx->pc = 0x194A08u;
            // 0x194a08: 0xae0302c8  sw          $v1, 0x2C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
        ctx->pc = 0x194A0Cu;
        goto label_194a0c;
    }
    ctx->pc = 0x194A04u;
    {
        const bool branch_taken_0x194a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A04u;
            // 0x194a08: 0xae0302c8  sw          $v1, 0x2C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a04) {
            ctx->pc = 0x194A1Cu;
            goto label_194a1c;
        }
    }
    ctx->pc = 0x194A0Cu;
label_194a0c:
    // 0x194a0c: 0x0  nop
    ctx->pc = 0x194a0cu;
    // NOP
label_194a10:
    // 0x194a10: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_194a14:
    // 0x194a14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194a18:
    // 0x194a18: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x194a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_194a1c:
    // 0x194a1c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194a1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a20:
    // 0x194a20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194a24:
    // 0x194a24: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194a24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a28:
    // 0x194a28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194a2c:
    // 0x194a2c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194a30:
    // 0x194a30: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a34:
    // 0x194a34: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194a38:
    // 0x194a38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194a3c:
    // 0x194a3c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194a40:
    // 0x194a40: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194a40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a44:
    // 0x194a44: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194a48:
    // 0x194a48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194a4c:
    // 0x194a4c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194a50:
    // 0x194a50: 0x10000005  b           . + 4 + (0x5 << 2)
label_194a54:
    if (ctx->pc == 0x194A54u) {
        ctx->pc = 0x194A54u;
            // 0x194a54: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194A58u;
        goto label_194a58;
    }
    ctx->pc = 0x194A50u;
    {
        const bool branch_taken_0x194a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A50u;
            // 0x194a54: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a50) {
            ctx->pc = 0x194A68u;
            goto label_194a68;
        }
    }
    ctx->pc = 0x194A58u;
label_194a58:
    // 0x194a58: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x194a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_194a5c:
    // 0x194a5c: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x194a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
label_194a60:
    // 0x194a60: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x194a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_194a64:
    // 0x194a64: 0x25080012  addiu       $t0, $t0, 0x12
    ctx->pc = 0x194a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18));
label_194a68:
    // 0x194a68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x194a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_194a6c:
    // 0x194a6c: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x194a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
label_194a70:
    // 0x194a70: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_194a74:
    if (ctx->pc == 0x194A74u) {
        ctx->pc = 0x194A74u;
            // 0x194a74: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x194A78u;
        goto label_194a78;
    }
    ctx->pc = 0x194A70u;
    {
        const bool branch_taken_0x194a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194a70) {
            ctx->pc = 0x194A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194A70u;
            // 0x194a74: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194AB8u;
            goto label_194ab8;
        }
    }
    ctx->pc = 0x194A78u;
label_194a78:
    // 0x194a78: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x194a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_194a7c:
    // 0x194a7c: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x194a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194a80:
    // 0x194a80: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194a80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a84:
    // 0x194a84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194a88:
    // 0x194a88: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a8c:
    // 0x194a8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194a90:
    // 0x194a90: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194a90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194a94:
    // 0x194a94: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194a94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194a98:
    // 0x194a98: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194a9c:
    // 0x194a9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194aa0:
    // 0x194aa0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194aa4:
    // 0x194aa4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194aa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194aa8:
    // 0x194aa8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194aac:
    // 0x194aac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194ab0:
    // 0x194ab0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194ab4:
    // 0x194ab4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194ab8:
    // 0x194ab8: 0x29020016  slti        $v0, $t0, 0x16
    ctx->pc = 0x194ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)22) ? 1 : 0);
label_194abc:
    // 0x194abc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_194ac0:
    if (ctx->pc == 0x194AC0u) {
        ctx->pc = 0x194AC0u;
            // 0x194ac0: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->pc = 0x194AC4u;
        goto label_194ac4;
    }
    ctx->pc = 0x194ABCu;
    {
        const bool branch_taken_0x194abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194ABCu;
            // 0x194ac0: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194abc) {
            ctx->pc = 0x194B38u;
            goto label_194b38;
        }
    }
    ctx->pc = 0x194AC4u;
label_194ac4:
    // 0x194ac4: 0x2508ffea  addiu       $t0, $t0, -0x16
    ctx->pc = 0x194ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967274));
label_194ac8:
    // 0x194ac8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_194acc:
    if (ctx->pc == 0x194ACCu) {
        ctx->pc = 0x194ACCu;
            // 0x194acc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x194AD0u;
        goto label_194ad0;
    }
    ctx->pc = 0x194AC8u;
    {
        const bool branch_taken_0x194ac8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x194ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194AC8u;
            // 0x194acc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ac8) {
            ctx->pc = 0x194AF0u;
            goto label_194af0;
        }
    }
    ctx->pc = 0x194AD0u;
label_194ad0:
    // 0x194ad0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x194ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_194ad4:
    // 0x194ad4: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x194ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_194ad8:
    // 0x194ad8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x194ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_194adc:
    // 0x194adc: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x194adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_194ae0:
    // 0x194ae0: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194ae4:
    // 0x194ae4: 0x10000005  b           . + 4 + (0x5 << 2)
label_194ae8:
    if (ctx->pc == 0x194AE8u) {
        ctx->pc = 0x194AE8u;
            // 0x194ae8: 0xae0302cc  sw          $v1, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
        ctx->pc = 0x194AECu;
        goto label_194aec;
    }
    ctx->pc = 0x194AE4u;
    {
        const bool branch_taken_0x194ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194AE4u;
            // 0x194ae8: 0xae0302cc  sw          $v1, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ae4) {
            ctx->pc = 0x194AFCu;
            goto label_194afc;
        }
    }
    ctx->pc = 0x194AECu;
label_194aec:
    // 0x194aec: 0x0  nop
    ctx->pc = 0x194aecu;
    // NOP
label_194af0:
    // 0x194af0: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_194af4:
    // 0x194af4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194af8:
    // 0x194af8: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x194af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
label_194afc:
    // 0x194afc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194afcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b00:
    // 0x194b00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b04:
    // 0x194b04: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194b04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b08:
    // 0x194b08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b0c:
    // 0x194b0c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194b10:
    // 0x194b10: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b14:
    // 0x194b14: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194b18:
    // 0x194b18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b1c:
    // 0x194b1c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194b20:
    // 0x194b20: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b24:
    // 0x194b24: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194b28:
    // 0x194b28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b2c:
    // 0x194b2c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194b30:
    // 0x194b30: 0x10000004  b           . + 4 + (0x4 << 2)
label_194b34:
    if (ctx->pc == 0x194B34u) {
        ctx->pc = 0x194B34u;
            // 0x194b34: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194B38u;
        goto label_194b38;
    }
    ctx->pc = 0x194B30u;
    {
        const bool branch_taken_0x194b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B30u;
            // 0x194b34: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b30) {
            ctx->pc = 0x194B44u;
            goto label_194b44;
        }
    }
    ctx->pc = 0x194B38u;
label_194b38:
    // 0x194b38: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x194b38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_194b3c:
    // 0x194b3c: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x194b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
label_194b40:
    // 0x194b40: 0x2508000a  addiu       $t0, $t0, 0xA
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
label_194b44:
    // 0x194b44: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x194b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_194b48:
    // 0x194b48: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_194b4c:
    // 0x194b4c: 0x15030012  bne         $t0, $v1, . + 4 + (0x12 << 2)
label_194b50:
    if (ctx->pc == 0x194B50u) {
        ctx->pc = 0x194B50u;
            // 0x194b50: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->pc = 0x194B54u;
        goto label_194b54;
    }
    ctx->pc = 0x194B4Cu;
    {
        const bool branch_taken_0x194b4c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x194B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B4Cu;
            // 0x194b50: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b4c) {
            ctx->pc = 0x194B98u;
            goto label_194b98;
        }
    }
    ctx->pc = 0x194B54u;
label_194b54:
    // 0x194b54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194b58:
    // 0x194b58: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194b58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b5c:
    // 0x194b5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b60:
    // 0x194b60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194b64:
    // 0x194b64: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194b64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b68:
    // 0x194b68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b6c:
    // 0x194b6c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194b70:
    // 0x194b70: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194b70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b74:
    // 0x194b74: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194b78:
    // 0x194b78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b7c:
    // 0x194b7c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194b80:
    // 0x194b80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194b84:
    // 0x194b84: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194b88:
    // 0x194b88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194b8c:
    // 0x194b8c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194b90:
    // 0x194b90: 0x10000003  b           . + 4 + (0x3 << 2)
label_194b94:
    if (ctx->pc == 0x194B94u) {
        ctx->pc = 0x194B94u;
            // 0x194b94: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194B98u;
        goto label_194b98;
    }
    ctx->pc = 0x194B90u;
    {
        const bool branch_taken_0x194b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B90u;
            // 0x194b94: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b90) {
            ctx->pc = 0x194BA0u;
            goto label_194ba0;
        }
    }
    ctx->pc = 0x194B98u;
label_194b98:
    // 0x194b98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x194b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_194b9c:
    // 0x194b9c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_194ba0:
    // 0x194ba0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x194ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_194ba4:
    // 0x194ba4: 0x15020012  bne         $t0, $v0, . + 4 + (0x12 << 2)
label_194ba8:
    if (ctx->pc == 0x194BA8u) {
        ctx->pc = 0x194BA8u;
            // 0x194ba8: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->pc = 0x194BACu;
        goto label_194bac;
    }
    ctx->pc = 0x194BA4u;
    {
        const bool branch_taken_0x194ba4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x194BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BA4u;
            // 0x194ba8: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ba4) {
            ctx->pc = 0x194BF0u;
            goto label_194bf0;
        }
    }
    ctx->pc = 0x194BACu;
label_194bac:
    // 0x194bac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194bb0:
    // 0x194bb0: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194bb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194bb4:
    // 0x194bb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194bb8:
    // 0x194bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194bbc:
    // 0x194bbc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194bbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194bc0:
    // 0x194bc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194bc4:
    // 0x194bc4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194bc8:
    // 0x194bc8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194bcc:
    // 0x194bcc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194bd0:
    // 0x194bd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194bd4:
    // 0x194bd4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194bd8:
    // 0x194bd8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194bdc:
    // 0x194bdc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194be0:
    // 0x194be0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194be4:
    // 0x194be4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194be8:
    // 0x194be8: 0x10000003  b           . + 4 + (0x3 << 2)
label_194bec:
    if (ctx->pc == 0x194BECu) {
        ctx->pc = 0x194BECu;
            // 0x194bec: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194BF0u;
        goto label_194bf0;
    }
    ctx->pc = 0x194BE8u;
    {
        const bool branch_taken_0x194be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BE8u;
            // 0x194bec: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194be8) {
            ctx->pc = 0x194BF8u;
            goto label_194bf8;
        }
    }
    ctx->pc = 0x194BF0u;
label_194bf0:
    // 0x194bf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_194bf4:
    // 0x194bf4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x194bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_194bf8:
    // 0x194bf8: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_194bfc:
    if (ctx->pc == 0x194BFCu) {
        ctx->pc = 0x194BFCu;
            // 0x194bfc: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x194C00u;
        goto label_194c00;
    }
    ctx->pc = 0x194BF8u;
    {
        const bool branch_taken_0x194bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BF8u;
            // 0x194bfc: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bf8) {
            ctx->pc = 0x194C70u;
            goto label_194c70;
        }
    }
    ctx->pc = 0x194C00u;
label_194c00:
    // 0x194c00: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x194c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_194c04:
    // 0x194c04: 0x0  nop
    ctx->pc = 0x194c04u;
    // NOP
label_194c08:
    // 0x194c08: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_194c0c:
    if (ctx->pc == 0x194C0Cu) {
        ctx->pc = 0x194C0Cu;
            // 0x194c0c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x194C10u;
        goto label_194c10;
    }
    ctx->pc = 0x194C08u;
    {
        const bool branch_taken_0x194c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c08) {
            ctx->pc = 0x194C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194C08u;
            // 0x194c0c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194C60u;
            goto label_194c60;
        }
    }
    ctx->pc = 0x194C10u;
label_194c10:
    // 0x194c10: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_194c14:
    // 0x194c14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x194c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194c18:
    // 0x194c18: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x194c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_194c1c:
    // 0x194c1c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x194c1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194c20:
    // 0x194c20: 0x39020000  xori        $v0, $t0, 0x0
    ctx->pc = 0x194c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_194c24:
    // 0x194c24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194c28:
    // 0x194c28: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x194c28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_194c2c:
    // 0x194c2c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194c2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194c30:
    // 0x194c30: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194c34:
    // 0x194c34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194c38:
    // 0x194c38: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194c38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194c3c:
    // 0x194c3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194c40:
    // 0x194c40: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_194c44:
    // 0x194c44: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x194c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194c48:
    // 0x194c48: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194c4c:
    // 0x194c4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_194c50:
    // 0x194c50: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x194c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_194c54:
    // 0x194c54: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x194c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_194c58:
    // 0x194c58: 0x10000002  b           . + 4 + (0x2 << 2)
label_194c5c:
    if (ctx->pc == 0x194C5Cu) {
        ctx->pc = 0x194C5Cu;
            // 0x194c5c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x194C60u;
        goto label_194c60;
    }
    ctx->pc = 0x194C58u;
    {
        const bool branch_taken_0x194c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C58u;
            // 0x194c5c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c58) {
            ctx->pc = 0x194C64u;
            goto label_194c64;
        }
    }
    ctx->pc = 0x194C60u;
label_194c60:
    // 0x194c60: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x194c60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_194c64:
    // 0x194c64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x194c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_194c68:
    // 0x194c68: 0x481ffe7  bgez        $a0, . + 4 + (-0x19 << 2)
label_194c6c:
    if (ctx->pc == 0x194C6Cu) {
        ctx->pc = 0x194C6Cu;
            // 0x194c6c: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->pc = 0x194C70u;
        goto label_194c70;
    }
    ctx->pc = 0x194C68u;
    {
        const bool branch_taken_0x194c68 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x194C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C68u;
            // 0x194c6c: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c68) {
            ctx->pc = 0x194C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194c08;
        }
    }
    ctx->pc = 0x194C70u;
label_194c70:
    // 0x194c70: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_194c74:
    // 0x194c74: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_194c78:
    if (ctx->pc == 0x194C78u) {
        ctx->pc = 0x194C78u;
            // 0x194c78: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->pc = 0x194C7Cu;
        goto label_194c7c;
    }
    ctx->pc = 0x194C74u;
    {
        const bool branch_taken_0x194c74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x194C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C74u;
            // 0x194c78: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c74) {
            ctx->pc = 0x194C88u;
            goto label_194c88;
        }
    }
    ctx->pc = 0x194C7Cu;
label_194c7c:
    // 0x194c7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194c80:
    // 0x194c80: 0x10000002  b           . + 4 + (0x2 << 2)
label_194c84:
    if (ctx->pc == 0x194C84u) {
        ctx->pc = 0x194C84u;
            // 0x194c84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x194C88u;
        goto label_194c88;
    }
    ctx->pc = 0x194C80u;
    {
        const bool branch_taken_0x194c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C80u;
            // 0x194c84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c80) {
            ctx->pc = 0x194C8Cu;
            goto label_194c8c;
        }
    }
    ctx->pc = 0x194C88u;
label_194c88:
    // 0x194c88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x194c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_194c8c:
    // 0x194c8c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_194c90:
    if (ctx->pc == 0x194C90u) {
        ctx->pc = 0x194C90u;
            // 0x194c90: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x194C94u;
        goto label_194c94;
    }
    ctx->pc = 0x194C8Cu;
    {
        const bool branch_taken_0x194c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C8Cu;
            // 0x194c90: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c8c) {
            ctx->pc = 0x194CBCu;
            goto label_194cbc;
        }
    }
    ctx->pc = 0x194C94u;
label_194c94:
    // 0x194c94: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x194c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_194c98:
    // 0x194c98: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_194c9c:
    if (ctx->pc == 0x194C9Cu) {
        ctx->pc = 0x194C9Cu;
            // 0x194c9c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x194CA0u;
        goto label_194ca0;
    }
    ctx->pc = 0x194C98u;
    {
        const bool branch_taken_0x194c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c98) {
            ctx->pc = 0x194C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194C98u;
            // 0x194c9c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194CA8u;
            goto label_194ca8;
        }
    }
    ctx->pc = 0x194CA0u;
label_194ca0:
    // 0x194ca0: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_194ca4:
    // 0x194ca4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_194ca8:
    // 0x194ca8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x194ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_194cac:
    // 0x194cac: 0x0  nop
    ctx->pc = 0x194cacu;
    // NOP
label_194cb0:
    // 0x194cb0: 0x0  nop
    ctx->pc = 0x194cb0u;
    // NOP
label_194cb4:
    // 0x194cb4: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_194cb8:
    if (ctx->pc == 0x194CB8u) {
        ctx->pc = 0x194CB8u;
            // 0x194cb8: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->pc = 0x194CBCu;
        goto label_194cbc;
    }
    ctx->pc = 0x194CB4u;
    {
        const bool branch_taken_0x194cb4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194CB4u;
            // 0x194cb8: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cb4) {
            ctx->pc = 0x194C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194c98;
        }
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194cc0:
    // 0x194cc0: 0x25080007  addiu       $t0, $t0, 0x7
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_194cc4:
    // 0x194cc4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_194cc8:
    // 0x194cc8: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_194ccc:
    // 0x194ccc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x194cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_194cd0:
    // 0x194cd0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_194cd4:
    // 0x194cd4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x194cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_194cd8:
    // 0x194cd8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x194cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_194cdc:
    // 0x194cdc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x194cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_194ce0:
    // 0x194ce0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x194ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_194ce4:
    // 0x194ce4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x194ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_194ce8:
    // 0x194ce8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x194ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_194cec:
    // 0x194cec: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x194cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_194cf0:
    // 0x194cf0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x194cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194cf4:
    // 0x194cf4: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_194cf8:
    // 0x194cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x194cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194cfc:
    // 0x194cfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x194cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194d00:
    // 0x194d00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_194d04:
    // 0x194d04: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x194d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_194d08:
    // 0x194d08: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x194d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_194d0c:
    // 0x194d0c: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_194d10:
    // 0x194d10: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x194d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_194d14:
    // 0x194d14: 0x920302c4  lbu         $v1, 0x2C4($s0)
    ctx->pc = 0x194d14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 708)));
label_194d18:
    // 0x194d18: 0xa2230059  sb          $v1, 0x59($s1)
    ctx->pc = 0x194d18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 3));
label_194d1c:
    // 0x194d1c: 0x920202d0  lbu         $v0, 0x2D0($s0)
    ctx->pc = 0x194d1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
label_194d20:
    // 0x194d20: 0xa222005a  sb          $v0, 0x5A($s1)
    ctx->pc = 0x194d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
label_194d24:
    // 0x194d24: 0x8e0503ac  lw          $a1, 0x3AC($s0)
    ctx->pc = 0x194d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
label_194d28:
    // 0x194d28: 0xc061c20  jal         func_187080
label_194d2c:
    if (ctx->pc == 0x194D2Cu) {
        ctx->pc = 0x194D2Cu;
            // 0x194d2c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->pc = 0x194D30u;
        goto label_194d30;
    }
    ctx->pc = 0x194D28u;
    SET_GPR_U32(ctx, 31, 0x194D30u);
    ctx->pc = 0x194D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D28u;
            // 0x194d2c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D30u; }
        if (ctx->pc != 0x194D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D30u; }
        if (ctx->pc != 0x194D30u) { return; }
    }
    ctx->pc = 0x194D30u;
label_194d30:
    // 0x194d30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x194d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_194d34:
    // 0x194d34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x194d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194d38:
    // 0x194d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194d3c:
    // 0x194d3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x194d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_194d40:
    // 0x194d40: 0x40f809  jalr        $v0
label_194d44:
    if (ctx->pc == 0x194D44u) {
        ctx->pc = 0x194D44u;
            // 0x194d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194D48u;
        goto label_194d48;
    }
    ctx->pc = 0x194D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194D48u);
        ctx->pc = 0x194D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D40u;
            // 0x194d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194D48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194D48u; }
            if (ctx->pc != 0x194D48u) { return; }
        }
        }
    }
    ctx->pc = 0x194D48u;
label_194d48:
    // 0x194d48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x194d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_194d4c:
    // 0x194d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194d50:
    // 0x194d50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194d54:
    // 0x194d54: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_194d58:
    // 0x194d58: 0x40f809  jalr        $v0
label_194d5c:
    if (ctx->pc == 0x194D5Cu) {
        ctx->pc = 0x194D5Cu;
            // 0x194d5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194D60u;
        goto label_194d60;
    }
    ctx->pc = 0x194D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194D60u);
        ctx->pc = 0x194D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D58u;
            // 0x194d5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194D60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194D60u; }
            if (ctx->pc != 0x194D60u) { return; }
        }
        }
    }
    ctx->pc = 0x194D60u;
label_194d60:
    // 0x194d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194d64:
    // 0x194d64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194d68:
    // 0x194d68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x194d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_194d6c:
    // 0x194d6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x194d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194d70:
    // 0x194d70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x194d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_194d74:
    // 0x194d74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194d78:
    // 0x194d78: 0x3e00008  jr          $ra
label_194d7c:
    if (ctx->pc == 0x194D7Cu) {
        ctx->pc = 0x194D7Cu;
            // 0x194d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x194D80u;
        goto label_fallthrough_0x194d78;
    }
    ctx->pc = 0x194D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D78u;
            // 0x194d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x194d78:
    ctx->pc = 0x194D80u;
}
