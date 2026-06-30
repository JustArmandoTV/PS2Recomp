#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5FA0
// Address: 0x3b5fa0 - 0x3b63e0
void sub_003B5FA0_0x3b5fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5FA0_0x3b5fa0");
#endif

    switch (ctx->pc) {
        case 0x3b5fa0u: goto label_3b5fa0;
        case 0x3b5fa4u: goto label_3b5fa4;
        case 0x3b5fa8u: goto label_3b5fa8;
        case 0x3b5facu: goto label_3b5fac;
        case 0x3b5fb0u: goto label_3b5fb0;
        case 0x3b5fb4u: goto label_3b5fb4;
        case 0x3b5fb8u: goto label_3b5fb8;
        case 0x3b5fbcu: goto label_3b5fbc;
        case 0x3b5fc0u: goto label_3b5fc0;
        case 0x3b5fc4u: goto label_3b5fc4;
        case 0x3b5fc8u: goto label_3b5fc8;
        case 0x3b5fccu: goto label_3b5fcc;
        case 0x3b5fd0u: goto label_3b5fd0;
        case 0x3b5fd4u: goto label_3b5fd4;
        case 0x3b5fd8u: goto label_3b5fd8;
        case 0x3b5fdcu: goto label_3b5fdc;
        case 0x3b5fe0u: goto label_3b5fe0;
        case 0x3b5fe4u: goto label_3b5fe4;
        case 0x3b5fe8u: goto label_3b5fe8;
        case 0x3b5fecu: goto label_3b5fec;
        case 0x3b5ff0u: goto label_3b5ff0;
        case 0x3b5ff4u: goto label_3b5ff4;
        case 0x3b5ff8u: goto label_3b5ff8;
        case 0x3b5ffcu: goto label_3b5ffc;
        case 0x3b6000u: goto label_3b6000;
        case 0x3b6004u: goto label_3b6004;
        case 0x3b6008u: goto label_3b6008;
        case 0x3b600cu: goto label_3b600c;
        case 0x3b6010u: goto label_3b6010;
        case 0x3b6014u: goto label_3b6014;
        case 0x3b6018u: goto label_3b6018;
        case 0x3b601cu: goto label_3b601c;
        case 0x3b6020u: goto label_3b6020;
        case 0x3b6024u: goto label_3b6024;
        case 0x3b6028u: goto label_3b6028;
        case 0x3b602cu: goto label_3b602c;
        case 0x3b6030u: goto label_3b6030;
        case 0x3b6034u: goto label_3b6034;
        case 0x3b6038u: goto label_3b6038;
        case 0x3b603cu: goto label_3b603c;
        case 0x3b6040u: goto label_3b6040;
        case 0x3b6044u: goto label_3b6044;
        case 0x3b6048u: goto label_3b6048;
        case 0x3b604cu: goto label_3b604c;
        case 0x3b6050u: goto label_3b6050;
        case 0x3b6054u: goto label_3b6054;
        case 0x3b6058u: goto label_3b6058;
        case 0x3b605cu: goto label_3b605c;
        case 0x3b6060u: goto label_3b6060;
        case 0x3b6064u: goto label_3b6064;
        case 0x3b6068u: goto label_3b6068;
        case 0x3b606cu: goto label_3b606c;
        case 0x3b6070u: goto label_3b6070;
        case 0x3b6074u: goto label_3b6074;
        case 0x3b6078u: goto label_3b6078;
        case 0x3b607cu: goto label_3b607c;
        case 0x3b6080u: goto label_3b6080;
        case 0x3b6084u: goto label_3b6084;
        case 0x3b6088u: goto label_3b6088;
        case 0x3b608cu: goto label_3b608c;
        case 0x3b6090u: goto label_3b6090;
        case 0x3b6094u: goto label_3b6094;
        case 0x3b6098u: goto label_3b6098;
        case 0x3b609cu: goto label_3b609c;
        case 0x3b60a0u: goto label_3b60a0;
        case 0x3b60a4u: goto label_3b60a4;
        case 0x3b60a8u: goto label_3b60a8;
        case 0x3b60acu: goto label_3b60ac;
        case 0x3b60b0u: goto label_3b60b0;
        case 0x3b60b4u: goto label_3b60b4;
        case 0x3b60b8u: goto label_3b60b8;
        case 0x3b60bcu: goto label_3b60bc;
        case 0x3b60c0u: goto label_3b60c0;
        case 0x3b60c4u: goto label_3b60c4;
        case 0x3b60c8u: goto label_3b60c8;
        case 0x3b60ccu: goto label_3b60cc;
        case 0x3b60d0u: goto label_3b60d0;
        case 0x3b60d4u: goto label_3b60d4;
        case 0x3b60d8u: goto label_3b60d8;
        case 0x3b60dcu: goto label_3b60dc;
        case 0x3b60e0u: goto label_3b60e0;
        case 0x3b60e4u: goto label_3b60e4;
        case 0x3b60e8u: goto label_3b60e8;
        case 0x3b60ecu: goto label_3b60ec;
        case 0x3b60f0u: goto label_3b60f0;
        case 0x3b60f4u: goto label_3b60f4;
        case 0x3b60f8u: goto label_3b60f8;
        case 0x3b60fcu: goto label_3b60fc;
        case 0x3b6100u: goto label_3b6100;
        case 0x3b6104u: goto label_3b6104;
        case 0x3b6108u: goto label_3b6108;
        case 0x3b610cu: goto label_3b610c;
        case 0x3b6110u: goto label_3b6110;
        case 0x3b6114u: goto label_3b6114;
        case 0x3b6118u: goto label_3b6118;
        case 0x3b611cu: goto label_3b611c;
        case 0x3b6120u: goto label_3b6120;
        case 0x3b6124u: goto label_3b6124;
        case 0x3b6128u: goto label_3b6128;
        case 0x3b612cu: goto label_3b612c;
        case 0x3b6130u: goto label_3b6130;
        case 0x3b6134u: goto label_3b6134;
        case 0x3b6138u: goto label_3b6138;
        case 0x3b613cu: goto label_3b613c;
        case 0x3b6140u: goto label_3b6140;
        case 0x3b6144u: goto label_3b6144;
        case 0x3b6148u: goto label_3b6148;
        case 0x3b614cu: goto label_3b614c;
        case 0x3b6150u: goto label_3b6150;
        case 0x3b6154u: goto label_3b6154;
        case 0x3b6158u: goto label_3b6158;
        case 0x3b615cu: goto label_3b615c;
        case 0x3b6160u: goto label_3b6160;
        case 0x3b6164u: goto label_3b6164;
        case 0x3b6168u: goto label_3b6168;
        case 0x3b616cu: goto label_3b616c;
        case 0x3b6170u: goto label_3b6170;
        case 0x3b6174u: goto label_3b6174;
        case 0x3b6178u: goto label_3b6178;
        case 0x3b617cu: goto label_3b617c;
        case 0x3b6180u: goto label_3b6180;
        case 0x3b6184u: goto label_3b6184;
        case 0x3b6188u: goto label_3b6188;
        case 0x3b618cu: goto label_3b618c;
        case 0x3b6190u: goto label_3b6190;
        case 0x3b6194u: goto label_3b6194;
        case 0x3b6198u: goto label_3b6198;
        case 0x3b619cu: goto label_3b619c;
        case 0x3b61a0u: goto label_3b61a0;
        case 0x3b61a4u: goto label_3b61a4;
        case 0x3b61a8u: goto label_3b61a8;
        case 0x3b61acu: goto label_3b61ac;
        case 0x3b61b0u: goto label_3b61b0;
        case 0x3b61b4u: goto label_3b61b4;
        case 0x3b61b8u: goto label_3b61b8;
        case 0x3b61bcu: goto label_3b61bc;
        case 0x3b61c0u: goto label_3b61c0;
        case 0x3b61c4u: goto label_3b61c4;
        case 0x3b61c8u: goto label_3b61c8;
        case 0x3b61ccu: goto label_3b61cc;
        case 0x3b61d0u: goto label_3b61d0;
        case 0x3b61d4u: goto label_3b61d4;
        case 0x3b61d8u: goto label_3b61d8;
        case 0x3b61dcu: goto label_3b61dc;
        case 0x3b61e0u: goto label_3b61e0;
        case 0x3b61e4u: goto label_3b61e4;
        case 0x3b61e8u: goto label_3b61e8;
        case 0x3b61ecu: goto label_3b61ec;
        case 0x3b61f0u: goto label_3b61f0;
        case 0x3b61f4u: goto label_3b61f4;
        case 0x3b61f8u: goto label_3b61f8;
        case 0x3b61fcu: goto label_3b61fc;
        case 0x3b6200u: goto label_3b6200;
        case 0x3b6204u: goto label_3b6204;
        case 0x3b6208u: goto label_3b6208;
        case 0x3b620cu: goto label_3b620c;
        case 0x3b6210u: goto label_3b6210;
        case 0x3b6214u: goto label_3b6214;
        case 0x3b6218u: goto label_3b6218;
        case 0x3b621cu: goto label_3b621c;
        case 0x3b6220u: goto label_3b6220;
        case 0x3b6224u: goto label_3b6224;
        case 0x3b6228u: goto label_3b6228;
        case 0x3b622cu: goto label_3b622c;
        case 0x3b6230u: goto label_3b6230;
        case 0x3b6234u: goto label_3b6234;
        case 0x3b6238u: goto label_3b6238;
        case 0x3b623cu: goto label_3b623c;
        case 0x3b6240u: goto label_3b6240;
        case 0x3b6244u: goto label_3b6244;
        case 0x3b6248u: goto label_3b6248;
        case 0x3b624cu: goto label_3b624c;
        case 0x3b6250u: goto label_3b6250;
        case 0x3b6254u: goto label_3b6254;
        case 0x3b6258u: goto label_3b6258;
        case 0x3b625cu: goto label_3b625c;
        case 0x3b6260u: goto label_3b6260;
        case 0x3b6264u: goto label_3b6264;
        case 0x3b6268u: goto label_3b6268;
        case 0x3b626cu: goto label_3b626c;
        case 0x3b6270u: goto label_3b6270;
        case 0x3b6274u: goto label_3b6274;
        case 0x3b6278u: goto label_3b6278;
        case 0x3b627cu: goto label_3b627c;
        case 0x3b6280u: goto label_3b6280;
        case 0x3b6284u: goto label_3b6284;
        case 0x3b6288u: goto label_3b6288;
        case 0x3b628cu: goto label_3b628c;
        case 0x3b6290u: goto label_3b6290;
        case 0x3b6294u: goto label_3b6294;
        case 0x3b6298u: goto label_3b6298;
        case 0x3b629cu: goto label_3b629c;
        case 0x3b62a0u: goto label_3b62a0;
        case 0x3b62a4u: goto label_3b62a4;
        case 0x3b62a8u: goto label_3b62a8;
        case 0x3b62acu: goto label_3b62ac;
        case 0x3b62b0u: goto label_3b62b0;
        case 0x3b62b4u: goto label_3b62b4;
        case 0x3b62b8u: goto label_3b62b8;
        case 0x3b62bcu: goto label_3b62bc;
        case 0x3b62c0u: goto label_3b62c0;
        case 0x3b62c4u: goto label_3b62c4;
        case 0x3b62c8u: goto label_3b62c8;
        case 0x3b62ccu: goto label_3b62cc;
        case 0x3b62d0u: goto label_3b62d0;
        case 0x3b62d4u: goto label_3b62d4;
        case 0x3b62d8u: goto label_3b62d8;
        case 0x3b62dcu: goto label_3b62dc;
        case 0x3b62e0u: goto label_3b62e0;
        case 0x3b62e4u: goto label_3b62e4;
        case 0x3b62e8u: goto label_3b62e8;
        case 0x3b62ecu: goto label_3b62ec;
        case 0x3b62f0u: goto label_3b62f0;
        case 0x3b62f4u: goto label_3b62f4;
        case 0x3b62f8u: goto label_3b62f8;
        case 0x3b62fcu: goto label_3b62fc;
        case 0x3b6300u: goto label_3b6300;
        case 0x3b6304u: goto label_3b6304;
        case 0x3b6308u: goto label_3b6308;
        case 0x3b630cu: goto label_3b630c;
        case 0x3b6310u: goto label_3b6310;
        case 0x3b6314u: goto label_3b6314;
        case 0x3b6318u: goto label_3b6318;
        case 0x3b631cu: goto label_3b631c;
        case 0x3b6320u: goto label_3b6320;
        case 0x3b6324u: goto label_3b6324;
        case 0x3b6328u: goto label_3b6328;
        case 0x3b632cu: goto label_3b632c;
        case 0x3b6330u: goto label_3b6330;
        case 0x3b6334u: goto label_3b6334;
        case 0x3b6338u: goto label_3b6338;
        case 0x3b633cu: goto label_3b633c;
        case 0x3b6340u: goto label_3b6340;
        case 0x3b6344u: goto label_3b6344;
        case 0x3b6348u: goto label_3b6348;
        case 0x3b634cu: goto label_3b634c;
        case 0x3b6350u: goto label_3b6350;
        case 0x3b6354u: goto label_3b6354;
        case 0x3b6358u: goto label_3b6358;
        case 0x3b635cu: goto label_3b635c;
        case 0x3b6360u: goto label_3b6360;
        case 0x3b6364u: goto label_3b6364;
        case 0x3b6368u: goto label_3b6368;
        case 0x3b636cu: goto label_3b636c;
        case 0x3b6370u: goto label_3b6370;
        case 0x3b6374u: goto label_3b6374;
        case 0x3b6378u: goto label_3b6378;
        case 0x3b637cu: goto label_3b637c;
        case 0x3b6380u: goto label_3b6380;
        case 0x3b6384u: goto label_3b6384;
        case 0x3b6388u: goto label_3b6388;
        case 0x3b638cu: goto label_3b638c;
        case 0x3b6390u: goto label_3b6390;
        case 0x3b6394u: goto label_3b6394;
        case 0x3b6398u: goto label_3b6398;
        case 0x3b639cu: goto label_3b639c;
        case 0x3b63a0u: goto label_3b63a0;
        case 0x3b63a4u: goto label_3b63a4;
        case 0x3b63a8u: goto label_3b63a8;
        case 0x3b63acu: goto label_3b63ac;
        case 0x3b63b0u: goto label_3b63b0;
        case 0x3b63b4u: goto label_3b63b4;
        case 0x3b63b8u: goto label_3b63b8;
        case 0x3b63bcu: goto label_3b63bc;
        case 0x3b63c0u: goto label_3b63c0;
        case 0x3b63c4u: goto label_3b63c4;
        case 0x3b63c8u: goto label_3b63c8;
        case 0x3b63ccu: goto label_3b63cc;
        case 0x3b63d0u: goto label_3b63d0;
        case 0x3b63d4u: goto label_3b63d4;
        case 0x3b63d8u: goto label_3b63d8;
        case 0x3b63dcu: goto label_3b63dc;
        default: break;
    }

    ctx->pc = 0x3b5fa0u;

label_3b5fa0:
    // 0x3b5fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b5fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b5fa4:
    // 0x3b5fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b5fa8:
    // 0x3b5fa8: 0xc04cb20  jal         func_132C80
label_3b5fac:
    if (ctx->pc == 0x3B5FACu) {
        ctx->pc = 0x3B5FB0u;
        goto label_3b5fb0;
    }
    ctx->pc = 0x3B5FA8u;
    SET_GPR_U32(ctx, 31, 0x3B5FB0u);
    ctx->pc = 0x132C80u;
    if (runtime->hasFunction(0x132C80u)) {
        auto targetFn = runtime->lookupFunction(0x132C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5FB0u; }
        if (ctx->pc != 0x3B5FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C80_0x132c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5FB0u; }
        if (ctx->pc != 0x3B5FB0u) { return; }
    }
    ctx->pc = 0x3B5FB0u;
label_3b5fb0:
    // 0x3b5fb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b5fb4:
    // 0x3b5fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b5fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5fb8:
    // 0x3b5fb8: 0x0  nop
    ctx->pc = 0x3b5fb8u;
    // NOP
label_3b5fbc:
    // 0x3b5fbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b5fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b5fc0:
    // 0x3b5fc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3b5fc4:
    if (ctx->pc == 0x3B5FC4u) {
        ctx->pc = 0x3B5FC4u;
            // 0x3b5fc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B5FC8u;
        goto label_3b5fc8;
    }
    ctx->pc = 0x3B5FC0u;
    {
        const bool branch_taken_0x3b5fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B5FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5FC0u;
            // 0x3b5fc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5fc0) {
            ctx->pc = 0x3B5FCCu;
            goto label_3b5fcc;
        }
    }
    ctx->pc = 0x3B5FC8u;
label_3b5fc8:
    // 0x3b5fc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b5fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5fcc:
    // 0x3b5fcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3b5fd0:
    // 0x3b5fd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3b5fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b5fd4:
    // 0x3b5fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b5fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5fd8:
    // 0x3b5fd8: 0x0  nop
    ctx->pc = 0x3b5fd8u;
    // NOP
label_3b5fdc:
    // 0x3b5fdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b5fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b5fe0:
    // 0x3b5fe0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3b5fe4:
    if (ctx->pc == 0x3B5FE4u) {
        ctx->pc = 0x3B5FE4u;
            // 0x3b5fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B5FE8u;
        goto label_3b5fe8;
    }
    ctx->pc = 0x3B5FE0u;
    {
        const bool branch_taken_0x3b5fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B5FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5FE0u;
            // 0x3b5fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5fe0) {
            ctx->pc = 0x3B5FECu;
            goto label_3b5fec;
        }
    }
    ctx->pc = 0x3B5FE8u;
label_3b5fe8:
    // 0x3b5fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b5fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5fec:
    // 0x3b5fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b5fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b5ff0:
    // 0x3b5ff0: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3b5ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3b5ff4:
    // 0x3b5ff4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3b5ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3b5ff8:
    // 0x3b5ff8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3b5ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5ffc:
    // 0x3b5ffc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3b5ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3b6000:
    // 0x3b6000: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b6000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b6004:
    // 0x3b6004: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3b6004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b6008:
    // 0x3b6008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b6008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b600c:
    // 0x3b600c: 0x0  nop
    ctx->pc = 0x3b600cu;
    // NOP
label_3b6010:
    // 0x3b6010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b6010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b6014:
    // 0x3b6014: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b6014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b6018:
    // 0x3b6018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b6018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b601c:
    // 0x3b601c: 0x0  nop
    ctx->pc = 0x3b601cu;
    // NOP
label_3b6020:
    // 0x3b6020: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b6020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b6024:
    // 0x3b6024: 0xc0477fe  jal         func_11DFF8
label_3b6028:
    if (ctx->pc == 0x3B6028u) {
        ctx->pc = 0x3B6028u;
            // 0x3b6028: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3B602Cu;
        goto label_3b602c;
    }
    ctx->pc = 0x3B6024u;
    SET_GPR_U32(ctx, 31, 0x3B602Cu);
    ctx->pc = 0x3B6028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6024u;
            // 0x3b6028: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B602Cu; }
        if (ctx->pc != 0x3B602Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B602Cu; }
        if (ctx->pc != 0x3B602Cu) { return; }
    }
    ctx->pc = 0x3B602Cu;
label_3b602c:
    // 0x3b602c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6030:
    // 0x3b6030: 0x3e00008  jr          $ra
label_3b6034:
    if (ctx->pc == 0x3B6034u) {
        ctx->pc = 0x3B6034u;
            // 0x3b6034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3B6038u;
        goto label_3b6038;
    }
    ctx->pc = 0x3B6030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6030u;
            // 0x3b6034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6038u;
label_3b6038:
    // 0x3b6038: 0x0  nop
    ctx->pc = 0x3b6038u;
    // NOP
label_3b603c:
    // 0x3b603c: 0x0  nop
    ctx->pc = 0x3b603cu;
    // NOP
label_3b6040:
    // 0x3b6040: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3b6040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3b6044:
    // 0x3b6044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b6044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b6048:
    // 0x3b6048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b6048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b604c:
    // 0x3b604c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b6050:
    // 0x3b6050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b6050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b6054:
    // 0x3b6054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b6058:
    // 0x3b6058: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3b6058u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3b605c:
    // 0x3b605c: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_3b6060:
    if (ctx->pc == 0x3B6060u) {
        ctx->pc = 0x3B6060u;
            // 0x3b6060: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6064u;
        goto label_3b6064;
    }
    ctx->pc = 0x3B605Cu;
    {
        const bool branch_taken_0x3b605c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B605Cu;
            // 0x3b6060: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b605c) {
            ctx->pc = 0x3B609Cu;
            goto label_3b609c;
        }
    }
    ctx->pc = 0x3B6064u;
label_3b6064:
    // 0x3b6064: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b6068:
    // 0x3b6068: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3b606c:
    if (ctx->pc == 0x3B606Cu) {
        ctx->pc = 0x3B606Cu;
            // 0x3b606c: 0xa2400cb2  sb          $zero, 0xCB2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3250), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3B6070u;
        goto label_3b6070;
    }
    ctx->pc = 0x3B6068u;
    {
        const bool branch_taken_0x3b6068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b6068) {
            ctx->pc = 0x3B606Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6068u;
            // 0x3b606c: 0xa2400cb2  sb          $zero, 0xCB2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3250), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6078u;
            goto label_3b6078;
        }
    }
    ctx->pc = 0x3B6070u;
label_3b6070:
    // 0x3b6070: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_3b6074:
    if (ctx->pc == 0x3B6074u) {
        ctx->pc = 0x3B6074u;
            // 0x3b6074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3B6078u;
        goto label_3b6078;
    }
    ctx->pc = 0x3B6070u;
    {
        const bool branch_taken_0x3b6070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6070u;
            // 0x3b6074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6070) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6078u;
label_3b6078:
    // 0x3b6078: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b607c:
    // 0x3b607c: 0xa2400cb0  sb          $zero, 0xCB0($s2)
    ctx->pc = 0x3b607cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3248), (uint8_t)GPR_U32(ctx, 0));
label_3b6080:
    // 0x3b6080: 0xa2420cb1  sb          $v0, 0xCB1($s2)
    ctx->pc = 0x3b6080u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3249), (uint8_t)GPR_U32(ctx, 2));
label_3b6084:
    // 0x3b6084: 0xae400ca4  sw          $zero, 0xCA4($s2)
    ctx->pc = 0x3b6084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3236), GPR_U32(ctx, 0));
label_3b6088:
    // 0x3b6088: 0xae400ca0  sw          $zero, 0xCA0($s2)
    ctx->pc = 0x3b6088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3232), GPR_U32(ctx, 0));
label_3b608c:
    // 0x3b608c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b608cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b6090:
    // 0x3b6090: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3b6090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3b6094:
    // 0x3b6094: 0x320f809  jalr        $t9
label_3b6098:
    if (ctx->pc == 0x3B6098u) {
        ctx->pc = 0x3B609Cu;
        goto label_3b609c;
    }
    ctx->pc = 0x3B6094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B609Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B609Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B609Cu; }
            if (ctx->pc != 0x3B609Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B609Cu;
label_3b609c:
    // 0x3b609c: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b60a0:
    // 0x3b60a0: 0x26440c20  addiu       $a0, $s2, 0xC20
    ctx->pc = 0x3b60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3104));
label_3b60a4:
    // 0x3b60a4: 0xc04cc04  jal         func_133010
label_3b60a8:
    if (ctx->pc == 0x3B60A8u) {
        ctx->pc = 0x3B60A8u;
            // 0x3b60a8: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x3B60ACu;
        goto label_3b60ac;
    }
    ctx->pc = 0x3B60A4u;
    SET_GPR_U32(ctx, 31, 0x3B60ACu);
    ctx->pc = 0x3B60A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B60A4u;
            // 0x3b60a8: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B60ACu; }
        if (ctx->pc != 0x3B60ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B60ACu; }
        if (ctx->pc != 0x3B60ACu) { return; }
    }
    ctx->pc = 0x3B60ACu;
label_3b60ac:
    // 0x3b60ac: 0x8e450cc4  lw          $a1, 0xCC4($s2)
    ctx->pc = 0x3b60acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b60b0:
    // 0x3b60b0: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3b60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3b60b4:
    // 0x3b60b4: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x3b60b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3b60b8:
    // 0x3b60b8: 0x26440ba0  addiu       $a0, $s2, 0xBA0
    ctx->pc = 0x3b60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2976));
label_3b60bc:
    // 0x3b60bc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3b60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3b60c0:
    // 0x3b60c0: 0xc4a20de4  lwc1        $f2, 0xDE4($a1)
    ctx->pc = 0x3b60c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b60c4:
    // 0x3b60c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b60c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b60c8:
    // 0x3b60c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b60c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b60cc:
    // 0x3b60cc: 0x0  nop
    ctx->pc = 0x3b60ccu;
    // NOP
label_3b60d0:
    // 0x3b60d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b60d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3b60d4:
    // 0x3b60d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b60d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b60d8:
    // 0x3b60d8: 0xe6400ca8  swc1        $f0, 0xCA8($s2)
    ctx->pc = 0x3b60d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3240), bits); }
label_3b60dc:
    // 0x3b60dc: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b60e0:
    // 0x3b60e0: 0xc4400dc4  lwc1        $f0, 0xDC4($v0)
    ctx->pc = 0x3b60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b60e4:
    // 0x3b60e4: 0xe6400cac  swc1        $f0, 0xCAC($s2)
    ctx->pc = 0x3b60e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3244), bits); }
label_3b60e8:
    // 0x3b60e8: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b60ec:
    // 0x3b60ec: 0xc04cce8  jal         func_1333A0
label_3b60f0:
    if (ctx->pc == 0x3B60F0u) {
        ctx->pc = 0x3B60F0u;
            // 0x3b60f0: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3B60F4u;
        goto label_3b60f4;
    }
    ctx->pc = 0x3B60ECu;
    SET_GPR_U32(ctx, 31, 0x3B60F4u);
    ctx->pc = 0x3B60F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B60ECu;
            // 0x3b60f0: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B60F4u; }
        if (ctx->pc != 0x3B60F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B60F4u; }
        if (ctx->pc != 0x3B60F4u) { return; }
    }
    ctx->pc = 0x3B60F4u;
label_3b60f4:
    // 0x3b60f4: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b60f8:
    // 0x3b60f8: 0x26440be0  addiu       $a0, $s2, 0xBE0
    ctx->pc = 0x3b60f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3040));
label_3b60fc:
    // 0x3b60fc: 0xc04cce8  jal         func_1333A0
label_3b6100:
    if (ctx->pc == 0x3B6100u) {
        ctx->pc = 0x3B6100u;
            // 0x3b6100: 0x24450890  addiu       $a1, $v0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
        ctx->pc = 0x3B6104u;
        goto label_3b6104;
    }
    ctx->pc = 0x3B60FCu;
    SET_GPR_U32(ctx, 31, 0x3B6104u);
    ctx->pc = 0x3B6100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B60FCu;
            // 0x3b6100: 0x24450890  addiu       $a1, $v0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6104u; }
        if (ctx->pc != 0x3B6104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6104u; }
        if (ctx->pc != 0x3B6104u) { return; }
    }
    ctx->pc = 0x3B6104u;
label_3b6104:
    // 0x3b6104: 0x8e440cc4  lw          $a0, 0xCC4($s2)
    ctx->pc = 0x3b6104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b6108:
    // 0x3b6108: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3b6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3b610c:
    // 0x3b610c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3b610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3b6110:
    // 0x3b6110: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
label_3b6114:
    if (ctx->pc == 0x3B6114u) {
        ctx->pc = 0x3B6114u;
            // 0x3b6114: 0x8c820d70  lw          $v0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x3B6118u;
        goto label_3b6118;
    }
    ctx->pc = 0x3B6110u;
    {
        const bool branch_taken_0x3b6110 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b6110) {
            ctx->pc = 0x3B6114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6110u;
            // 0x3b6114: 0x8c820d70  lw          $v0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B612Cu;
            goto label_3b612c;
        }
    }
    ctx->pc = 0x3B6118u;
label_3b6118:
    // 0x3b6118: 0x8c820d70  lw          $v0, 0xD70($a0)
    ctx->pc = 0x3b6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3b611c:
    // 0x3b611c: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x3b611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3b6120:
    // 0x3b6120: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3b6124:
    if (ctx->pc == 0x3B6124u) {
        ctx->pc = 0x3B6128u;
        goto label_3b6128;
    }
    ctx->pc = 0x3B6120u;
    {
        const bool branch_taken_0x3b6120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6120) {
            ctx->pc = 0x3B6194u;
            goto label_3b6194;
        }
    }
    ctx->pc = 0x3B6128u;
label_3b6128:
    // 0x3b6128: 0x8c820d70  lw          $v0, 0xD70($a0)
    ctx->pc = 0x3b6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3b612c:
    // 0x3b612c: 0x8c4500cc  lw          $a1, 0xCC($v0)
    ctx->pc = 0x3b612cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3b6130:
    // 0x3b6130: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_3b6134:
    if (ctx->pc == 0x3B6134u) {
        ctx->pc = 0x3B6138u;
        goto label_3b6138;
    }
    ctx->pc = 0x3B6130u;
    {
        const bool branch_taken_0x3b6130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6130) {
            ctx->pc = 0x3B6158u;
            goto label_3b6158;
        }
    }
    ctx->pc = 0x3B6138u;
label_3b6138:
    // 0x3b6138: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x3b6138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3b613c:
    // 0x3b613c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3b613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3b6140:
    // 0x3b6140: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x3b6140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_3b6144:
    // 0x3b6144: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_3b6148:
    if (ctx->pc == 0x3B6148u) {
        ctx->pc = 0x3B614Cu;
        goto label_3b614c;
    }
    ctx->pc = 0x3B6144u;
    {
        const bool branch_taken_0x3b6144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6144) {
            ctx->pc = 0x3B6194u;
            goto label_3b6194;
        }
    }
    ctx->pc = 0x3B614Cu;
label_3b614c:
    // 0x3b614c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3b614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b6150:
    // 0x3b6150: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_3b6154:
    if (ctx->pc == 0x3B6154u) {
        ctx->pc = 0x3B6158u;
        goto label_3b6158;
    }
    ctx->pc = 0x3B6150u;
    {
        const bool branch_taken_0x3b6150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6150) {
            ctx->pc = 0x3B6194u;
            goto label_3b6194;
        }
    }
    ctx->pc = 0x3B6158u;
label_3b6158:
    // 0x3b6158: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_3b615c:
    if (ctx->pc == 0x3B615Cu) {
        ctx->pc = 0x3B615Cu;
            // 0x3b615c: 0x92450cc1  lbu         $a1, 0xCC1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3265)));
        ctx->pc = 0x3B6160u;
        goto label_3b6160;
    }
    ctx->pc = 0x3B6158u;
    {
        const bool branch_taken_0x3b6158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6158) {
            ctx->pc = 0x3B615Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6158u;
            // 0x3b615c: 0x92450cc1  lbu         $a1, 0xCC1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3265)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6184u;
            goto label_3b6184;
        }
    }
    ctx->pc = 0x3B6160u;
label_3b6160:
    // 0x3b6160: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x3b6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3b6164:
    // 0x3b6164: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3b6164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3b6168:
    // 0x3b6168: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x3b6168u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_3b616c:
    // 0x3b616c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3b6170:
    if (ctx->pc == 0x3B6170u) {
        ctx->pc = 0x3B6174u;
        goto label_3b6174;
    }
    ctx->pc = 0x3B616Cu;
    {
        const bool branch_taken_0x3b616c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b616c) {
            ctx->pc = 0x3B6194u;
            goto label_3b6194;
        }
    }
    ctx->pc = 0x3B6174u;
label_3b6174:
    // 0x3b6174: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3b6178:
    // 0x3b6178: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3b617c:
    if (ctx->pc == 0x3B617Cu) {
        ctx->pc = 0x3B6180u;
        goto label_3b6180;
    }
    ctx->pc = 0x3B6178u;
    {
        const bool branch_taken_0x3b6178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6178) {
            ctx->pc = 0x3B6194u;
            goto label_3b6194;
        }
    }
    ctx->pc = 0x3B6180u;
label_3b6180:
    // 0x3b6180: 0x92450cc1  lbu         $a1, 0xCC1($s2)
    ctx->pc = 0x3b6180u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3265)));
label_3b6184:
    // 0x3b6184: 0xc076220  jal         func_1D8880
label_3b6188:
    if (ctx->pc == 0x3B6188u) {
        ctx->pc = 0x3B618Cu;
        goto label_3b618c;
    }
    ctx->pc = 0x3B6184u;
    SET_GPR_U32(ctx, 31, 0x3B618Cu);
    ctx->pc = 0x1D8880u;
    if (runtime->hasFunction(0x1D8880u)) {
        auto targetFn = runtime->lookupFunction(0x1D8880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B618Cu; }
        if (ctx->pc != 0x3B618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8880_0x1d8880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B618Cu; }
        if (ctx->pc != 0x3B618Cu) { return; }
    }
    ctx->pc = 0x3B618Cu;
label_3b618c:
    // 0x3b618c: 0x1000008d  b           . + 4 + (0x8D << 2)
label_3b6190:
    if (ctx->pc == 0x3B6190u) {
        ctx->pc = 0x3B6194u;
        goto label_3b6194;
    }
    ctx->pc = 0x3B618Cu;
    {
        const bool branch_taken_0x3b618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b618c) {
            ctx->pc = 0x3B63C4u;
            goto label_3b63c4;
        }
    }
    ctx->pc = 0x3B6194u;
label_3b6194:
    // 0x3b6194: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3b6194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3b6198:
    // 0x3b6198: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3b6198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3b619c:
    // 0x3b619c: 0xc440f540  lwc1        $f0, -0xAC0($v0)
    ctx->pc = 0x3b619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b61a0:
    // 0x3b61a0: 0xc462f544  lwc1        $f2, -0xABC($v1)
    ctx->pc = 0x3b61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b61a4:
    // 0x3b61a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3b61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3b61a8:
    // 0x3b61a8: 0xc441f548  lwc1        $f1, -0xAB8($v0)
    ctx->pc = 0x3b61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b61ac:
    // 0x3b61ac: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3b61acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3b61b0:
    // 0x3b61b0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3b61b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3b61b4:
    // 0x3b61b4: 0xc460f54c  lwc1        $f0, -0xAB4($v1)
    ctx->pc = 0x3b61b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b61b8:
    // 0x3b61b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b61bc:
    // 0x3b61bc: 0x8c51e360  lw          $s1, -0x1CA0($v0)
    ctx->pc = 0x3b61bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3b61c0:
    // 0x3b61c0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x3b61c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3b61c4:
    // 0x3b61c4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3b61c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3b61c8:
    // 0x3b61c8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3b61c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_3b61cc:
    // 0x3b61cc: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b61d0:
    // 0x3b61d0: 0x8c440d6c  lw          $a0, 0xD6C($v0)
    ctx->pc = 0x3b61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_3b61d4:
    // 0x3b61d4: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3b61d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3b61d8:
    // 0x3b61d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b61d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b61dc:
    // 0x3b61dc: 0x320f809  jalr        $t9
label_3b61e0:
    if (ctx->pc == 0x3B61E0u) {
        ctx->pc = 0x3B61E0u;
            // 0x3b61e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B61E4u;
        goto label_3b61e4;
    }
    ctx->pc = 0x3B61DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B61E4u);
        ctx->pc = 0x3B61E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B61DCu;
            // 0x3b61e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B61E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B61E4u; }
            if (ctx->pc != 0x3B61E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3B61E4u;
label_3b61e4:
    // 0x3b61e4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3b61e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b61e8:
    // 0x3b61e8: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b61ec:
    // 0x3b61ec: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x3b61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_3b61f0:
    // 0x3b61f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3b61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b61f4:
    // 0x3b61f4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x3b61f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_3b61f8:
    // 0x3b61f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3b61f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3b61fc:
    // 0x3b61fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3b61fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3b6200:
    // 0x3b6200: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b6204:
    if (ctx->pc == 0x3B6204u) {
        ctx->pc = 0x3B6204u;
            // 0x3b6204: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B6208u;
        goto label_3b6208;
    }
    ctx->pc = 0x3B6200u;
    {
        const bool branch_taken_0x3b6200 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b6200) {
            ctx->pc = 0x3B6204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6200u;
            // 0x3b6204: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6214u;
            goto label_3b6214;
        }
    }
    ctx->pc = 0x3B6208u;
label_3b6208:
    // 0x3b6208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b6208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b620c:
    // 0x3b620c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b6210:
    if (ctx->pc == 0x3B6210u) {
        ctx->pc = 0x3B6210u;
            // 0x3b6210: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B6214u;
        goto label_3b6214;
    }
    ctx->pc = 0x3B620Cu;
    {
        const bool branch_taken_0x3b620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B620Cu;
            // 0x3b6210: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b620c) {
            ctx->pc = 0x3B622Cu;
            goto label_3b622c;
        }
    }
    ctx->pc = 0x3B6214u;
label_3b6214:
    // 0x3b6214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b6214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b6218:
    // 0x3b6218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b6218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b621c:
    // 0x3b621c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b621cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6220:
    // 0x3b6220: 0x0  nop
    ctx->pc = 0x3b6220u;
    // NOP
label_3b6224:
    // 0x3b6224: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b6224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b6228:
    // 0x3b6228: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b6228u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b622c:
    // 0x3b622c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3b6230:
    // 0x3b6230: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x3b6230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_3b6234:
    // 0x3b6234: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3b6234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b6238:
    // 0x3b6238: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3b6238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b623c:
    // 0x3b623c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b623cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6240:
    // 0x3b6240: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b6240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b6244:
    // 0x3b6244: 0x0  nop
    ctx->pc = 0x3b6244u;
    // NOP
label_3b6248:
    // 0x3b6248: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x3b6248u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_3b624c:
    // 0x3b624c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3b624cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_3b6250:
    // 0x3b6250: 0xc04f3f4  jal         func_13CFD0
label_3b6254:
    if (ctx->pc == 0x3B6254u) {
        ctx->pc = 0x3B6254u;
            // 0x3b6254: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3B6258u;
        goto label_3b6258;
    }
    ctx->pc = 0x3B6250u;
    SET_GPR_U32(ctx, 31, 0x3B6258u);
    ctx->pc = 0x3B6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6250u;
            // 0x3b6254: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6258u; }
        if (ctx->pc != 0x3B6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6258u; }
        if (ctx->pc != 0x3B6258u) { return; }
    }
    ctx->pc = 0x3B6258u;
label_3b6258:
    // 0x3b6258: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3b6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b625c:
    // 0x3b625c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3b625cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3b6260:
    // 0x3b6260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b6260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6264:
    // 0x3b6264: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x3b6264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_3b6268:
    // 0x3b6268: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3b6268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3b626c:
    // 0x3b626c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3b626cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b6270:
    // 0x3b6270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b6270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b6274:
    // 0x3b6274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b6274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b6278:
    // 0x3b6278: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3b6278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b627c:
    // 0x3b627c: 0xc0517b0  jal         func_145EC0
label_3b6280:
    if (ctx->pc == 0x3B6280u) {
        ctx->pc = 0x3B6280u;
            // 0x3b6280: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3B6284u;
        goto label_3b6284;
    }
    ctx->pc = 0x3B627Cu;
    SET_GPR_U32(ctx, 31, 0x3B6284u);
    ctx->pc = 0x3B6280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B627Cu;
            // 0x3b6280: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6284u; }
        if (ctx->pc != 0x3B6284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6284u; }
        if (ctx->pc != 0x3B6284u) { return; }
    }
    ctx->pc = 0x3B6284u;
label_3b6284:
    // 0x3b6284: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3b6284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3b6288:
    // 0x3b6288: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b6288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b628c:
    // 0x3b628c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3b628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3b6290:
    // 0x3b6290: 0xc04cce8  jal         func_1333A0
label_3b6294:
    if (ctx->pc == 0x3B6294u) {
        ctx->pc = 0x3B6294u;
            // 0x3b6294: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x3B6298u;
        goto label_3b6298;
    }
    ctx->pc = 0x3B6290u;
    SET_GPR_U32(ctx, 31, 0x3B6298u);
    ctx->pc = 0x3B6294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6290u;
            // 0x3b6294: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6298u; }
        if (ctx->pc != 0x3B6298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6298u; }
        if (ctx->pc != 0x3B6298u) { return; }
    }
    ctx->pc = 0x3B6298u;
label_3b6298:
    // 0x3b6298: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b6298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b629c:
    // 0x3b629c: 0xc04cce4  jal         func_133390
label_3b62a0:
    if (ctx->pc == 0x3B62A0u) {
        ctx->pc = 0x3B62A0u;
            // 0x3b62a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3B62A4u;
        goto label_3b62a4;
    }
    ctx->pc = 0x3B629Cu;
    SET_GPR_U32(ctx, 31, 0x3B62A4u);
    ctx->pc = 0x3B62A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B629Cu;
            // 0x3b62a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62A4u; }
        if (ctx->pc != 0x3B62A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62A4u; }
        if (ctx->pc != 0x3B62A4u) { return; }
    }
    ctx->pc = 0x3B62A4u;
label_3b62a4:
    // 0x3b62a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b62a8:
    // 0x3b62a8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3b62a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3b62ac:
    // 0x3b62ac: 0xc04cbe0  jal         func_132F80
label_3b62b0:
    if (ctx->pc == 0x3B62B0u) {
        ctx->pc = 0x3B62B0u;
            // 0x3b62b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B62B4u;
        goto label_3b62b4;
    }
    ctx->pc = 0x3B62ACu;
    SET_GPR_U32(ctx, 31, 0x3B62B4u);
    ctx->pc = 0x3B62B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B62ACu;
            // 0x3b62b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62B4u; }
        if (ctx->pc != 0x3B62B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62B4u; }
        if (ctx->pc != 0x3B62B4u) { return; }
    }
    ctx->pc = 0x3B62B4u;
label_3b62b4:
    // 0x3b62b4: 0x8e430cc4  lw          $v1, 0xCC4($s2)
    ctx->pc = 0x3b62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b62b8:
    // 0x3b62b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b62bc:
    // 0x3b62bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b62bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b62c0:
    // 0x3b62c0: 0x90620e3d  lbu         $v0, 0xE3D($v1)
    ctx->pc = 0x3b62c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3645)));
label_3b62c4:
    // 0x3b62c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3b62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3b62c8:
    // 0x3b62c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b62cc:
    // 0x3b62cc: 0xc04cca0  jal         func_133280
label_3b62d0:
    if (ctx->pc == 0x3B62D0u) {
        ctx->pc = 0x3B62D0u;
            // 0x3b62d0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x3B62D4u;
        goto label_3b62d4;
    }
    ctx->pc = 0x3B62CCu;
    SET_GPR_U32(ctx, 31, 0x3B62D4u);
    ctx->pc = 0x3B62D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B62CCu;
            // 0x3b62d0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62D4u; }
        if (ctx->pc != 0x3B62D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62D4u; }
        if (ctx->pc != 0x3B62D4u) { return; }
    }
    ctx->pc = 0x3B62D4u;
label_3b62d4:
    // 0x3b62d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b62d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b62d8:
    // 0x3b62d8: 0xc0ed410  jal         func_3B5040
label_3b62dc:
    if (ctx->pc == 0x3B62DCu) {
        ctx->pc = 0x3B62DCu;
            // 0x3b62dc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3B62E0u;
        goto label_3b62e0;
    }
    ctx->pc = 0x3B62D8u;
    SET_GPR_U32(ctx, 31, 0x3B62E0u);
    ctx->pc = 0x3B62DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B62D8u;
            // 0x3b62dc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5040u;
    if (runtime->hasFunction(0x3B5040u)) {
        auto targetFn = runtime->lookupFunction(0x3B5040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62E0u; }
        if (ctx->pc != 0x3B62E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5040_0x3b5040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B62E0u; }
        if (ctx->pc != 0x3B62E0u) { return; }
    }
    ctx->pc = 0x3B62E0u;
label_3b62e0:
    // 0x3b62e0: 0x8e440cc4  lw          $a0, 0xCC4($s2)
    ctx->pc = 0x3b62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b62e4:
    // 0x3b62e4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3b62e4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3b62e8:
    // 0x3b62e8: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3b62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3b62ec:
    // 0x3b62ec: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3b62f0:
    if (ctx->pc == 0x3B62F0u) {
        ctx->pc = 0x3B62F0u;
            // 0x3b62f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B62F4u;
        goto label_3b62f4;
    }
    ctx->pc = 0x3B62ECu;
    {
        const bool branch_taken_0x3b62ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3B62F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B62ECu;
            // 0x3b62f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62ec) {
            ctx->pc = 0x3B6304u;
            goto label_3b6304;
        }
    }
    ctx->pc = 0x3B62F4u;
label_3b62f4:
    // 0x3b62f4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3b62f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3b62f8:
    // 0x3b62f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3b62fc:
    if (ctx->pc == 0x3B62FCu) {
        ctx->pc = 0x3B6300u;
        goto label_3b6300;
    }
    ctx->pc = 0x3B62F8u;
    {
        const bool branch_taken_0x3b62f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b62f8) {
            ctx->pc = 0x3B6304u;
            goto label_3b6304;
        }
    }
    ctx->pc = 0x3B6300u;
label_3b6300:
    // 0x3b6300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b6300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6304:
    // 0x3b6304: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3b6308:
    if (ctx->pc == 0x3B6308u) {
        ctx->pc = 0x3B630Cu;
        goto label_3b630c;
    }
    ctx->pc = 0x3B6304u;
    {
        const bool branch_taken_0x3b6304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6304) {
            ctx->pc = 0x3B6320u;
            goto label_3b6320;
        }
    }
    ctx->pc = 0x3B630Cu;
label_3b630c:
    // 0x3b630c: 0xc075eb4  jal         func_1D7AD0
label_3b6310:
    if (ctx->pc == 0x3B6310u) {
        ctx->pc = 0x3B6314u;
        goto label_3b6314;
    }
    ctx->pc = 0x3B630Cu;
    SET_GPR_U32(ctx, 31, 0x3B6314u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6314u; }
        if (ctx->pc != 0x3B6314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6314u; }
        if (ctx->pc != 0x3B6314u) { return; }
    }
    ctx->pc = 0x3B6314u;
label_3b6314:
    // 0x3b6314: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3b6318:
    if (ctx->pc == 0x3B6318u) {
        ctx->pc = 0x3B631Cu;
        goto label_3b631c;
    }
    ctx->pc = 0x3B6314u;
    {
        const bool branch_taken_0x3b6314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6314) {
            ctx->pc = 0x3B6320u;
            goto label_3b6320;
        }
    }
    ctx->pc = 0x3B631Cu;
label_3b631c:
    // 0x3b631c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b631cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6320:
    // 0x3b6320: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_3b6324:
    if (ctx->pc == 0x3B6324u) {
        ctx->pc = 0x3B6324u;
            // 0x3b6324: 0x8e440cc4  lw          $a0, 0xCC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
        ctx->pc = 0x3B6328u;
        goto label_3b6328;
    }
    ctx->pc = 0x3B6320u;
    {
        const bool branch_taken_0x3b6320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6320) {
            ctx->pc = 0x3B6324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6320u;
            // 0x3b6324: 0x8e440cc4  lw          $a0, 0xCC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6340u;
            goto label_3b6340;
        }
    }
    ctx->pc = 0x3B6328u;
label_3b6328:
    // 0x3b6328: 0x8e440cc4  lw          $a0, 0xCC4($s2)
    ctx->pc = 0x3b6328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b632c:
    // 0x3b632c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b6330:
    // 0x3b6330: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3b6330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3b6334:
    // 0x3b6334: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_3b6338:
    if (ctx->pc == 0x3B6338u) {
        ctx->pc = 0x3B633Cu;
        goto label_3b633c;
    }
    ctx->pc = 0x3B6334u;
    {
        const bool branch_taken_0x3b6334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b6334) {
            ctx->pc = 0x3B63C4u;
            goto label_3b63c4;
        }
    }
    ctx->pc = 0x3B633Cu;
label_3b633c:
    // 0x3b633c: 0x8e440cc4  lw          $a0, 0xCC4($s2)
    ctx->pc = 0x3b633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
label_3b6340:
    // 0x3b6340: 0x3c03be80  lui         $v1, 0xBE80
    ctx->pc = 0x3b6340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48768 << 16));
label_3b6344:
    // 0x3b6344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b6344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6348:
    // 0x3b6348: 0xc4810dc4  lwc1        $f1, 0xDC4($a0)
    ctx->pc = 0x3b6348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b634c:
    // 0x3b634c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b634cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b6350:
    // 0x3b6350: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3b6354:
    if (ctx->pc == 0x3B6354u) {
        ctx->pc = 0x3B6354u;
            // 0x3b6354: 0x8e440cc8  lw          $a0, 0xCC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->pc = 0x3B6358u;
        goto label_3b6358;
    }
    ctx->pc = 0x3B6350u;
    {
        const bool branch_taken_0x3b6350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b6350) {
            ctx->pc = 0x3B6354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6350u;
            // 0x3b6354: 0x8e440cc8  lw          $a0, 0xCC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6374u;
            goto label_3b6374;
        }
    }
    ctx->pc = 0x3B6358u;
label_3b6358:
    // 0x3b6358: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3b6358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_3b635c:
    // 0x3b635c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b635cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6360:
    // 0x3b6360: 0x0  nop
    ctx->pc = 0x3b6360u;
    // NOP
label_3b6364:
    // 0x3b6364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b6364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b6368:
    // 0x3b6368: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_3b636c:
    if (ctx->pc == 0x3B636Cu) {
        ctx->pc = 0x3B636Cu;
            // 0x3b636c: 0x8e440ccc  lw          $a0, 0xCCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3276)));
        ctx->pc = 0x3B6370u;
        goto label_3b6370;
    }
    ctx->pc = 0x3B6368u;
    {
        const bool branch_taken_0x3b6368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b6368) {
            ctx->pc = 0x3B636Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6368u;
            // 0x3b636c: 0x8e440ccc  lw          $a0, 0xCCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3276)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B63A0u;
            goto label_3b63a0;
        }
    }
    ctx->pc = 0x3B6370u;
label_3b6370:
    // 0x3b6370: 0x8e440cc8  lw          $a0, 0xCC8($s2)
    ctx->pc = 0x3b6370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
label_3b6374:
    // 0x3b6374: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3b6378:
    if (ctx->pc == 0x3B6378u) {
        ctx->pc = 0x3B6378u;
            // 0x3b6378: 0x8e440ccc  lw          $a0, 0xCCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3276)));
        ctx->pc = 0x3B637Cu;
        goto label_3b637c;
    }
    ctx->pc = 0x3B6374u;
    {
        const bool branch_taken_0x3b6374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6374) {
            ctx->pc = 0x3B6378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6374u;
            // 0x3b6378: 0x8e440ccc  lw          $a0, 0xCCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3276)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6388u;
            goto label_3b6388;
        }
    }
    ctx->pc = 0x3B637Cu;
label_3b637c:
    // 0x3b637c: 0xc10c9b4  jal         func_4326D0
label_3b6380:
    if (ctx->pc == 0x3B6380u) {
        ctx->pc = 0x3B6384u;
        goto label_3b6384;
    }
    ctx->pc = 0x3B637Cu;
    SET_GPR_U32(ctx, 31, 0x3B6384u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6384u; }
        if (ctx->pc != 0x3B6384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6384u; }
        if (ctx->pc != 0x3B6384u) { return; }
    }
    ctx->pc = 0x3B6384u;
label_3b6384:
    // 0x3b6384: 0x8e440ccc  lw          $a0, 0xCCC($s2)
    ctx->pc = 0x3b6384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3276)));
label_3b6388:
    // 0x3b6388: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_3b638c:
    if (ctx->pc == 0x3B638Cu) {
        ctx->pc = 0x3B6390u;
        goto label_3b6390;
    }
    ctx->pc = 0x3B6388u;
    {
        const bool branch_taken_0x3b6388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6388) {
            ctx->pc = 0x3B63C4u;
            goto label_3b63c4;
        }
    }
    ctx->pc = 0x3B6390u;
label_3b6390:
    // 0x3b6390: 0xc10c9d8  jal         func_432760
label_3b6394:
    if (ctx->pc == 0x3B6394u) {
        ctx->pc = 0x3B6398u;
        goto label_3b6398;
    }
    ctx->pc = 0x3B6390u;
    SET_GPR_U32(ctx, 31, 0x3B6398u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6398u; }
        if (ctx->pc != 0x3B6398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6398u; }
        if (ctx->pc != 0x3B6398u) { return; }
    }
    ctx->pc = 0x3B6398u;
label_3b6398:
    // 0x3b6398: 0x1000000a  b           . + 4 + (0xA << 2)
label_3b639c:
    if (ctx->pc == 0x3B639Cu) {
        ctx->pc = 0x3B63A0u;
        goto label_3b63a0;
    }
    ctx->pc = 0x3B6398u;
    {
        const bool branch_taken_0x3b6398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6398) {
            ctx->pc = 0x3B63C4u;
            goto label_3b63c4;
        }
    }
    ctx->pc = 0x3B63A0u;
label_3b63a0:
    // 0x3b63a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3b63a4:
    if (ctx->pc == 0x3B63A4u) {
        ctx->pc = 0x3B63A4u;
            // 0x3b63a4: 0x8e440cc8  lw          $a0, 0xCC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->pc = 0x3B63A8u;
        goto label_3b63a8;
    }
    ctx->pc = 0x3B63A0u;
    {
        const bool branch_taken_0x3b63a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b63a0) {
            ctx->pc = 0x3B63A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B63A0u;
            // 0x3b63a4: 0x8e440cc8  lw          $a0, 0xCC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B63B4u;
            goto label_3b63b4;
        }
    }
    ctx->pc = 0x3B63A8u;
label_3b63a8:
    // 0x3b63a8: 0xc10c9b4  jal         func_4326D0
label_3b63ac:
    if (ctx->pc == 0x3B63ACu) {
        ctx->pc = 0x3B63B0u;
        goto label_3b63b0;
    }
    ctx->pc = 0x3B63A8u;
    SET_GPR_U32(ctx, 31, 0x3B63B0u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B63B0u; }
        if (ctx->pc != 0x3B63B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B63B0u; }
        if (ctx->pc != 0x3B63B0u) { return; }
    }
    ctx->pc = 0x3B63B0u;
label_3b63b0:
    // 0x3b63b0: 0x8e440cc8  lw          $a0, 0xCC8($s2)
    ctx->pc = 0x3b63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
label_3b63b4:
    // 0x3b63b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3b63b8:
    if (ctx->pc == 0x3B63B8u) {
        ctx->pc = 0x3B63BCu;
        goto label_3b63bc;
    }
    ctx->pc = 0x3B63B4u;
    {
        const bool branch_taken_0x3b63b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b63b4) {
            ctx->pc = 0x3B63C4u;
            goto label_3b63c4;
        }
    }
    ctx->pc = 0x3B63BCu;
label_3b63bc:
    // 0x3b63bc: 0xc10c9d8  jal         func_432760
label_3b63c0:
    if (ctx->pc == 0x3B63C0u) {
        ctx->pc = 0x3B63C4u;
        goto label_3b63c4;
    }
    ctx->pc = 0x3B63BCu;
    SET_GPR_U32(ctx, 31, 0x3B63C4u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B63C4u; }
        if (ctx->pc != 0x3B63C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B63C4u; }
        if (ctx->pc != 0x3B63C4u) { return; }
    }
    ctx->pc = 0x3B63C4u;
label_3b63c4:
    // 0x3b63c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b63c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b63c8:
    // 0x3b63c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b63c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b63cc:
    // 0x3b63cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b63ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b63d0:
    // 0x3b63d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b63d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b63d4:
    // 0x3b63d4: 0x3e00008  jr          $ra
label_3b63d8:
    if (ctx->pc == 0x3B63D8u) {
        ctx->pc = 0x3B63D8u;
            // 0x3b63d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3B63DCu;
        goto label_3b63dc;
    }
    ctx->pc = 0x3B63D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B63D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B63D4u;
            // 0x3b63d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B63DCu;
label_3b63dc:
    // 0x3b63dc: 0x0  nop
    ctx->pc = 0x3b63dcu;
    // NOP
}
