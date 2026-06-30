#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D170
// Address: 0x53d170 - 0x53d590
void sub_0053D170_0x53d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D170_0x53d170");
#endif

    switch (ctx->pc) {
        case 0x53d170u: goto label_53d170;
        case 0x53d174u: goto label_53d174;
        case 0x53d178u: goto label_53d178;
        case 0x53d17cu: goto label_53d17c;
        case 0x53d180u: goto label_53d180;
        case 0x53d184u: goto label_53d184;
        case 0x53d188u: goto label_53d188;
        case 0x53d18cu: goto label_53d18c;
        case 0x53d190u: goto label_53d190;
        case 0x53d194u: goto label_53d194;
        case 0x53d198u: goto label_53d198;
        case 0x53d19cu: goto label_53d19c;
        case 0x53d1a0u: goto label_53d1a0;
        case 0x53d1a4u: goto label_53d1a4;
        case 0x53d1a8u: goto label_53d1a8;
        case 0x53d1acu: goto label_53d1ac;
        case 0x53d1b0u: goto label_53d1b0;
        case 0x53d1b4u: goto label_53d1b4;
        case 0x53d1b8u: goto label_53d1b8;
        case 0x53d1bcu: goto label_53d1bc;
        case 0x53d1c0u: goto label_53d1c0;
        case 0x53d1c4u: goto label_53d1c4;
        case 0x53d1c8u: goto label_53d1c8;
        case 0x53d1ccu: goto label_53d1cc;
        case 0x53d1d0u: goto label_53d1d0;
        case 0x53d1d4u: goto label_53d1d4;
        case 0x53d1d8u: goto label_53d1d8;
        case 0x53d1dcu: goto label_53d1dc;
        case 0x53d1e0u: goto label_53d1e0;
        case 0x53d1e4u: goto label_53d1e4;
        case 0x53d1e8u: goto label_53d1e8;
        case 0x53d1ecu: goto label_53d1ec;
        case 0x53d1f0u: goto label_53d1f0;
        case 0x53d1f4u: goto label_53d1f4;
        case 0x53d1f8u: goto label_53d1f8;
        case 0x53d1fcu: goto label_53d1fc;
        case 0x53d200u: goto label_53d200;
        case 0x53d204u: goto label_53d204;
        case 0x53d208u: goto label_53d208;
        case 0x53d20cu: goto label_53d20c;
        case 0x53d210u: goto label_53d210;
        case 0x53d214u: goto label_53d214;
        case 0x53d218u: goto label_53d218;
        case 0x53d21cu: goto label_53d21c;
        case 0x53d220u: goto label_53d220;
        case 0x53d224u: goto label_53d224;
        case 0x53d228u: goto label_53d228;
        case 0x53d22cu: goto label_53d22c;
        case 0x53d230u: goto label_53d230;
        case 0x53d234u: goto label_53d234;
        case 0x53d238u: goto label_53d238;
        case 0x53d23cu: goto label_53d23c;
        case 0x53d240u: goto label_53d240;
        case 0x53d244u: goto label_53d244;
        case 0x53d248u: goto label_53d248;
        case 0x53d24cu: goto label_53d24c;
        case 0x53d250u: goto label_53d250;
        case 0x53d254u: goto label_53d254;
        case 0x53d258u: goto label_53d258;
        case 0x53d25cu: goto label_53d25c;
        case 0x53d260u: goto label_53d260;
        case 0x53d264u: goto label_53d264;
        case 0x53d268u: goto label_53d268;
        case 0x53d26cu: goto label_53d26c;
        case 0x53d270u: goto label_53d270;
        case 0x53d274u: goto label_53d274;
        case 0x53d278u: goto label_53d278;
        case 0x53d27cu: goto label_53d27c;
        case 0x53d280u: goto label_53d280;
        case 0x53d284u: goto label_53d284;
        case 0x53d288u: goto label_53d288;
        case 0x53d28cu: goto label_53d28c;
        case 0x53d290u: goto label_53d290;
        case 0x53d294u: goto label_53d294;
        case 0x53d298u: goto label_53d298;
        case 0x53d29cu: goto label_53d29c;
        case 0x53d2a0u: goto label_53d2a0;
        case 0x53d2a4u: goto label_53d2a4;
        case 0x53d2a8u: goto label_53d2a8;
        case 0x53d2acu: goto label_53d2ac;
        case 0x53d2b0u: goto label_53d2b0;
        case 0x53d2b4u: goto label_53d2b4;
        case 0x53d2b8u: goto label_53d2b8;
        case 0x53d2bcu: goto label_53d2bc;
        case 0x53d2c0u: goto label_53d2c0;
        case 0x53d2c4u: goto label_53d2c4;
        case 0x53d2c8u: goto label_53d2c8;
        case 0x53d2ccu: goto label_53d2cc;
        case 0x53d2d0u: goto label_53d2d0;
        case 0x53d2d4u: goto label_53d2d4;
        case 0x53d2d8u: goto label_53d2d8;
        case 0x53d2dcu: goto label_53d2dc;
        case 0x53d2e0u: goto label_53d2e0;
        case 0x53d2e4u: goto label_53d2e4;
        case 0x53d2e8u: goto label_53d2e8;
        case 0x53d2ecu: goto label_53d2ec;
        case 0x53d2f0u: goto label_53d2f0;
        case 0x53d2f4u: goto label_53d2f4;
        case 0x53d2f8u: goto label_53d2f8;
        case 0x53d2fcu: goto label_53d2fc;
        case 0x53d300u: goto label_53d300;
        case 0x53d304u: goto label_53d304;
        case 0x53d308u: goto label_53d308;
        case 0x53d30cu: goto label_53d30c;
        case 0x53d310u: goto label_53d310;
        case 0x53d314u: goto label_53d314;
        case 0x53d318u: goto label_53d318;
        case 0x53d31cu: goto label_53d31c;
        case 0x53d320u: goto label_53d320;
        case 0x53d324u: goto label_53d324;
        case 0x53d328u: goto label_53d328;
        case 0x53d32cu: goto label_53d32c;
        case 0x53d330u: goto label_53d330;
        case 0x53d334u: goto label_53d334;
        case 0x53d338u: goto label_53d338;
        case 0x53d33cu: goto label_53d33c;
        case 0x53d340u: goto label_53d340;
        case 0x53d344u: goto label_53d344;
        case 0x53d348u: goto label_53d348;
        case 0x53d34cu: goto label_53d34c;
        case 0x53d350u: goto label_53d350;
        case 0x53d354u: goto label_53d354;
        case 0x53d358u: goto label_53d358;
        case 0x53d35cu: goto label_53d35c;
        case 0x53d360u: goto label_53d360;
        case 0x53d364u: goto label_53d364;
        case 0x53d368u: goto label_53d368;
        case 0x53d36cu: goto label_53d36c;
        case 0x53d370u: goto label_53d370;
        case 0x53d374u: goto label_53d374;
        case 0x53d378u: goto label_53d378;
        case 0x53d37cu: goto label_53d37c;
        case 0x53d380u: goto label_53d380;
        case 0x53d384u: goto label_53d384;
        case 0x53d388u: goto label_53d388;
        case 0x53d38cu: goto label_53d38c;
        case 0x53d390u: goto label_53d390;
        case 0x53d394u: goto label_53d394;
        case 0x53d398u: goto label_53d398;
        case 0x53d39cu: goto label_53d39c;
        case 0x53d3a0u: goto label_53d3a0;
        case 0x53d3a4u: goto label_53d3a4;
        case 0x53d3a8u: goto label_53d3a8;
        case 0x53d3acu: goto label_53d3ac;
        case 0x53d3b0u: goto label_53d3b0;
        case 0x53d3b4u: goto label_53d3b4;
        case 0x53d3b8u: goto label_53d3b8;
        case 0x53d3bcu: goto label_53d3bc;
        case 0x53d3c0u: goto label_53d3c0;
        case 0x53d3c4u: goto label_53d3c4;
        case 0x53d3c8u: goto label_53d3c8;
        case 0x53d3ccu: goto label_53d3cc;
        case 0x53d3d0u: goto label_53d3d0;
        case 0x53d3d4u: goto label_53d3d4;
        case 0x53d3d8u: goto label_53d3d8;
        case 0x53d3dcu: goto label_53d3dc;
        case 0x53d3e0u: goto label_53d3e0;
        case 0x53d3e4u: goto label_53d3e4;
        case 0x53d3e8u: goto label_53d3e8;
        case 0x53d3ecu: goto label_53d3ec;
        case 0x53d3f0u: goto label_53d3f0;
        case 0x53d3f4u: goto label_53d3f4;
        case 0x53d3f8u: goto label_53d3f8;
        case 0x53d3fcu: goto label_53d3fc;
        case 0x53d400u: goto label_53d400;
        case 0x53d404u: goto label_53d404;
        case 0x53d408u: goto label_53d408;
        case 0x53d40cu: goto label_53d40c;
        case 0x53d410u: goto label_53d410;
        case 0x53d414u: goto label_53d414;
        case 0x53d418u: goto label_53d418;
        case 0x53d41cu: goto label_53d41c;
        case 0x53d420u: goto label_53d420;
        case 0x53d424u: goto label_53d424;
        case 0x53d428u: goto label_53d428;
        case 0x53d42cu: goto label_53d42c;
        case 0x53d430u: goto label_53d430;
        case 0x53d434u: goto label_53d434;
        case 0x53d438u: goto label_53d438;
        case 0x53d43cu: goto label_53d43c;
        case 0x53d440u: goto label_53d440;
        case 0x53d444u: goto label_53d444;
        case 0x53d448u: goto label_53d448;
        case 0x53d44cu: goto label_53d44c;
        case 0x53d450u: goto label_53d450;
        case 0x53d454u: goto label_53d454;
        case 0x53d458u: goto label_53d458;
        case 0x53d45cu: goto label_53d45c;
        case 0x53d460u: goto label_53d460;
        case 0x53d464u: goto label_53d464;
        case 0x53d468u: goto label_53d468;
        case 0x53d46cu: goto label_53d46c;
        case 0x53d470u: goto label_53d470;
        case 0x53d474u: goto label_53d474;
        case 0x53d478u: goto label_53d478;
        case 0x53d47cu: goto label_53d47c;
        case 0x53d480u: goto label_53d480;
        case 0x53d484u: goto label_53d484;
        case 0x53d488u: goto label_53d488;
        case 0x53d48cu: goto label_53d48c;
        case 0x53d490u: goto label_53d490;
        case 0x53d494u: goto label_53d494;
        case 0x53d498u: goto label_53d498;
        case 0x53d49cu: goto label_53d49c;
        case 0x53d4a0u: goto label_53d4a0;
        case 0x53d4a4u: goto label_53d4a4;
        case 0x53d4a8u: goto label_53d4a8;
        case 0x53d4acu: goto label_53d4ac;
        case 0x53d4b0u: goto label_53d4b0;
        case 0x53d4b4u: goto label_53d4b4;
        case 0x53d4b8u: goto label_53d4b8;
        case 0x53d4bcu: goto label_53d4bc;
        case 0x53d4c0u: goto label_53d4c0;
        case 0x53d4c4u: goto label_53d4c4;
        case 0x53d4c8u: goto label_53d4c8;
        case 0x53d4ccu: goto label_53d4cc;
        case 0x53d4d0u: goto label_53d4d0;
        case 0x53d4d4u: goto label_53d4d4;
        case 0x53d4d8u: goto label_53d4d8;
        case 0x53d4dcu: goto label_53d4dc;
        case 0x53d4e0u: goto label_53d4e0;
        case 0x53d4e4u: goto label_53d4e4;
        case 0x53d4e8u: goto label_53d4e8;
        case 0x53d4ecu: goto label_53d4ec;
        case 0x53d4f0u: goto label_53d4f0;
        case 0x53d4f4u: goto label_53d4f4;
        case 0x53d4f8u: goto label_53d4f8;
        case 0x53d4fcu: goto label_53d4fc;
        case 0x53d500u: goto label_53d500;
        case 0x53d504u: goto label_53d504;
        case 0x53d508u: goto label_53d508;
        case 0x53d50cu: goto label_53d50c;
        case 0x53d510u: goto label_53d510;
        case 0x53d514u: goto label_53d514;
        case 0x53d518u: goto label_53d518;
        case 0x53d51cu: goto label_53d51c;
        case 0x53d520u: goto label_53d520;
        case 0x53d524u: goto label_53d524;
        case 0x53d528u: goto label_53d528;
        case 0x53d52cu: goto label_53d52c;
        case 0x53d530u: goto label_53d530;
        case 0x53d534u: goto label_53d534;
        case 0x53d538u: goto label_53d538;
        case 0x53d53cu: goto label_53d53c;
        case 0x53d540u: goto label_53d540;
        case 0x53d544u: goto label_53d544;
        case 0x53d548u: goto label_53d548;
        case 0x53d54cu: goto label_53d54c;
        case 0x53d550u: goto label_53d550;
        case 0x53d554u: goto label_53d554;
        case 0x53d558u: goto label_53d558;
        case 0x53d55cu: goto label_53d55c;
        case 0x53d560u: goto label_53d560;
        case 0x53d564u: goto label_53d564;
        case 0x53d568u: goto label_53d568;
        case 0x53d56cu: goto label_53d56c;
        case 0x53d570u: goto label_53d570;
        case 0x53d574u: goto label_53d574;
        case 0x53d578u: goto label_53d578;
        case 0x53d57cu: goto label_53d57c;
        case 0x53d580u: goto label_53d580;
        case 0x53d584u: goto label_53d584;
        case 0x53d588u: goto label_53d588;
        case 0x53d58cu: goto label_53d58c;
        default: break;
    }

    ctx->pc = 0x53d170u;

label_53d170:
    // 0x53d170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53d174:
    // 0x53d174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d178:
    // 0x53d178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53d17c:
    // 0x53d17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53d180:
    // 0x53d180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d184:
    // 0x53d184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53d184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53d188:
    // 0x53d188: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x53d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53d18c:
    // 0x53d18c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x53d18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53d190:
    // 0x53d190: 0xa043007e  sb          $v1, 0x7E($v0)
    ctx->pc = 0x53d190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 126), (uint8_t)GPR_U32(ctx, 3));
label_53d194:
    // 0x53d194: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x53d194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53d198:
    // 0x53d198: 0xc159648  jal         func_565920
label_53d19c:
    if (ctx->pc == 0x53D19Cu) {
        ctx->pc = 0x53D19Cu;
            // 0x53d19c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x53D1A0u;
        goto label_53d1a0;
    }
    ctx->pc = 0x53D198u;
    SET_GPR_U32(ctx, 31, 0x53D1A0u);
    ctx->pc = 0x53D19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53D198u;
            // 0x53d19c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565920u;
    if (runtime->hasFunction(0x565920u)) {
        auto targetFn = runtime->lookupFunction(0x565920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D1A0u; }
        if (ctx->pc != 0x53D1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565920_0x565920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D1A0u; }
        if (ctx->pc != 0x53D1A0u) { return; }
    }
    ctx->pc = 0x53D1A0u;
label_53d1a0:
    // 0x53d1a0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x53d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_53d1a4:
    // 0x53d1a4: 0x3a040001  xori        $a0, $s0, 0x1
    ctx->pc = 0x53d1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_53d1a8:
    // 0x53d1a8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x53d1a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_53d1ac:
    // 0x53d1ac: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x53d1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
label_53d1b0:
    // 0x53d1b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53d1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53d1b4:
    // 0x53d1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53d1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53d1b8:
    // 0x53d1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d1bc:
    // 0x53d1bc: 0x3e00008  jr          $ra
label_53d1c0:
    if (ctx->pc == 0x53D1C0u) {
        ctx->pc = 0x53D1C0u;
            // 0x53d1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53D1C4u;
        goto label_53d1c4;
    }
    ctx->pc = 0x53D1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D1BCu;
            // 0x53d1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D1C4u;
label_53d1c4:
    // 0x53d1c4: 0x0  nop
    ctx->pc = 0x53d1c4u;
    // NOP
label_53d1c8:
    // 0x53d1c8: 0x0  nop
    ctx->pc = 0x53d1c8u;
    // NOP
label_53d1cc:
    // 0x53d1cc: 0x0  nop
    ctx->pc = 0x53d1ccu;
    // NOP
label_53d1d0:
    // 0x53d1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53d1d4:
    // 0x53d1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53d1d8:
    // 0x53d1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d1dc:
    // 0x53d1dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d1e0:
    // 0x53d1e0: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x53d1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_53d1e4:
    // 0x53d1e4: 0x320f809  jalr        $t9
label_53d1e8:
    if (ctx->pc == 0x53D1E8u) {
        ctx->pc = 0x53D1E8u;
            // 0x53d1e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D1ECu;
        goto label_53d1ec;
    }
    ctx->pc = 0x53D1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D1ECu);
        ctx->pc = 0x53D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D1E4u;
            // 0x53d1e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D1ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D1ECu; }
            if (ctx->pc != 0x53D1ECu) { return; }
        }
        }
    }
    ctx->pc = 0x53D1ECu;
label_53d1ec:
    // 0x53d1ec: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x53d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_53d1f0:
    // 0x53d1f0: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x53d1f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_53d1f4:
    // 0x53d1f4: 0x5020006f  beql        $at, $zero, . + 4 + (0x6F << 2)
label_53d1f8:
    if (ctx->pc == 0x53D1F8u) {
        ctx->pc = 0x53D1F8u;
            // 0x53d1f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x53D1FCu;
        goto label_53d1fc;
    }
    ctx->pc = 0x53D1F4u;
    {
        const bool branch_taken_0x53d1f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d1f4) {
            ctx->pc = 0x53D1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D1F4u;
            // 0x53d1f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D3B4u;
            goto label_53d3b4;
        }
    }
    ctx->pc = 0x53D1FCu;
label_53d1fc:
    // 0x53d1fc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x53d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_53d200:
    // 0x53d200: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53d200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53d204:
    // 0x53d204: 0x2484d500  addiu       $a0, $a0, -0x2B00
    ctx->pc = 0x53d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956288));
label_53d208:
    // 0x53d208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x53d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_53d20c:
    // 0x53d20c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x53d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53d210:
    // 0x53d210: 0x600008  jr          $v1
label_53d214:
    if (ctx->pc == 0x53D214u) {
        ctx->pc = 0x53D218u;
        goto label_53d218;
    }
    ctx->pc = 0x53D210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x53D218u: goto label_53d218;
            case 0x53D230u: goto label_53d230;
            case 0x53D248u: goto label_53d248;
            case 0x53D288u: goto label_53d288;
            case 0x53D2A0u: goto label_53d2a0;
            case 0x53D2B8u: goto label_53d2b8;
            case 0x53D2D0u: goto label_53d2d0;
            case 0x53D2E8u: goto label_53d2e8;
            case 0x53D358u: goto label_53d358;
            case 0x53D370u: goto label_53d370;
            case 0x53D388u: goto label_53d388;
            case 0x53D3A0u: goto label_53d3a0;
            case 0x53D3B0u: goto label_53d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x53D218u;
label_53d218:
    // 0x53d218: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d21c:
    // 0x53d21c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x53d21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_53d220:
    // 0x53d220: 0x320f809  jalr        $t9
label_53d224:
    if (ctx->pc == 0x53D224u) {
        ctx->pc = 0x53D224u;
            // 0x53d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D228u;
        goto label_53d228;
    }
    ctx->pc = 0x53D220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D228u);
        ctx->pc = 0x53D224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D220u;
            // 0x53d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D228u; }
            if (ctx->pc != 0x53D228u) { return; }
        }
        }
    }
    ctx->pc = 0x53D228u;
label_53d228:
    // 0x53d228: 0x10000061  b           . + 4 + (0x61 << 2)
label_53d22c:
    if (ctx->pc == 0x53D22Cu) {
        ctx->pc = 0x53D230u;
        goto label_53d230;
    }
    ctx->pc = 0x53D228u;
    {
        const bool branch_taken_0x53d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d228) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D230u;
label_53d230:
    // 0x53d230: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d234:
    // 0x53d234: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x53d234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_53d238:
    // 0x53d238: 0x320f809  jalr        $t9
label_53d23c:
    if (ctx->pc == 0x53D23Cu) {
        ctx->pc = 0x53D23Cu;
            // 0x53d23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D240u;
        goto label_53d240;
    }
    ctx->pc = 0x53D238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D240u);
        ctx->pc = 0x53D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D238u;
            // 0x53d23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D240u; }
            if (ctx->pc != 0x53D240u) { return; }
        }
        }
    }
    ctx->pc = 0x53D240u;
label_53d240:
    // 0x53d240: 0x1000005b  b           . + 4 + (0x5B << 2)
label_53d244:
    if (ctx->pc == 0x53D244u) {
        ctx->pc = 0x53D248u;
        goto label_53d248;
    }
    ctx->pc = 0x53D240u;
    {
        const bool branch_taken_0x53d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d240) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D248u;
label_53d248:
    // 0x53d248: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x53d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_53d24c:
    // 0x53d24c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d250:
    // 0x53d250: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53d250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53d254:
    // 0x53d254: 0x320f809  jalr        $t9
label_53d258:
    if (ctx->pc == 0x53D258u) {
        ctx->pc = 0x53D25Cu;
        goto label_53d25c;
    }
    ctx->pc = 0x53D254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D25Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D25Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D25Cu; }
            if (ctx->pc != 0x53D25Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D25Cu;
label_53d25c:
    // 0x53d25c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_53d260:
    if (ctx->pc == 0x53D260u) {
        ctx->pc = 0x53D260u;
            // 0x53d260: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53D264u;
        goto label_53d264;
    }
    ctx->pc = 0x53D25Cu;
    {
        const bool branch_taken_0x53d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d25c) {
            ctx->pc = 0x53D260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D25Cu;
            // 0x53d260: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D274u;
            goto label_53d274;
        }
    }
    ctx->pc = 0x53D264u;
label_53d264:
    // 0x53d264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d268:
    // 0x53d268: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53d26c:
    // 0x53d26c: 0xa043cff0  sb          $v1, -0x3010($v0)
    ctx->pc = 0x53d26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 3));
label_53d270:
    // 0x53d270: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d274:
    // 0x53d274: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x53d274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_53d278:
    // 0x53d278: 0x320f809  jalr        $t9
label_53d27c:
    if (ctx->pc == 0x53D27Cu) {
        ctx->pc = 0x53D27Cu;
            // 0x53d27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D280u;
        goto label_53d280;
    }
    ctx->pc = 0x53D278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D280u);
        ctx->pc = 0x53D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D278u;
            // 0x53d27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D280u; }
            if (ctx->pc != 0x53D280u) { return; }
        }
        }
    }
    ctx->pc = 0x53D280u;
label_53d280:
    // 0x53d280: 0x1000004b  b           . + 4 + (0x4B << 2)
label_53d284:
    if (ctx->pc == 0x53D284u) {
        ctx->pc = 0x53D288u;
        goto label_53d288;
    }
    ctx->pc = 0x53D280u;
    {
        const bool branch_taken_0x53d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d280) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D288u;
label_53d288:
    // 0x53d288: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d28c:
    // 0x53d28c: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x53d28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_53d290:
    // 0x53d290: 0x320f809  jalr        $t9
label_53d294:
    if (ctx->pc == 0x53D294u) {
        ctx->pc = 0x53D294u;
            // 0x53d294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D298u;
        goto label_53d298;
    }
    ctx->pc = 0x53D290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D298u);
        ctx->pc = 0x53D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D290u;
            // 0x53d294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D298u; }
            if (ctx->pc != 0x53D298u) { return; }
        }
        }
    }
    ctx->pc = 0x53D298u;
label_53d298:
    // 0x53d298: 0x10000045  b           . + 4 + (0x45 << 2)
label_53d29c:
    if (ctx->pc == 0x53D29Cu) {
        ctx->pc = 0x53D2A0u;
        goto label_53d2a0;
    }
    ctx->pc = 0x53D298u;
    {
        const bool branch_taken_0x53d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d298) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D2A0u;
label_53d2a0:
    // 0x53d2a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d2a4:
    // 0x53d2a4: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x53d2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_53d2a8:
    // 0x53d2a8: 0x320f809  jalr        $t9
label_53d2ac:
    if (ctx->pc == 0x53D2ACu) {
        ctx->pc = 0x53D2ACu;
            // 0x53d2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D2B0u;
        goto label_53d2b0;
    }
    ctx->pc = 0x53D2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D2B0u);
        ctx->pc = 0x53D2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D2A8u;
            // 0x53d2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D2B0u; }
            if (ctx->pc != 0x53D2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x53D2B0u;
label_53d2b0:
    // 0x53d2b0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_53d2b4:
    if (ctx->pc == 0x53D2B4u) {
        ctx->pc = 0x53D2B8u;
        goto label_53d2b8;
    }
    ctx->pc = 0x53D2B0u;
    {
        const bool branch_taken_0x53d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d2b0) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D2B8u;
label_53d2b8:
    // 0x53d2b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d2bc:
    // 0x53d2bc: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x53d2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_53d2c0:
    // 0x53d2c0: 0x320f809  jalr        $t9
label_53d2c4:
    if (ctx->pc == 0x53D2C4u) {
        ctx->pc = 0x53D2C4u;
            // 0x53d2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D2C8u;
        goto label_53d2c8;
    }
    ctx->pc = 0x53D2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D2C8u);
        ctx->pc = 0x53D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D2C0u;
            // 0x53d2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D2C8u; }
            if (ctx->pc != 0x53D2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x53D2C8u;
label_53d2c8:
    // 0x53d2c8: 0x10000039  b           . + 4 + (0x39 << 2)
label_53d2cc:
    if (ctx->pc == 0x53D2CCu) {
        ctx->pc = 0x53D2D0u;
        goto label_53d2d0;
    }
    ctx->pc = 0x53D2C8u;
    {
        const bool branch_taken_0x53d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d2c8) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D2D0u;
label_53d2d0:
    // 0x53d2d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d2d4:
    // 0x53d2d4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x53d2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_53d2d8:
    // 0x53d2d8: 0x320f809  jalr        $t9
label_53d2dc:
    if (ctx->pc == 0x53D2DCu) {
        ctx->pc = 0x53D2DCu;
            // 0x53d2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D2E0u;
        goto label_53d2e0;
    }
    ctx->pc = 0x53D2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D2E0u);
        ctx->pc = 0x53D2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D2D8u;
            // 0x53d2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D2E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D2E0u; }
            if (ctx->pc != 0x53D2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x53D2E0u;
label_53d2e0:
    // 0x53d2e0: 0x10000033  b           . + 4 + (0x33 << 2)
label_53d2e4:
    if (ctx->pc == 0x53D2E4u) {
        ctx->pc = 0x53D2E8u;
        goto label_53d2e8;
    }
    ctx->pc = 0x53D2E0u;
    {
        const bool branch_taken_0x53d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d2e0) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D2E8u;
label_53d2e8:
    // 0x53d2e8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53d2ec:
    // 0x53d2ec: 0x9042cff0  lbu         $v0, -0x3010($v0)
    ctx->pc = 0x53d2ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954992)));
label_53d2f0:
    // 0x53d2f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_53d2f4:
    if (ctx->pc == 0x53D2F4u) {
        ctx->pc = 0x53D2F4u;
            // 0x53d2f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x53D2F8u;
        goto label_53d2f8;
    }
    ctx->pc = 0x53D2F0u;
    {
        const bool branch_taken_0x53d2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d2f0) {
            ctx->pc = 0x53D2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D2F0u;
            // 0x53d2f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D310u;
            goto label_53d310;
        }
    }
    ctx->pc = 0x53D2F8u;
label_53d2f8:
    // 0x53d2f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d2fc:
    // 0x53d2fc: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x53d2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_53d300:
    // 0x53d300: 0x320f809  jalr        $t9
label_53d304:
    if (ctx->pc == 0x53D304u) {
        ctx->pc = 0x53D304u;
            // 0x53d304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D308u;
        goto label_53d308;
    }
    ctx->pc = 0x53D300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D308u);
        ctx->pc = 0x53D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D300u;
            // 0x53d304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D308u; }
            if (ctx->pc != 0x53D308u) { return; }
        }
        }
    }
    ctx->pc = 0x53D308u;
label_53d308:
    // 0x53d308: 0x10000029  b           . + 4 + (0x29 << 2)
label_53d30c:
    if (ctx->pc == 0x53D30Cu) {
        ctx->pc = 0x53D310u;
        goto label_53d310;
    }
    ctx->pc = 0x53D308u;
    {
        const bool branch_taken_0x53d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d308) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D310u;
label_53d310:
    // 0x53d310: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53d314:
    // 0x53d314: 0xac43d000  sw          $v1, -0x3000($v0)
    ctx->pc = 0x53d314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955008), GPR_U32(ctx, 3));
label_53d318:
    // 0x53d318: 0x9202009f  lbu         $v0, 0x9F($s0)
    ctx->pc = 0x53d318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 159)));
label_53d31c:
    // 0x53d31c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_53d320:
    if (ctx->pc == 0x53D320u) {
        ctx->pc = 0x53D324u;
        goto label_53d324;
    }
    ctx->pc = 0x53D31Cu;
    {
        const bool branch_taken_0x53d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d31c) {
            ctx->pc = 0x53D330u;
            goto label_53d330;
        }
    }
    ctx->pc = 0x53D324u;
label_53d324:
    // 0x53d324: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53d328:
    // 0x53d328: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x53d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53d32c:
    // 0x53d32c: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x53d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
label_53d330:
    // 0x53d330: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53d330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53d334:
    // 0x53d334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x53d334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d338:
    // 0x53d338: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_53d33c:
    // 0x53d33c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53d340:
    // 0x53d340: 0xac64d000  sw          $a0, -0x3000($v1)
    ctx->pc = 0x53d340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955008), GPR_U32(ctx, 4));
label_53d344:
    // 0x53d344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53d344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53d348:
    // 0x53d348: 0xc057b7c  jal         func_15EDF0
label_53d34c:
    if (ctx->pc == 0x53D34Cu) {
        ctx->pc = 0x53D34Cu;
            // 0x53d34c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x53D350u;
        goto label_53d350;
    }
    ctx->pc = 0x53D348u;
    SET_GPR_U32(ctx, 31, 0x53D350u);
    ctx->pc = 0x53D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53D348u;
            // 0x53d34c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D350u; }
        if (ctx->pc != 0x53D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D350u; }
        if (ctx->pc != 0x53D350u) { return; }
    }
    ctx->pc = 0x53D350u;
label_53d350:
    // 0x53d350: 0x10000017  b           . + 4 + (0x17 << 2)
label_53d354:
    if (ctx->pc == 0x53D354u) {
        ctx->pc = 0x53D358u;
        goto label_53d358;
    }
    ctx->pc = 0x53D350u;
    {
        const bool branch_taken_0x53d350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d350) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D358u;
label_53d358:
    // 0x53d358: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d35c:
    // 0x53d35c: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x53d35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_53d360:
    // 0x53d360: 0x320f809  jalr        $t9
label_53d364:
    if (ctx->pc == 0x53D364u) {
        ctx->pc = 0x53D364u;
            // 0x53d364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D368u;
        goto label_53d368;
    }
    ctx->pc = 0x53D360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D368u);
        ctx->pc = 0x53D364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D360u;
            // 0x53d364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D368u; }
            if (ctx->pc != 0x53D368u) { return; }
        }
        }
    }
    ctx->pc = 0x53D368u;
label_53d368:
    // 0x53d368: 0x10000011  b           . + 4 + (0x11 << 2)
label_53d36c:
    if (ctx->pc == 0x53D36Cu) {
        ctx->pc = 0x53D370u;
        goto label_53d370;
    }
    ctx->pc = 0x53D368u;
    {
        const bool branch_taken_0x53d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d368) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D370u;
label_53d370:
    // 0x53d370: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d374:
    // 0x53d374: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x53d374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_53d378:
    // 0x53d378: 0x320f809  jalr        $t9
label_53d37c:
    if (ctx->pc == 0x53D37Cu) {
        ctx->pc = 0x53D37Cu;
            // 0x53d37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D380u;
        goto label_53d380;
    }
    ctx->pc = 0x53D378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D380u);
        ctx->pc = 0x53D37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D378u;
            // 0x53d37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D380u; }
            if (ctx->pc != 0x53D380u) { return; }
        }
        }
    }
    ctx->pc = 0x53D380u;
label_53d380:
    // 0x53d380: 0x1000000b  b           . + 4 + (0xB << 2)
label_53d384:
    if (ctx->pc == 0x53D384u) {
        ctx->pc = 0x53D388u;
        goto label_53d388;
    }
    ctx->pc = 0x53D380u;
    {
        const bool branch_taken_0x53d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d380) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D388u;
label_53d388:
    // 0x53d388: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d38c:
    // 0x53d38c: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x53d38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_53d390:
    // 0x53d390: 0x320f809  jalr        $t9
label_53d394:
    if (ctx->pc == 0x53D394u) {
        ctx->pc = 0x53D394u;
            // 0x53d394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D398u;
        goto label_53d398;
    }
    ctx->pc = 0x53D390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D398u);
        ctx->pc = 0x53D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D390u;
            // 0x53d394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D398u; }
            if (ctx->pc != 0x53D398u) { return; }
        }
        }
    }
    ctx->pc = 0x53D398u;
label_53d398:
    // 0x53d398: 0x10000005  b           . + 4 + (0x5 << 2)
label_53d39c:
    if (ctx->pc == 0x53D39Cu) {
        ctx->pc = 0x53D3A0u;
        goto label_53d3a0;
    }
    ctx->pc = 0x53D398u;
    {
        const bool branch_taken_0x53d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d398) {
            ctx->pc = 0x53D3B0u;
            goto label_53d3b0;
        }
    }
    ctx->pc = 0x53D3A0u;
label_53d3a0:
    // 0x53d3a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d3a4:
    // 0x53d3a4: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x53d3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_53d3a8:
    // 0x53d3a8: 0x320f809  jalr        $t9
label_53d3ac:
    if (ctx->pc == 0x53D3ACu) {
        ctx->pc = 0x53D3ACu;
            // 0x53d3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D3B0u;
        goto label_53d3b0;
    }
    ctx->pc = 0x53D3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D3B0u);
        ctx->pc = 0x53D3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D3A8u;
            // 0x53d3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D3B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D3B0u; }
            if (ctx->pc != 0x53D3B0u) { return; }
        }
        }
    }
    ctx->pc = 0x53D3B0u;
label_53d3b0:
    // 0x53d3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53d3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53d3b4:
    // 0x53d3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d3b8:
    // 0x53d3b8: 0x3e00008  jr          $ra
label_53d3bc:
    if (ctx->pc == 0x53D3BCu) {
        ctx->pc = 0x53D3BCu;
            // 0x53d3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53D3C0u;
        goto label_53d3c0;
    }
    ctx->pc = 0x53D3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D3B8u;
            // 0x53d3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D3C0u;
label_53d3c0:
    // 0x53d3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53d3c4:
    // 0x53d3c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53d3c8:
    // 0x53d3c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53d3cc:
    // 0x53d3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53d3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53d3d0:
    // 0x53d3d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x53d3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53d3d4:
    // 0x53d3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d3d8:
    // 0x53d3d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x53d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53d3dc:
    // 0x53d3dc: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x53d3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
label_53d3e0:
    // 0x53d3e0: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x53d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53d3e4:
    // 0x53d3e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d3e8:
    // 0x53d3e8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53d3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53d3ec:
    // 0x53d3ec: 0x320f809  jalr        $t9
label_53d3f0:
    if (ctx->pc == 0x53D3F0u) {
        ctx->pc = 0x53D3F0u;
            // 0x53d3f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D3F4u;
        goto label_53d3f4;
    }
    ctx->pc = 0x53D3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D3F4u);
        ctx->pc = 0x53D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D3ECu;
            // 0x53d3f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D3F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D3F4u; }
            if (ctx->pc != 0x53D3F4u) { return; }
        }
        }
    }
    ctx->pc = 0x53D3F4u;
label_53d3f4:
    // 0x53d3f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_53d3f8:
    if (ctx->pc == 0x53D3F8u) {
        ctx->pc = 0x53D3F8u;
            // 0x53d3f8: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x53D3FCu;
        goto label_53d3fc;
    }
    ctx->pc = 0x53D3F4u;
    {
        const bool branch_taken_0x53d3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d3f4) {
            ctx->pc = 0x53D3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D3F4u;
            // 0x53d3f8: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D404u;
            goto label_53d404;
        }
    }
    ctx->pc = 0x53D3FCu;
label_53d3fc:
    // 0x53d3fc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_53d400:
    if (ctx->pc == 0x53D400u) {
        ctx->pc = 0x53D400u;
            // 0x53d400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D404u;
        goto label_53d404;
    }
    ctx->pc = 0x53D3FCu;
    {
        const bool branch_taken_0x53d3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D3FCu;
            // 0x53d400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d3fc) {
            ctx->pc = 0x53D478u;
            goto label_53d478;
        }
    }
    ctx->pc = 0x53D404u;
label_53d404:
    // 0x53d404: 0x8042007d  lb          $v0, 0x7D($v0)
    ctx->pc = 0x53d404u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_53d408:
    // 0x53d408: 0xa24200a1  sb          $v0, 0xA1($s2)
    ctx->pc = 0x53d408u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 161), (uint8_t)GPR_U32(ctx, 2));
label_53d40c:
    // 0x53d40c: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x53d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_53d410:
    // 0x53d410: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d414:
    // 0x53d414: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53d414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53d418:
    // 0x53d418: 0x320f809  jalr        $t9
label_53d41c:
    if (ctx->pc == 0x53D41Cu) {
        ctx->pc = 0x53D420u;
        goto label_53d420;
    }
    ctx->pc = 0x53D418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D420u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D420u; }
            if (ctx->pc != 0x53D420u) { return; }
        }
        }
    }
    ctx->pc = 0x53D420u;
label_53d420:
    // 0x53d420: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x53d420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_53d424:
    // 0x53d424: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53d428:
    // 0x53d428: 0x8c443e28  lw          $a0, 0x3E28($v0)
    ctx->pc = 0x53d428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53d42c:
    // 0x53d42c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d430:
    // 0x53d430: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x53d430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_53d434:
    // 0x53d434: 0x320f809  jalr        $t9
label_53d438:
    if (ctx->pc == 0x53D438u) {
        ctx->pc = 0x53D438u;
            // 0x53d438: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->pc = 0x53D43Cu;
        goto label_53d43c;
    }
    ctx->pc = 0x53D434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D43Cu);
        ctx->pc = 0x53D438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D434u;
            // 0x53d438: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D43Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D43Cu; }
            if (ctx->pc != 0x53D43Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D43Cu;
label_53d43c:
    // 0x53d43c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_53d440:
    if (ctx->pc == 0x53D440u) {
        ctx->pc = 0x53D440u;
            // 0x53d440: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x53D444u;
        goto label_53d444;
    }
    ctx->pc = 0x53D43Cu;
    {
        const bool branch_taken_0x53d43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d43c) {
            ctx->pc = 0x53D440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D43Cu;
            // 0x53d440: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D44Cu;
            goto label_53d44c;
        }
    }
    ctx->pc = 0x53D444u;
label_53d444:
    // 0x53d444: 0x1000000c  b           . + 4 + (0xC << 2)
label_53d448:
    if (ctx->pc == 0x53D448u) {
        ctx->pc = 0x53D448u;
            // 0x53d448: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D44Cu;
        goto label_53d44c;
    }
    ctx->pc = 0x53D444u;
    {
        const bool branch_taken_0x53d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D444u;
            // 0x53d448: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d444) {
            ctx->pc = 0x53D478u;
            goto label_53d478;
        }
    }
    ctx->pc = 0x53D44Cu;
label_53d44c:
    // 0x53d44c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x53d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53d450:
    // 0x53d450: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53d450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53d454:
    // 0x53d454: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_53d458:
    if (ctx->pc == 0x53D458u) {
        ctx->pc = 0x53D458u;
            // 0x53d458: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x53D45Cu;
        goto label_53d45c;
    }
    ctx->pc = 0x53D454u;
    {
        const bool branch_taken_0x53d454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53d454) {
            ctx->pc = 0x53D458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D454u;
            // 0x53d458: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D470u;
            goto label_53d470;
        }
    }
    ctx->pc = 0x53D45Cu;
label_53d45c:
    // 0x53d45c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d460:
    // 0x53d460: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53d460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53d464:
    // 0x53d464: 0x320f809  jalr        $t9
label_53d468:
    if (ctx->pc == 0x53D468u) {
        ctx->pc = 0x53D468u;
            // 0x53d468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53D46Cu;
        goto label_53d46c;
    }
    ctx->pc = 0x53D464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D46Cu);
        ctx->pc = 0x53D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D464u;
            // 0x53d468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D46Cu; }
            if (ctx->pc != 0x53D46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D46Cu;
label_53d46c:
    // 0x53d46c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x53d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_53d470:
    // 0x53d470: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x53d470u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_53d474:
    // 0x53d474: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x53d474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_53d478:
    // 0x53d478: 0x5060003f  beql        $v1, $zero, . + 4 + (0x3F << 2)
label_53d47c:
    if (ctx->pc == 0x53D47Cu) {
        ctx->pc = 0x53D47Cu;
            // 0x53d47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D480u;
        goto label_53d480;
    }
    ctx->pc = 0x53D478u;
    {
        const bool branch_taken_0x53d478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d478) {
            ctx->pc = 0x53D47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D478u;
            // 0x53d47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D578u;
            goto label_53d578;
        }
    }
    ctx->pc = 0x53D480u;
label_53d480:
    // 0x53d480: 0x8e500084  lw          $s0, 0x84($s2)
    ctx->pc = 0x53d480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_53d484:
    // 0x53d484: 0x5230003c  beql        $s1, $s0, . + 4 + (0x3C << 2)
label_53d488:
    if (ctx->pc == 0x53D488u) {
        ctx->pc = 0x53D488u;
            // 0x53d488: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D48Cu;
        goto label_53d48c;
    }
    ctx->pc = 0x53D484u;
    {
        const bool branch_taken_0x53d484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x53d484) {
            ctx->pc = 0x53D488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D484u;
            // 0x53d488: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D578u;
            goto label_53d578;
        }
    }
    ctx->pc = 0x53D48Cu;
label_53d48c:
    // 0x53d48c: 0x2e01000e  sltiu       $at, $s0, 0xE
    ctx->pc = 0x53d48cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_53d490:
    // 0x53d490: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_53d494:
    if (ctx->pc == 0x53D494u) {
        ctx->pc = 0x53D498u;
        goto label_53d498;
    }
    ctx->pc = 0x53D490u;
    {
        const bool branch_taken_0x53d490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d490) {
            ctx->pc = 0x53D574u;
            goto label_53d574;
        }
    }
    ctx->pc = 0x53D498u;
label_53d498:
    // 0x53d498: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x53d498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_53d49c:
    // 0x53d49c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x53d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_53d4a0:
    // 0x53d4a0: 0x2463d540  addiu       $v1, $v1, -0x2AC0
    ctx->pc = 0x53d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956352));
label_53d4a4:
    // 0x53d4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53d4a8:
    // 0x53d4a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53d4ac:
    // 0x53d4ac: 0x400008  jr          $v0
label_53d4b0:
    if (ctx->pc == 0x53D4B0u) {
        ctx->pc = 0x53D4B4u;
        goto label_53d4b4;
    }
    ctx->pc = 0x53D4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x53D4B4u: goto label_53d4b4;
            case 0x53D4C0u: goto label_53d4c0;
            case 0x53D4CCu: goto label_53d4cc;
            case 0x53D50Cu: goto label_53d50c;
            case 0x53D518u: goto label_53d518;
            case 0x53D530u: goto label_53d530;
            case 0x53D574u: goto label_53d574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x53D4B4u;
label_53d4b4:
    // 0x53d4b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x53d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_53d4b8:
    // 0x53d4b8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_53d4bc:
    if (ctx->pc == 0x53D4BCu) {
        ctx->pc = 0x53D4BCu;
            // 0x53d4bc: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x53D4C0u;
        goto label_53d4c0;
    }
    ctx->pc = 0x53D4B8u;
    {
        const bool branch_taken_0x53d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D4B8u;
            // 0x53d4bc: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d4b8) {
            ctx->pc = 0x53D574u;
            goto label_53d574;
        }
    }
    ctx->pc = 0x53D4C0u;
label_53d4c0:
    // 0x53d4c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x53d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53d4c4:
    // 0x53d4c4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_53d4c8:
    if (ctx->pc == 0x53D4C8u) {
        ctx->pc = 0x53D4C8u;
            // 0x53d4c8: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x53D4CCu;
        goto label_53d4cc;
    }
    ctx->pc = 0x53D4C4u;
    {
        const bool branch_taken_0x53d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D4C4u;
            // 0x53d4c8: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d4c4) {
            ctx->pc = 0x53D574u;
            goto label_53d574;
        }
    }
    ctx->pc = 0x53D4CCu;
label_53d4cc:
    // 0x53d4cc: 0x9242009f  lbu         $v0, 0x9F($s2)
    ctx->pc = 0x53d4ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 159)));
label_53d4d0:
    // 0x53d4d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_53d4d4:
    if (ctx->pc == 0x53D4D4u) {
        ctx->pc = 0x53D4D8u;
        goto label_53d4d8;
    }
    ctx->pc = 0x53D4D0u;
    {
        const bool branch_taken_0x53d4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d4d0) {
            ctx->pc = 0x53D4E4u;
            goto label_53d4e4;
        }
    }
    ctx->pc = 0x53D4D8u;
label_53d4d8:
    // 0x53d4d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53d4dc:
    // 0x53d4dc: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x53d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53d4e0:
    // 0x53d4e0: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x53d4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
label_53d4e4:
    // 0x53d4e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53d4e8:
    // 0x53d4e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x53d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53d4ec:
    // 0x53d4ec: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_53d4f0:
    // 0x53d4f0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53d4f4:
    // 0x53d4f4: 0xac64d000  sw          $a0, -0x3000($v1)
    ctx->pc = 0x53d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955008), GPR_U32(ctx, 4));
label_53d4f8:
    // 0x53d4f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x53d4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53d4fc:
    // 0x53d4fc: 0xc057b7c  jal         func_15EDF0
label_53d500:
    if (ctx->pc == 0x53D500u) {
        ctx->pc = 0x53D500u;
            // 0x53d500: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x53D504u;
        goto label_53d504;
    }
    ctx->pc = 0x53D4FCu;
    SET_GPR_U32(ctx, 31, 0x53D504u);
    ctx->pc = 0x53D500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53D4FCu;
            // 0x53d500: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D504u; }
        if (ctx->pc != 0x53D504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D504u; }
        if (ctx->pc != 0x53D504u) { return; }
    }
    ctx->pc = 0x53D504u;
label_53d504:
    // 0x53d504: 0x1000001b  b           . + 4 + (0x1B << 2)
label_53d508:
    if (ctx->pc == 0x53D508u) {
        ctx->pc = 0x53D50Cu;
        goto label_53d50c;
    }
    ctx->pc = 0x53D504u;
    {
        const bool branch_taken_0x53d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d504) {
            ctx->pc = 0x53D574u;
            goto label_53d574;
        }
    }
    ctx->pc = 0x53D50Cu;
label_53d50c:
    // 0x53d50c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x53d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_53d510:
    // 0x53d510: 0x10000018  b           . + 4 + (0x18 << 2)
label_53d514:
    if (ctx->pc == 0x53D514u) {
        ctx->pc = 0x53D514u;
            // 0x53d514: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x53D518u;
        goto label_53d518;
    }
    ctx->pc = 0x53D510u;
    {
        const bool branch_taken_0x53d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D510u;
            // 0x53d514: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d510) {
            ctx->pc = 0x53D574u;
            goto label_53d574;
        }
    }
    ctx->pc = 0x53D518u;
label_53d518:
    // 0x53d518: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x53d518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53d51c:
    // 0x53d51c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x53d51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_53d520:
    // 0x53d520: 0x320f809  jalr        $t9
label_53d524:
    if (ctx->pc == 0x53D524u) {
        ctx->pc = 0x53D524u;
            // 0x53d524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D528u;
        goto label_53d528;
    }
    ctx->pc = 0x53D520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D528u);
        ctx->pc = 0x53D524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D520u;
            // 0x53d524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D528u; }
            if (ctx->pc != 0x53D528u) { return; }
        }
        }
    }
    ctx->pc = 0x53D528u;
label_53d528:
    // 0x53d528: 0x10000012  b           . + 4 + (0x12 << 2)
label_53d52c:
    if (ctx->pc == 0x53D52Cu) {
        ctx->pc = 0x53D530u;
        goto label_53d530;
    }
    ctx->pc = 0x53D528u;
    {
        const bool branch_taken_0x53d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d528) {
            ctx->pc = 0x53D574u;
            goto label_53d574;
        }
    }
    ctx->pc = 0x53D530u;
label_53d530:
    // 0x53d530: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x53d530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_53d534:
    // 0x53d534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d538:
    // 0x53d538: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53d538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53d53c:
    // 0x53d53c: 0x320f809  jalr        $t9
label_53d540:
    if (ctx->pc == 0x53D540u) {
        ctx->pc = 0x53D544u;
        goto label_53d544;
    }
    ctx->pc = 0x53D53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D544u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D544u; }
            if (ctx->pc != 0x53D544u) { return; }
        }
        }
    }
    ctx->pc = 0x53D544u;
label_53d544:
    // 0x53d544: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_53d548:
    if (ctx->pc == 0x53D548u) {
        ctx->pc = 0x53D548u;
            // 0x53d548: 0x8e430064  lw          $v1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x53D54Cu;
        goto label_53d54c;
    }
    ctx->pc = 0x53D544u;
    {
        const bool branch_taken_0x53d544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d544) {
            ctx->pc = 0x53D548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D544u;
            // 0x53d548: 0x8e430064  lw          $v1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D558u;
            goto label_53d558;
        }
    }
    ctx->pc = 0x53D54Cu;
label_53d54c:
    // 0x53d54c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53d550:
    // 0x53d550: 0xa040cff0  sb          $zero, -0x3010($v0)
    ctx->pc = 0x53d550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 0));
label_53d554:
    // 0x53d554: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x53d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_53d558:
    // 0x53d558: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x53d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_53d55c:
    // 0x53d55c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_53d560:
    if (ctx->pc == 0x53D560u) {
        ctx->pc = 0x53D560u;
            // 0x53d560: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x53D564u;
        goto label_53d564;
    }
    ctx->pc = 0x53D55Cu;
    {
        const bool branch_taken_0x53d55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53d55c) {
            ctx->pc = 0x53D560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D55Cu;
            // 0x53d560: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D570u;
            goto label_53d570;
        }
    }
    ctx->pc = 0x53D564u;
label_53d564:
    // 0x53d564: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53d568:
    // 0x53d568: 0xa040cff8  sb          $zero, -0x3008($v0)
    ctx->pc = 0x53d568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294955000), (uint8_t)GPR_U32(ctx, 0));
label_53d56c:
    // 0x53d56c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x53d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_53d570:
    // 0x53d570: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x53d570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_53d574:
    // 0x53d574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53d574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53d578:
    // 0x53d578: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53d578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53d57c:
    // 0x53d57c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53d57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53d580:
    // 0x53d580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53d580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53d584:
    // 0x53d584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d588:
    // 0x53d588: 0x3e00008  jr          $ra
label_53d58c:
    if (ctx->pc == 0x53D58Cu) {
        ctx->pc = 0x53D58Cu;
            // 0x53d58c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53D590u;
        goto label_fallthrough_0x53d588;
    }
    ctx->pc = 0x53D588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D588u;
            // 0x53d58c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x53d588:
    ctx->pc = 0x53D590u;
}
