#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F270
// Address: 0x53f270 - 0x53f760
void sub_0053F270_0x53f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F270_0x53f270");
#endif

    switch (ctx->pc) {
        case 0x53f270u: goto label_53f270;
        case 0x53f274u: goto label_53f274;
        case 0x53f278u: goto label_53f278;
        case 0x53f27cu: goto label_53f27c;
        case 0x53f280u: goto label_53f280;
        case 0x53f284u: goto label_53f284;
        case 0x53f288u: goto label_53f288;
        case 0x53f28cu: goto label_53f28c;
        case 0x53f290u: goto label_53f290;
        case 0x53f294u: goto label_53f294;
        case 0x53f298u: goto label_53f298;
        case 0x53f29cu: goto label_53f29c;
        case 0x53f2a0u: goto label_53f2a0;
        case 0x53f2a4u: goto label_53f2a4;
        case 0x53f2a8u: goto label_53f2a8;
        case 0x53f2acu: goto label_53f2ac;
        case 0x53f2b0u: goto label_53f2b0;
        case 0x53f2b4u: goto label_53f2b4;
        case 0x53f2b8u: goto label_53f2b8;
        case 0x53f2bcu: goto label_53f2bc;
        case 0x53f2c0u: goto label_53f2c0;
        case 0x53f2c4u: goto label_53f2c4;
        case 0x53f2c8u: goto label_53f2c8;
        case 0x53f2ccu: goto label_53f2cc;
        case 0x53f2d0u: goto label_53f2d0;
        case 0x53f2d4u: goto label_53f2d4;
        case 0x53f2d8u: goto label_53f2d8;
        case 0x53f2dcu: goto label_53f2dc;
        case 0x53f2e0u: goto label_53f2e0;
        case 0x53f2e4u: goto label_53f2e4;
        case 0x53f2e8u: goto label_53f2e8;
        case 0x53f2ecu: goto label_53f2ec;
        case 0x53f2f0u: goto label_53f2f0;
        case 0x53f2f4u: goto label_53f2f4;
        case 0x53f2f8u: goto label_53f2f8;
        case 0x53f2fcu: goto label_53f2fc;
        case 0x53f300u: goto label_53f300;
        case 0x53f304u: goto label_53f304;
        case 0x53f308u: goto label_53f308;
        case 0x53f30cu: goto label_53f30c;
        case 0x53f310u: goto label_53f310;
        case 0x53f314u: goto label_53f314;
        case 0x53f318u: goto label_53f318;
        case 0x53f31cu: goto label_53f31c;
        case 0x53f320u: goto label_53f320;
        case 0x53f324u: goto label_53f324;
        case 0x53f328u: goto label_53f328;
        case 0x53f32cu: goto label_53f32c;
        case 0x53f330u: goto label_53f330;
        case 0x53f334u: goto label_53f334;
        case 0x53f338u: goto label_53f338;
        case 0x53f33cu: goto label_53f33c;
        case 0x53f340u: goto label_53f340;
        case 0x53f344u: goto label_53f344;
        case 0x53f348u: goto label_53f348;
        case 0x53f34cu: goto label_53f34c;
        case 0x53f350u: goto label_53f350;
        case 0x53f354u: goto label_53f354;
        case 0x53f358u: goto label_53f358;
        case 0x53f35cu: goto label_53f35c;
        case 0x53f360u: goto label_53f360;
        case 0x53f364u: goto label_53f364;
        case 0x53f368u: goto label_53f368;
        case 0x53f36cu: goto label_53f36c;
        case 0x53f370u: goto label_53f370;
        case 0x53f374u: goto label_53f374;
        case 0x53f378u: goto label_53f378;
        case 0x53f37cu: goto label_53f37c;
        case 0x53f380u: goto label_53f380;
        case 0x53f384u: goto label_53f384;
        case 0x53f388u: goto label_53f388;
        case 0x53f38cu: goto label_53f38c;
        case 0x53f390u: goto label_53f390;
        case 0x53f394u: goto label_53f394;
        case 0x53f398u: goto label_53f398;
        case 0x53f39cu: goto label_53f39c;
        case 0x53f3a0u: goto label_53f3a0;
        case 0x53f3a4u: goto label_53f3a4;
        case 0x53f3a8u: goto label_53f3a8;
        case 0x53f3acu: goto label_53f3ac;
        case 0x53f3b0u: goto label_53f3b0;
        case 0x53f3b4u: goto label_53f3b4;
        case 0x53f3b8u: goto label_53f3b8;
        case 0x53f3bcu: goto label_53f3bc;
        case 0x53f3c0u: goto label_53f3c0;
        case 0x53f3c4u: goto label_53f3c4;
        case 0x53f3c8u: goto label_53f3c8;
        case 0x53f3ccu: goto label_53f3cc;
        case 0x53f3d0u: goto label_53f3d0;
        case 0x53f3d4u: goto label_53f3d4;
        case 0x53f3d8u: goto label_53f3d8;
        case 0x53f3dcu: goto label_53f3dc;
        case 0x53f3e0u: goto label_53f3e0;
        case 0x53f3e4u: goto label_53f3e4;
        case 0x53f3e8u: goto label_53f3e8;
        case 0x53f3ecu: goto label_53f3ec;
        case 0x53f3f0u: goto label_53f3f0;
        case 0x53f3f4u: goto label_53f3f4;
        case 0x53f3f8u: goto label_53f3f8;
        case 0x53f3fcu: goto label_53f3fc;
        case 0x53f400u: goto label_53f400;
        case 0x53f404u: goto label_53f404;
        case 0x53f408u: goto label_53f408;
        case 0x53f40cu: goto label_53f40c;
        case 0x53f410u: goto label_53f410;
        case 0x53f414u: goto label_53f414;
        case 0x53f418u: goto label_53f418;
        case 0x53f41cu: goto label_53f41c;
        case 0x53f420u: goto label_53f420;
        case 0x53f424u: goto label_53f424;
        case 0x53f428u: goto label_53f428;
        case 0x53f42cu: goto label_53f42c;
        case 0x53f430u: goto label_53f430;
        case 0x53f434u: goto label_53f434;
        case 0x53f438u: goto label_53f438;
        case 0x53f43cu: goto label_53f43c;
        case 0x53f440u: goto label_53f440;
        case 0x53f444u: goto label_53f444;
        case 0x53f448u: goto label_53f448;
        case 0x53f44cu: goto label_53f44c;
        case 0x53f450u: goto label_53f450;
        case 0x53f454u: goto label_53f454;
        case 0x53f458u: goto label_53f458;
        case 0x53f45cu: goto label_53f45c;
        case 0x53f460u: goto label_53f460;
        case 0x53f464u: goto label_53f464;
        case 0x53f468u: goto label_53f468;
        case 0x53f46cu: goto label_53f46c;
        case 0x53f470u: goto label_53f470;
        case 0x53f474u: goto label_53f474;
        case 0x53f478u: goto label_53f478;
        case 0x53f47cu: goto label_53f47c;
        case 0x53f480u: goto label_53f480;
        case 0x53f484u: goto label_53f484;
        case 0x53f488u: goto label_53f488;
        case 0x53f48cu: goto label_53f48c;
        case 0x53f490u: goto label_53f490;
        case 0x53f494u: goto label_53f494;
        case 0x53f498u: goto label_53f498;
        case 0x53f49cu: goto label_53f49c;
        case 0x53f4a0u: goto label_53f4a0;
        case 0x53f4a4u: goto label_53f4a4;
        case 0x53f4a8u: goto label_53f4a8;
        case 0x53f4acu: goto label_53f4ac;
        case 0x53f4b0u: goto label_53f4b0;
        case 0x53f4b4u: goto label_53f4b4;
        case 0x53f4b8u: goto label_53f4b8;
        case 0x53f4bcu: goto label_53f4bc;
        case 0x53f4c0u: goto label_53f4c0;
        case 0x53f4c4u: goto label_53f4c4;
        case 0x53f4c8u: goto label_53f4c8;
        case 0x53f4ccu: goto label_53f4cc;
        case 0x53f4d0u: goto label_53f4d0;
        case 0x53f4d4u: goto label_53f4d4;
        case 0x53f4d8u: goto label_53f4d8;
        case 0x53f4dcu: goto label_53f4dc;
        case 0x53f4e0u: goto label_53f4e0;
        case 0x53f4e4u: goto label_53f4e4;
        case 0x53f4e8u: goto label_53f4e8;
        case 0x53f4ecu: goto label_53f4ec;
        case 0x53f4f0u: goto label_53f4f0;
        case 0x53f4f4u: goto label_53f4f4;
        case 0x53f4f8u: goto label_53f4f8;
        case 0x53f4fcu: goto label_53f4fc;
        case 0x53f500u: goto label_53f500;
        case 0x53f504u: goto label_53f504;
        case 0x53f508u: goto label_53f508;
        case 0x53f50cu: goto label_53f50c;
        case 0x53f510u: goto label_53f510;
        case 0x53f514u: goto label_53f514;
        case 0x53f518u: goto label_53f518;
        case 0x53f51cu: goto label_53f51c;
        case 0x53f520u: goto label_53f520;
        case 0x53f524u: goto label_53f524;
        case 0x53f528u: goto label_53f528;
        case 0x53f52cu: goto label_53f52c;
        case 0x53f530u: goto label_53f530;
        case 0x53f534u: goto label_53f534;
        case 0x53f538u: goto label_53f538;
        case 0x53f53cu: goto label_53f53c;
        case 0x53f540u: goto label_53f540;
        case 0x53f544u: goto label_53f544;
        case 0x53f548u: goto label_53f548;
        case 0x53f54cu: goto label_53f54c;
        case 0x53f550u: goto label_53f550;
        case 0x53f554u: goto label_53f554;
        case 0x53f558u: goto label_53f558;
        case 0x53f55cu: goto label_53f55c;
        case 0x53f560u: goto label_53f560;
        case 0x53f564u: goto label_53f564;
        case 0x53f568u: goto label_53f568;
        case 0x53f56cu: goto label_53f56c;
        case 0x53f570u: goto label_53f570;
        case 0x53f574u: goto label_53f574;
        case 0x53f578u: goto label_53f578;
        case 0x53f57cu: goto label_53f57c;
        case 0x53f580u: goto label_53f580;
        case 0x53f584u: goto label_53f584;
        case 0x53f588u: goto label_53f588;
        case 0x53f58cu: goto label_53f58c;
        case 0x53f590u: goto label_53f590;
        case 0x53f594u: goto label_53f594;
        case 0x53f598u: goto label_53f598;
        case 0x53f59cu: goto label_53f59c;
        case 0x53f5a0u: goto label_53f5a0;
        case 0x53f5a4u: goto label_53f5a4;
        case 0x53f5a8u: goto label_53f5a8;
        case 0x53f5acu: goto label_53f5ac;
        case 0x53f5b0u: goto label_53f5b0;
        case 0x53f5b4u: goto label_53f5b4;
        case 0x53f5b8u: goto label_53f5b8;
        case 0x53f5bcu: goto label_53f5bc;
        case 0x53f5c0u: goto label_53f5c0;
        case 0x53f5c4u: goto label_53f5c4;
        case 0x53f5c8u: goto label_53f5c8;
        case 0x53f5ccu: goto label_53f5cc;
        case 0x53f5d0u: goto label_53f5d0;
        case 0x53f5d4u: goto label_53f5d4;
        case 0x53f5d8u: goto label_53f5d8;
        case 0x53f5dcu: goto label_53f5dc;
        case 0x53f5e0u: goto label_53f5e0;
        case 0x53f5e4u: goto label_53f5e4;
        case 0x53f5e8u: goto label_53f5e8;
        case 0x53f5ecu: goto label_53f5ec;
        case 0x53f5f0u: goto label_53f5f0;
        case 0x53f5f4u: goto label_53f5f4;
        case 0x53f5f8u: goto label_53f5f8;
        case 0x53f5fcu: goto label_53f5fc;
        case 0x53f600u: goto label_53f600;
        case 0x53f604u: goto label_53f604;
        case 0x53f608u: goto label_53f608;
        case 0x53f60cu: goto label_53f60c;
        case 0x53f610u: goto label_53f610;
        case 0x53f614u: goto label_53f614;
        case 0x53f618u: goto label_53f618;
        case 0x53f61cu: goto label_53f61c;
        case 0x53f620u: goto label_53f620;
        case 0x53f624u: goto label_53f624;
        case 0x53f628u: goto label_53f628;
        case 0x53f62cu: goto label_53f62c;
        case 0x53f630u: goto label_53f630;
        case 0x53f634u: goto label_53f634;
        case 0x53f638u: goto label_53f638;
        case 0x53f63cu: goto label_53f63c;
        case 0x53f640u: goto label_53f640;
        case 0x53f644u: goto label_53f644;
        case 0x53f648u: goto label_53f648;
        case 0x53f64cu: goto label_53f64c;
        case 0x53f650u: goto label_53f650;
        case 0x53f654u: goto label_53f654;
        case 0x53f658u: goto label_53f658;
        case 0x53f65cu: goto label_53f65c;
        case 0x53f660u: goto label_53f660;
        case 0x53f664u: goto label_53f664;
        case 0x53f668u: goto label_53f668;
        case 0x53f66cu: goto label_53f66c;
        case 0x53f670u: goto label_53f670;
        case 0x53f674u: goto label_53f674;
        case 0x53f678u: goto label_53f678;
        case 0x53f67cu: goto label_53f67c;
        case 0x53f680u: goto label_53f680;
        case 0x53f684u: goto label_53f684;
        case 0x53f688u: goto label_53f688;
        case 0x53f68cu: goto label_53f68c;
        case 0x53f690u: goto label_53f690;
        case 0x53f694u: goto label_53f694;
        case 0x53f698u: goto label_53f698;
        case 0x53f69cu: goto label_53f69c;
        case 0x53f6a0u: goto label_53f6a0;
        case 0x53f6a4u: goto label_53f6a4;
        case 0x53f6a8u: goto label_53f6a8;
        case 0x53f6acu: goto label_53f6ac;
        case 0x53f6b0u: goto label_53f6b0;
        case 0x53f6b4u: goto label_53f6b4;
        case 0x53f6b8u: goto label_53f6b8;
        case 0x53f6bcu: goto label_53f6bc;
        case 0x53f6c0u: goto label_53f6c0;
        case 0x53f6c4u: goto label_53f6c4;
        case 0x53f6c8u: goto label_53f6c8;
        case 0x53f6ccu: goto label_53f6cc;
        case 0x53f6d0u: goto label_53f6d0;
        case 0x53f6d4u: goto label_53f6d4;
        case 0x53f6d8u: goto label_53f6d8;
        case 0x53f6dcu: goto label_53f6dc;
        case 0x53f6e0u: goto label_53f6e0;
        case 0x53f6e4u: goto label_53f6e4;
        case 0x53f6e8u: goto label_53f6e8;
        case 0x53f6ecu: goto label_53f6ec;
        case 0x53f6f0u: goto label_53f6f0;
        case 0x53f6f4u: goto label_53f6f4;
        case 0x53f6f8u: goto label_53f6f8;
        case 0x53f6fcu: goto label_53f6fc;
        case 0x53f700u: goto label_53f700;
        case 0x53f704u: goto label_53f704;
        case 0x53f708u: goto label_53f708;
        case 0x53f70cu: goto label_53f70c;
        case 0x53f710u: goto label_53f710;
        case 0x53f714u: goto label_53f714;
        case 0x53f718u: goto label_53f718;
        case 0x53f71cu: goto label_53f71c;
        case 0x53f720u: goto label_53f720;
        case 0x53f724u: goto label_53f724;
        case 0x53f728u: goto label_53f728;
        case 0x53f72cu: goto label_53f72c;
        case 0x53f730u: goto label_53f730;
        case 0x53f734u: goto label_53f734;
        case 0x53f738u: goto label_53f738;
        case 0x53f73cu: goto label_53f73c;
        case 0x53f740u: goto label_53f740;
        case 0x53f744u: goto label_53f744;
        case 0x53f748u: goto label_53f748;
        case 0x53f74cu: goto label_53f74c;
        case 0x53f750u: goto label_53f750;
        case 0x53f754u: goto label_53f754;
        case 0x53f758u: goto label_53f758;
        case 0x53f75cu: goto label_53f75c;
        default: break;
    }

    ctx->pc = 0x53f270u;

label_53f270:
    // 0x53f270: 0x3e00008  jr          $ra
label_53f274:
    if (ctx->pc == 0x53F274u) {
        ctx->pc = 0x53F274u;
            // 0x53f274: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F278u;
        goto label_53f278;
    }
    ctx->pc = 0x53F270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F270u;
            // 0x53f274: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F278u;
label_53f278:
    // 0x53f278: 0x0  nop
    ctx->pc = 0x53f278u;
    // NOP
label_53f27c:
    // 0x53f27c: 0x0  nop
    ctx->pc = 0x53f27cu;
    // NOP
label_53f280:
    // 0x53f280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53f284:
    // 0x53f284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53f288:
    // 0x53f288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f28c:
    // 0x53f28c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x53f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_53f290:
    // 0x53f290: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x53f290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_53f294:
    // 0x53f294: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_53f298:
    if (ctx->pc == 0x53F298u) {
        ctx->pc = 0x53F298u;
            // 0x53f298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F29Cu;
        goto label_53f29c;
    }
    ctx->pc = 0x53F294u;
    {
        const bool branch_taken_0x53f294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F294u;
            // 0x53f298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f294) {
            ctx->pc = 0x53F2B0u;
            goto label_53f2b0;
        }
    }
    ctx->pc = 0x53F29Cu;
label_53f29c:
    // 0x53f29c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f2a0:
    // 0x53f2a0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53f2a4:
    // 0x53f2a4: 0xc08c8fc  jal         func_2323F0
label_53f2a8:
    if (ctx->pc == 0x53F2A8u) {
        ctx->pc = 0x53F2A8u;
            // 0x53f2a8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x53F2ACu;
        goto label_53f2ac;
    }
    ctx->pc = 0x53F2A4u;
    SET_GPR_U32(ctx, 31, 0x53F2ACu);
    ctx->pc = 0x53F2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F2A4u;
            // 0x53f2a8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F2ACu; }
        if (ctx->pc != 0x53F2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F2ACu; }
        if (ctx->pc != 0x53F2ACu) { return; }
    }
    ctx->pc = 0x53F2ACu;
label_53f2ac:
    // 0x53f2ac: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x53f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_53f2b0:
    // 0x53f2b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53f2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53f2b4:
    // 0x53f2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f2b8:
    // 0x53f2b8: 0x3e00008  jr          $ra
label_53f2bc:
    if (ctx->pc == 0x53F2BCu) {
        ctx->pc = 0x53F2BCu;
            // 0x53f2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53F2C0u;
        goto label_53f2c0;
    }
    ctx->pc = 0x53F2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F2B8u;
            // 0x53f2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F2C0u;
label_53f2c0:
    // 0x53f2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53f2c4:
    // 0x53f2c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53f2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53f2c8:
    // 0x53f2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53f2cc:
    // 0x53f2cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x53f2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_53f2d0:
    // 0x53f2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f2d4:
    // 0x53f2d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x53f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_53f2d8:
    // 0x53f2d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53f2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53f2dc:
    // 0x53f2dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x53f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53f2e0:
    // 0x53f2e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53f2e4:
    // 0x53f2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53f2e8:
    // 0x53f2e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x53f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_53f2ec:
    // 0x53f2ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x53f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53f2f0:
    // 0x53f2f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x53f2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_53f2f4:
    // 0x53f2f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x53f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_53f2f8:
    // 0x53f2f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x53f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_53f2fc:
    // 0x53f2fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x53f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_53f300:
    // 0x53f300: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x53f300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_53f304:
    // 0x53f304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x53f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_53f308:
    // 0x53f308: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x53f308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_53f30c:
    // 0x53f30c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x53f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53f310:
    // 0x53f310: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x53f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_53f314:
    // 0x53f314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53f314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53f318:
    // 0x53f318: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x53f318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53f31c:
    // 0x53f31c: 0xc0a997c  jal         func_2A65F0
label_53f320:
    if (ctx->pc == 0x53F320u) {
        ctx->pc = 0x53F320u;
            // 0x53f320: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x53F324u;
        goto label_53f324;
    }
    ctx->pc = 0x53F31Cu;
    SET_GPR_U32(ctx, 31, 0x53F324u);
    ctx->pc = 0x53F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F31Cu;
            // 0x53f320: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F324u; }
        if (ctx->pc != 0x53F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F324u; }
        if (ctx->pc != 0x53F324u) { return; }
    }
    ctx->pc = 0x53F324u;
label_53f324:
    // 0x53f324: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x53f324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_53f328:
    // 0x53f328: 0xc0d879c  jal         func_361E70
label_53f32c:
    if (ctx->pc == 0x53F32Cu) {
        ctx->pc = 0x53F32Cu;
            // 0x53f32c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F330u;
        goto label_53f330;
    }
    ctx->pc = 0x53F328u;
    SET_GPR_U32(ctx, 31, 0x53F330u);
    ctx->pc = 0x53F32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F328u;
            // 0x53f32c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F330u; }
        if (ctx->pc != 0x53F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F330u; }
        if (ctx->pc != 0x53F330u) { return; }
    }
    ctx->pc = 0x53F330u;
label_53f330:
    // 0x53f330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53f330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53f334:
    // 0x53f334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f338:
    // 0x53f338: 0x3e00008  jr          $ra
label_53f33c:
    if (ctx->pc == 0x53F33Cu) {
        ctx->pc = 0x53F33Cu;
            // 0x53f33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53F340u;
        goto label_53f340;
    }
    ctx->pc = 0x53F338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F338u;
            // 0x53f33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F340u;
label_53f340:
    // 0x53f340: 0x3e00008  jr          $ra
label_53f344:
    if (ctx->pc == 0x53F344u) {
        ctx->pc = 0x53F348u;
        goto label_53f348;
    }
    ctx->pc = 0x53F340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F348u;
label_53f348:
    // 0x53f348: 0x0  nop
    ctx->pc = 0x53f348u;
    // NOP
label_53f34c:
    // 0x53f34c: 0x0  nop
    ctx->pc = 0x53f34cu;
    // NOP
label_53f350:
    // 0x53f350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53f354:
    // 0x53f354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53f358:
    // 0x53f358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53f35c:
    // 0x53f35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f360:
    // 0x53f360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53f360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53f364:
    // 0x53f364: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_53f368:
    if (ctx->pc == 0x53F368u) {
        ctx->pc = 0x53F368u;
            // 0x53f368: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F36Cu;
        goto label_53f36c;
    }
    ctx->pc = 0x53F364u;
    {
        const bool branch_taken_0x53f364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F364u;
            // 0x53f368: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f364) {
            ctx->pc = 0x53F41Cu;
            goto label_53f41c;
        }
    }
    ctx->pc = 0x53F36Cu;
label_53f36c:
    // 0x53f36c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53f370:
    // 0x53f370: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53f370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53f374:
    // 0x53f374: 0x24637550  addiu       $v1, $v1, 0x7550
    ctx->pc = 0x53f374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30032));
label_53f378:
    // 0x53f378: 0x24427588  addiu       $v0, $v0, 0x7588
    ctx->pc = 0x53f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30088));
label_53f37c:
    // 0x53f37c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_53f380:
    // 0x53f380: 0x260400c8  addiu       $a0, $s0, 0xC8
    ctx->pc = 0x53f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_53f384:
    // 0x53f384: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_53f388:
    if (ctx->pc == 0x53F388u) {
        ctx->pc = 0x53F388u;
            // 0x53f388: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x53F38Cu;
        goto label_53f38c;
    }
    ctx->pc = 0x53F384u;
    {
        const bool branch_taken_0x53f384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F384u;
            // 0x53f388: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f384) {
            ctx->pc = 0x53F3ACu;
            goto label_53f3ac;
        }
    }
    ctx->pc = 0x53F38Cu;
label_53f38c:
    // 0x53f38c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_53f390:
    if (ctx->pc == 0x53F390u) {
        ctx->pc = 0x53F390u;
            // 0x53f390: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
        ctx->pc = 0x53F394u;
        goto label_53f394;
    }
    ctx->pc = 0x53F38Cu;
    {
        const bool branch_taken_0x53f38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f38c) {
            ctx->pc = 0x53F390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F38Cu;
            // 0x53f390: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F3B0u;
            goto label_53f3b0;
        }
    }
    ctx->pc = 0x53F394u;
label_53f394:
    // 0x53f394: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_53f398:
    if (ctx->pc == 0x53F398u) {
        ctx->pc = 0x53F39Cu;
        goto label_53f39c;
    }
    ctx->pc = 0x53F394u;
    {
        const bool branch_taken_0x53f394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f394) {
            ctx->pc = 0x53F3ACu;
            goto label_53f3ac;
        }
    }
    ctx->pc = 0x53F39Cu;
label_53f39c:
    // 0x53f39c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_53f3a0:
    if (ctx->pc == 0x53F3A0u) {
        ctx->pc = 0x53F3A4u;
        goto label_53f3a4;
    }
    ctx->pc = 0x53F39Cu;
    {
        const bool branch_taken_0x53f39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f39c) {
            ctx->pc = 0x53F3ACu;
            goto label_53f3ac;
        }
    }
    ctx->pc = 0x53F3A4u;
label_53f3a4:
    // 0x53f3a4: 0xc0b4c14  jal         func_2D3050
label_53f3a8:
    if (ctx->pc == 0x53F3A8u) {
        ctx->pc = 0x53F3A8u;
            // 0x53f3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F3ACu;
        goto label_53f3ac;
    }
    ctx->pc = 0x53F3A4u;
    SET_GPR_U32(ctx, 31, 0x53F3ACu);
    ctx->pc = 0x53F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F3A4u;
            // 0x53f3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3050u;
    if (runtime->hasFunction(0x2D3050u)) {
        auto targetFn = runtime->lookupFunction(0x2D3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F3ACu; }
        if (ctx->pc != 0x53F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3050_0x2d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F3ACu; }
        if (ctx->pc != 0x53F3ACu) { return; }
    }
    ctx->pc = 0x53F3ACu;
label_53f3ac:
    // 0x53f3ac: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x53f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_53f3b0:
    // 0x53f3b0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_53f3b4:
    if (ctx->pc == 0x53F3B4u) {
        ctx->pc = 0x53F3B8u;
        goto label_53f3b8;
    }
    ctx->pc = 0x53F3B0u;
    {
        const bool branch_taken_0x53f3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f3b0) {
            ctx->pc = 0x53F3D8u;
            goto label_53f3d8;
        }
    }
    ctx->pc = 0x53F3B8u;
label_53f3b8:
    // 0x53f3b8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_53f3bc:
    if (ctx->pc == 0x53F3BCu) {
        ctx->pc = 0x53F3C0u;
        goto label_53f3c0;
    }
    ctx->pc = 0x53F3B8u;
    {
        const bool branch_taken_0x53f3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f3b8) {
            ctx->pc = 0x53F3D8u;
            goto label_53f3d8;
        }
    }
    ctx->pc = 0x53F3C0u;
label_53f3c0:
    // 0x53f3c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_53f3c4:
    if (ctx->pc == 0x53F3C4u) {
        ctx->pc = 0x53F3C8u;
        goto label_53f3c8;
    }
    ctx->pc = 0x53F3C0u;
    {
        const bool branch_taken_0x53f3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f3c0) {
            ctx->pc = 0x53F3D8u;
            goto label_53f3d8;
        }
    }
    ctx->pc = 0x53F3C8u;
label_53f3c8:
    // 0x53f3c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_53f3cc:
    if (ctx->pc == 0x53F3CCu) {
        ctx->pc = 0x53F3D0u;
        goto label_53f3d0;
    }
    ctx->pc = 0x53F3C8u;
    {
        const bool branch_taken_0x53f3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f3c8) {
            ctx->pc = 0x53F3D8u;
            goto label_53f3d8;
        }
    }
    ctx->pc = 0x53F3D0u;
label_53f3d0:
    // 0x53f3d0: 0xc0b4c14  jal         func_2D3050
label_53f3d4:
    if (ctx->pc == 0x53F3D4u) {
        ctx->pc = 0x53F3D4u;
            // 0x53f3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F3D8u;
        goto label_53f3d8;
    }
    ctx->pc = 0x53F3D0u;
    SET_GPR_U32(ctx, 31, 0x53F3D8u);
    ctx->pc = 0x53F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F3D0u;
            // 0x53f3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3050u;
    if (runtime->hasFunction(0x2D3050u)) {
        auto targetFn = runtime->lookupFunction(0x2D3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F3D8u; }
        if (ctx->pc != 0x53F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3050_0x2d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F3D8u; }
        if (ctx->pc != 0x53F3D8u) { return; }
    }
    ctx->pc = 0x53F3D8u;
label_53f3d8:
    // 0x53f3d8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_53f3dc:
    if (ctx->pc == 0x53F3DCu) {
        ctx->pc = 0x53F3DCu;
            // 0x53f3dc: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x53F3E0u;
        goto label_53f3e0;
    }
    ctx->pc = 0x53F3D8u;
    {
        const bool branch_taken_0x53f3d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f3d8) {
            ctx->pc = 0x53F3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F3D8u;
            // 0x53f3dc: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F408u;
            goto label_53f408;
        }
    }
    ctx->pc = 0x53F3E0u;
label_53f3e0:
    // 0x53f3e0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53f3e4:
    // 0x53f3e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53f3e8:
    // 0x53f3e8: 0x246375a0  addiu       $v1, $v1, 0x75A0
    ctx->pc = 0x53f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30112));
label_53f3ec:
    // 0x53f3ec: 0x244275d8  addiu       $v0, $v0, 0x75D8
    ctx->pc = 0x53f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30168));
label_53f3f0:
    // 0x53f3f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_53f3f4:
    // 0x53f3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f3f8:
    // 0x53f3f8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x53f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_53f3fc:
    // 0x53f3fc: 0xc14fa78  jal         func_53E9E0
label_53f400:
    if (ctx->pc == 0x53F400u) {
        ctx->pc = 0x53F400u;
            // 0x53f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F404u;
        goto label_53f404;
    }
    ctx->pc = 0x53F3FCu;
    SET_GPR_U32(ctx, 31, 0x53F404u);
    ctx->pc = 0x53F400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F3FCu;
            // 0x53f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E9E0u;
    if (runtime->hasFunction(0x53E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x53E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F404u; }
        if (ctx->pc != 0x53F404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E9E0_0x53e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F404u; }
        if (ctx->pc != 0x53F404u) { return; }
    }
    ctx->pc = 0x53F404u;
label_53f404:
    // 0x53f404: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x53f404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_53f408:
    // 0x53f408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53f408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53f40c:
    // 0x53f40c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53f410:
    if (ctx->pc == 0x53F410u) {
        ctx->pc = 0x53F410u;
            // 0x53f410: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F414u;
        goto label_53f414;
    }
    ctx->pc = 0x53F40Cu;
    {
        const bool branch_taken_0x53f40c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53f40c) {
            ctx->pc = 0x53F410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F40Cu;
            // 0x53f410: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F420u;
            goto label_53f420;
        }
    }
    ctx->pc = 0x53F414u;
label_53f414:
    // 0x53f414: 0xc0400a8  jal         func_1002A0
label_53f418:
    if (ctx->pc == 0x53F418u) {
        ctx->pc = 0x53F418u;
            // 0x53f418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F41Cu;
        goto label_53f41c;
    }
    ctx->pc = 0x53F414u;
    SET_GPR_U32(ctx, 31, 0x53F41Cu);
    ctx->pc = 0x53F418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F414u;
            // 0x53f418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F41Cu; }
        if (ctx->pc != 0x53F41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F41Cu; }
        if (ctx->pc != 0x53F41Cu) { return; }
    }
    ctx->pc = 0x53F41Cu;
label_53f41c:
    // 0x53f41c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53f41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f420:
    // 0x53f420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53f420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53f424:
    // 0x53f424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53f424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53f428:
    // 0x53f428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f42c:
    // 0x53f42c: 0x3e00008  jr          $ra
label_53f430:
    if (ctx->pc == 0x53F430u) {
        ctx->pc = 0x53F430u;
            // 0x53f430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53F434u;
        goto label_53f434;
    }
    ctx->pc = 0x53F42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F42Cu;
            // 0x53f430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F434u;
label_53f434:
    // 0x53f434: 0x0  nop
    ctx->pc = 0x53f434u;
    // NOP
label_53f438:
    // 0x53f438: 0x0  nop
    ctx->pc = 0x53f438u;
    // NOP
label_53f43c:
    // 0x53f43c: 0x0  nop
    ctx->pc = 0x53f43cu;
    // NOP
label_53f440:
    // 0x53f440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_53f444:
    // 0x53f444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x53f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_53f448:
    // 0x53f448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53f44c:
    // 0x53f44c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53f450:
    // 0x53f450: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x53f450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53f454:
    // 0x53f454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53f454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53f458:
    // 0x53f458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53f45c:
    // 0x53f45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f460:
    // 0x53f460: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x53f460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53f464:
    // 0x53f464: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_53f468:
    if (ctx->pc == 0x53F468u) {
        ctx->pc = 0x53F468u;
            // 0x53f468: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F46Cu;
        goto label_53f46c;
    }
    ctx->pc = 0x53F464u;
    {
        const bool branch_taken_0x53f464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F464u;
            // 0x53f468: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f464) {
            ctx->pc = 0x53F4A8u;
            goto label_53f4a8;
        }
    }
    ctx->pc = 0x53F46Cu;
label_53f46c:
    // 0x53f46c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53f46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53f470:
    // 0x53f470: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x53f470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53f474:
    // 0x53f474: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53f474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53f478:
    // 0x53f478: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x53f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_53f47c:
    // 0x53f47c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x53f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_53f480:
    // 0x53f480: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x53f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53f484:
    // 0x53f484: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f488:
    // 0x53f488: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x53f488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_53f48c:
    // 0x53f48c: 0x320f809  jalr        $t9
label_53f490:
    if (ctx->pc == 0x53F490u) {
        ctx->pc = 0x53F494u;
        goto label_53f494;
    }
    ctx->pc = 0x53F48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F494u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F494u; }
            if (ctx->pc != 0x53F494u) { return; }
        }
        }
    }
    ctx->pc = 0x53F494u;
label_53f494:
    // 0x53f494: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x53f494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_53f498:
    // 0x53f498: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x53f498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_53f49c:
    // 0x53f49c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x53f49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_53f4a0:
    // 0x53f4a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_53f4a4:
    if (ctx->pc == 0x53F4A4u) {
        ctx->pc = 0x53F4A4u;
            // 0x53f4a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x53F4A8u;
        goto label_53f4a8;
    }
    ctx->pc = 0x53F4A0u;
    {
        const bool branch_taken_0x53f4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53F4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F4A0u;
            // 0x53f4a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f4a0) {
            ctx->pc = 0x53F478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53f478;
        }
    }
    ctx->pc = 0x53F4A8u;
label_53f4a8:
    // 0x53f4a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x53f4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53f4ac:
    // 0x53f4ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x53f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_53f4b0:
    // 0x53f4b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53f4b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53f4b4:
    // 0x53f4b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53f4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53f4b8:
    // 0x53f4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53f4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53f4bc:
    // 0x53f4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53f4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53f4c0:
    // 0x53f4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f4c4:
    // 0x53f4c4: 0x3e00008  jr          $ra
label_53f4c8:
    if (ctx->pc == 0x53F4C8u) {
        ctx->pc = 0x53F4C8u;
            // 0x53f4c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53F4CCu;
        goto label_53f4cc;
    }
    ctx->pc = 0x53F4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F4C4u;
            // 0x53f4c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F4CCu;
label_53f4cc:
    // 0x53f4cc: 0x0  nop
    ctx->pc = 0x53f4ccu;
    // NOP
label_53f4d0:
    // 0x53f4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53f4d4:
    // 0x53f4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53f4d8:
    // 0x53f4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f4dc:
    // 0x53f4dc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x53f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_53f4e0:
    // 0x53f4e0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_53f4e4:
    if (ctx->pc == 0x53F4E4u) {
        ctx->pc = 0x53F4E4u;
            // 0x53f4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F4E8u;
        goto label_53f4e8;
    }
    ctx->pc = 0x53F4E0u;
    {
        const bool branch_taken_0x53f4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F4E0u;
            // 0x53f4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f4e0) {
            ctx->pc = 0x53F600u;
            goto label_53f600;
        }
    }
    ctx->pc = 0x53F4E8u;
label_53f4e8:
    // 0x53f4e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x53f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53f4ec:
    // 0x53f4ec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x53f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_53f4f0:
    // 0x53f4f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x53f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_53f4f4:
    // 0x53f4f4: 0xc075128  jal         func_1D44A0
label_53f4f8:
    if (ctx->pc == 0x53F4F8u) {
        ctx->pc = 0x53F4F8u;
            // 0x53f4f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x53F4FCu;
        goto label_53f4fc;
    }
    ctx->pc = 0x53F4F4u;
    SET_GPR_U32(ctx, 31, 0x53F4FCu);
    ctx->pc = 0x53F4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F4F4u;
            // 0x53f4f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F4FCu; }
        if (ctx->pc != 0x53F4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F4FCu; }
        if (ctx->pc != 0x53F4FCu) { return; }
    }
    ctx->pc = 0x53F4FCu;
label_53f4fc:
    // 0x53f4fc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x53f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_53f500:
    // 0x53f500: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f504:
    // 0x53f504: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x53f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_53f508:
    // 0x53f508: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x53f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_53f50c:
    // 0x53f50c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x53f50cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53f510:
    // 0x53f510: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53f514:
    if (ctx->pc == 0x53F514u) {
        ctx->pc = 0x53F514u;
            // 0x53f514: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x53F518u;
        goto label_53f518;
    }
    ctx->pc = 0x53F510u;
    {
        const bool branch_taken_0x53f510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F510u;
            // 0x53f514: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f510) {
            ctx->pc = 0x53F520u;
            goto label_53f520;
        }
    }
    ctx->pc = 0x53F518u;
label_53f518:
    // 0x53f518: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f51c:
    // 0x53f51c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x53f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_53f520:
    // 0x53f520: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x53f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f524:
    // 0x53f524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f528:
    // 0x53f528: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x53f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_53f52c:
    // 0x53f52c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x53f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_53f530:
    // 0x53f530: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x53f530u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53f534:
    // 0x53f534: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53f538:
    if (ctx->pc == 0x53F538u) {
        ctx->pc = 0x53F538u;
            // 0x53f538: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53F53Cu;
        goto label_53f53c;
    }
    ctx->pc = 0x53F534u;
    {
        const bool branch_taken_0x53f534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f534) {
            ctx->pc = 0x53F538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F534u;
            // 0x53f538: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F548u;
            goto label_53f548;
        }
    }
    ctx->pc = 0x53F53Cu;
label_53f53c:
    // 0x53f53c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f540:
    // 0x53f540: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x53f540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_53f544:
    // 0x53f544: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x53f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f548:
    // 0x53f548: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f54c:
    // 0x53f54c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x53f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_53f550:
    // 0x53f550: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x53f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_53f554:
    // 0x53f554: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x53f554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53f558:
    // 0x53f558: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53f55c:
    if (ctx->pc == 0x53F55Cu) {
        ctx->pc = 0x53F55Cu;
            // 0x53f55c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53F560u;
        goto label_53f560;
    }
    ctx->pc = 0x53F558u;
    {
        const bool branch_taken_0x53f558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f558) {
            ctx->pc = 0x53F55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F558u;
            // 0x53f55c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F56Cu;
            goto label_53f56c;
        }
    }
    ctx->pc = 0x53F560u;
label_53f560:
    // 0x53f560: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53f564:
    // 0x53f564: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x53f564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_53f568:
    // 0x53f568: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53f568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53f56c:
    // 0x53f56c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53f56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53f570:
    // 0x53f570: 0x320f809  jalr        $t9
label_53f574:
    if (ctx->pc == 0x53F574u) {
        ctx->pc = 0x53F574u;
            // 0x53f574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F578u;
        goto label_53f578;
    }
    ctx->pc = 0x53F570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F578u);
        ctx->pc = 0x53F574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F570u;
            // 0x53f574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F578u; }
            if (ctx->pc != 0x53F578u) { return; }
        }
        }
    }
    ctx->pc = 0x53F578u;
label_53f578:
    // 0x53f578: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x53f578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_53f57c:
    // 0x53f57c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f580:
    // 0x53f580: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x53f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_53f584:
    // 0x53f584: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x53f584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_53f588:
    // 0x53f588: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x53f588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_53f58c:
    // 0x53f58c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x53f58cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_53f590:
    // 0x53f590: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53f594:
    if (ctx->pc == 0x53F594u) {
        ctx->pc = 0x53F594u;
            // 0x53f594: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x53F598u;
        goto label_53f598;
    }
    ctx->pc = 0x53F590u;
    {
        const bool branch_taken_0x53f590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f590) {
            ctx->pc = 0x53F594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F590u;
            // 0x53f594: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F5A4u;
            goto label_53f5a4;
        }
    }
    ctx->pc = 0x53F598u;
label_53f598:
    // 0x53f598: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f59c:
    // 0x53f59c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x53f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_53f5a0:
    // 0x53f5a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x53f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_53f5a4:
    // 0x53f5a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f5a8:
    // 0x53f5a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x53f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_53f5ac:
    // 0x53f5ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x53f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_53f5b0:
    // 0x53f5b0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x53f5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_53f5b4:
    // 0x53f5b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x53f5b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_53f5b8:
    // 0x53f5b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53f5bc:
    if (ctx->pc == 0x53F5BCu) {
        ctx->pc = 0x53F5C0u;
        goto label_53f5c0;
    }
    ctx->pc = 0x53F5B8u;
    {
        const bool branch_taken_0x53f5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f5b8) {
            ctx->pc = 0x53F5C8u;
            goto label_53f5c8;
        }
    }
    ctx->pc = 0x53F5C0u;
label_53f5c0:
    // 0x53f5c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f5c4:
    // 0x53f5c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x53f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_53f5c8:
    // 0x53f5c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f5cc:
    // 0x53f5cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x53f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_53f5d0:
    // 0x53f5d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x53f5d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_53f5d4:
    // 0x53f5d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53f5d8:
    if (ctx->pc == 0x53F5D8u) {
        ctx->pc = 0x53F5DCu;
        goto label_53f5dc;
    }
    ctx->pc = 0x53F5D4u;
    {
        const bool branch_taken_0x53f5d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f5d4) {
            ctx->pc = 0x53F5E4u;
            goto label_53f5e4;
        }
    }
    ctx->pc = 0x53F5DCu;
label_53f5dc:
    // 0x53f5dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f5e0:
    // 0x53f5e0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x53f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_53f5e4:
    // 0x53f5e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f5e8:
    // 0x53f5e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x53f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_53f5ec:
    // 0x53f5ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x53f5ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_53f5f0:
    // 0x53f5f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53f5f4:
    if (ctx->pc == 0x53F5F4u) {
        ctx->pc = 0x53F5F4u;
            // 0x53f5f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x53F5F8u;
        goto label_53f5f8;
    }
    ctx->pc = 0x53F5F0u;
    {
        const bool branch_taken_0x53f5f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f5f0) {
            ctx->pc = 0x53F5F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F5F0u;
            // 0x53f5f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F604u;
            goto label_53f604;
        }
    }
    ctx->pc = 0x53F5F8u;
label_53f5f8:
    // 0x53f5f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53f5fc:
    // 0x53f5fc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x53f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_53f600:
    // 0x53f600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53f600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53f604:
    // 0x53f604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f608:
    // 0x53f608: 0x3e00008  jr          $ra
label_53f60c:
    if (ctx->pc == 0x53F60Cu) {
        ctx->pc = 0x53F60Cu;
            // 0x53f60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53F610u;
        goto label_53f610;
    }
    ctx->pc = 0x53F608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F608u;
            // 0x53f60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F610u;
label_53f610:
    // 0x53f610: 0x814fa10  j           func_53E840
label_53f614:
    if (ctx->pc == 0x53F614u) {
        ctx->pc = 0x53F614u;
            // 0x53f614: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x53F618u;
        goto label_53f618;
    }
    ctx->pc = 0x53F610u;
    ctx->pc = 0x53F614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F610u;
            // 0x53f614: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E840u;
    {
        auto targetFn = runtime->lookupFunction(0x53E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x53F618u;
label_53f618:
    // 0x53f618: 0x0  nop
    ctx->pc = 0x53f618u;
    // NOP
label_53f61c:
    // 0x53f61c: 0x0  nop
    ctx->pc = 0x53f61cu;
    // NOP
label_53f620:
    // 0x53f620: 0x814fcd4  j           func_53F350
label_53f624:
    if (ctx->pc == 0x53F624u) {
        ctx->pc = 0x53F624u;
            // 0x53f624: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x53F628u;
        goto label_53f628;
    }
    ctx->pc = 0x53F620u;
    ctx->pc = 0x53F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F620u;
            // 0x53f624: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F350u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_53f350;
    ctx->pc = 0x53F628u;
label_53f628:
    // 0x53f628: 0x0  nop
    ctx->pc = 0x53f628u;
    // NOP
label_53f62c:
    // 0x53f62c: 0x0  nop
    ctx->pc = 0x53f62cu;
    // NOP
label_53f630:
    // 0x53f630: 0x814fa78  j           func_53E9E0
label_53f634:
    if (ctx->pc == 0x53F634u) {
        ctx->pc = 0x53F634u;
            // 0x53f634: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x53F638u;
        goto label_53f638;
    }
    ctx->pc = 0x53F630u;
    ctx->pc = 0x53F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F630u;
            // 0x53f634: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E9E0u;
    if (runtime->hasFunction(0x53E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x53E9E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0053E9E0_0x53e9e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x53F638u;
label_53f638:
    // 0x53f638: 0x0  nop
    ctx->pc = 0x53f638u;
    // NOP
label_53f63c:
    // 0x53f63c: 0x0  nop
    ctx->pc = 0x53f63cu;
    // NOP
label_53f640:
    // 0x53f640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53f644:
    // 0x53f644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53f648:
    // 0x53f648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53f64c:
    // 0x53f64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f650:
    // 0x53f650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53f650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53f654:
    // 0x53f654: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_53f658:
    if (ctx->pc == 0x53F658u) {
        ctx->pc = 0x53F658u;
            // 0x53f658: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F65Cu;
        goto label_53f65c;
    }
    ctx->pc = 0x53F654u;
    {
        const bool branch_taken_0x53f654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F654u;
            // 0x53f658: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f654) {
            ctx->pc = 0x53F744u;
            goto label_53f744;
        }
    }
    ctx->pc = 0x53F65Cu;
label_53f65c:
    // 0x53f65c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53f660:
    // 0x53f660: 0x244275f0  addiu       $v0, $v0, 0x75F0
    ctx->pc = 0x53f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30192));
label_53f664:
    // 0x53f664: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x53f664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_53f668:
    // 0x53f668: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x53f668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_53f66c:
    // 0x53f66c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_53f670:
    if (ctx->pc == 0x53F670u) {
        ctx->pc = 0x53F670u;
            // 0x53f670: 0x8e0500dc  lw          $a1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x53F674u;
        goto label_53f674;
    }
    ctx->pc = 0x53F66Cu;
    {
        const bool branch_taken_0x53f66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f66c) {
            ctx->pc = 0x53F670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F66Cu;
            // 0x53f670: 0x8e0500dc  lw          $a1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F688u;
            goto label_53f688;
        }
    }
    ctx->pc = 0x53F674u;
label_53f674:
    // 0x53f674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53f678:
    // 0x53f678: 0xc0fe48c  jal         func_3F9230
label_53f67c:
    if (ctx->pc == 0x53F67Cu) {
        ctx->pc = 0x53F67Cu;
            // 0x53f67c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x53F680u;
        goto label_53f680;
    }
    ctx->pc = 0x53F678u;
    SET_GPR_U32(ctx, 31, 0x53F680u);
    ctx->pc = 0x53F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F678u;
            // 0x53f67c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F680u; }
        if (ctx->pc != 0x53F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F680u; }
        if (ctx->pc != 0x53F680u) { return; }
    }
    ctx->pc = 0x53F680u;
label_53f680:
    // 0x53f680: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x53f680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_53f684:
    // 0x53f684: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x53f684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_53f688:
    // 0x53f688: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_53f68c:
    if (ctx->pc == 0x53F68Cu) {
        ctx->pc = 0x53F68Cu;
            // 0x53f68c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53F690u;
        goto label_53f690;
    }
    ctx->pc = 0x53F688u;
    {
        const bool branch_taken_0x53f688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f688) {
            ctx->pc = 0x53F68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F688u;
            // 0x53f68c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F6A4u;
            goto label_53f6a4;
        }
    }
    ctx->pc = 0x53F690u;
label_53f690:
    // 0x53f690: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53f694:
    // 0x53f694: 0xc0fe48c  jal         func_3F9230
label_53f698:
    if (ctx->pc == 0x53F698u) {
        ctx->pc = 0x53F698u;
            // 0x53f698: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x53F69Cu;
        goto label_53f69c;
    }
    ctx->pc = 0x53F694u;
    SET_GPR_U32(ctx, 31, 0x53F69Cu);
    ctx->pc = 0x53F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F694u;
            // 0x53f698: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F69Cu; }
        if (ctx->pc != 0x53F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F69Cu; }
        if (ctx->pc != 0x53F69Cu) { return; }
    }
    ctx->pc = 0x53F69Cu;
label_53f69c:
    // 0x53f69c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x53f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_53f6a0:
    // 0x53f6a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53f6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53f6a4:
    // 0x53f6a4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x53f6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_53f6a8:
    // 0x53f6a8: 0x320f809  jalr        $t9
label_53f6ac:
    if (ctx->pc == 0x53F6ACu) {
        ctx->pc = 0x53F6ACu;
            // 0x53f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F6B0u;
        goto label_53f6b0;
    }
    ctx->pc = 0x53F6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F6B0u);
        ctx->pc = 0x53F6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F6A8u;
            // 0x53f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F6B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F6B0u; }
            if (ctx->pc != 0x53F6B0u) { return; }
        }
        }
    }
    ctx->pc = 0x53F6B0u;
label_53f6b0:
    // 0x53f6b0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_53f6b4:
    if (ctx->pc == 0x53F6B4u) {
        ctx->pc = 0x53F6B4u;
            // 0x53f6b4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x53F6B8u;
        goto label_53f6b8;
    }
    ctx->pc = 0x53F6B0u;
    {
        const bool branch_taken_0x53f6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f6b0) {
            ctx->pc = 0x53F6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F6B0u;
            // 0x53f6b4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F730u;
            goto label_53f730;
        }
    }
    ctx->pc = 0x53F6B8u;
label_53f6b8:
    // 0x53f6b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53f6bc:
    // 0x53f6bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x53f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_53f6c0:
    // 0x53f6c0: 0x244273d0  addiu       $v0, $v0, 0x73D0
    ctx->pc = 0x53f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29648));
label_53f6c4:
    // 0x53f6c4: 0x2484dc50  addiu       $a0, $a0, -0x23B0
    ctx->pc = 0x53f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958160));
label_53f6c8:
    // 0x53f6c8: 0xc0ad6c4  jal         func_2B5B10
label_53f6cc:
    if (ctx->pc == 0x53F6CCu) {
        ctx->pc = 0x53F6CCu;
            // 0x53f6cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53F6D0u;
        goto label_53f6d0;
    }
    ctx->pc = 0x53F6C8u;
    SET_GPR_U32(ctx, 31, 0x53F6D0u);
    ctx->pc = 0x53F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F6C8u;
            // 0x53f6cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F6D0u; }
        if (ctx->pc != 0x53F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F6D0u; }
        if (ctx->pc != 0x53F6D0u) { return; }
    }
    ctx->pc = 0x53F6D0u;
label_53f6d0:
    // 0x53f6d0: 0xc14fdd8  jal         func_53F760
label_53f6d4:
    if (ctx->pc == 0x53F6D4u) {
        ctx->pc = 0x53F6D8u;
        goto label_53f6d8;
    }
    ctx->pc = 0x53F6D0u;
    SET_GPR_U32(ctx, 31, 0x53F6D8u);
    ctx->pc = 0x53F760u;
    if (runtime->hasFunction(0x53F760u)) {
        auto targetFn = runtime->lookupFunction(0x53F760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F6D8u; }
        if (ctx->pc != 0x53F6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F760_0x53f760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F6D8u; }
        if (ctx->pc != 0x53F6D8u) { return; }
    }
    ctx->pc = 0x53F6D8u;
label_53f6d8:
    // 0x53f6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53f6dc:
    // 0x53f6dc: 0xc14f030  jal         func_53C0C0
label_53f6e0:
    if (ctx->pc == 0x53F6E0u) {
        ctx->pc = 0x53F6E0u;
            // 0x53f6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F6E4u;
        goto label_53f6e4;
    }
    ctx->pc = 0x53F6DCu;
    SET_GPR_U32(ctx, 31, 0x53F6E4u);
    ctx->pc = 0x53F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F6DCu;
            // 0x53f6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53C0C0u;
    if (runtime->hasFunction(0x53C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x53C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F6E4u; }
        if (ctx->pc != 0x53F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053C0C0_0x53c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F6E4u; }
        if (ctx->pc != 0x53F6E4u) { return; }
    }
    ctx->pc = 0x53F6E4u;
label_53f6e4:
    // 0x53f6e4: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x53f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_53f6e8:
    // 0x53f6e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53f6ec:
    if (ctx->pc == 0x53F6ECu) {
        ctx->pc = 0x53F6ECu;
            // 0x53f6ec: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x53F6F0u;
        goto label_53f6f0;
    }
    ctx->pc = 0x53F6E8u;
    {
        const bool branch_taken_0x53f6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f6e8) {
            ctx->pc = 0x53F6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F6E8u;
            // 0x53f6ec: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F704u;
            goto label_53f704;
        }
    }
    ctx->pc = 0x53F6F0u;
label_53f6f0:
    // 0x53f6f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f6f4:
    // 0x53f6f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53f6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53f6f8:
    // 0x53f6f8: 0x320f809  jalr        $t9
label_53f6fc:
    if (ctx->pc == 0x53F6FCu) {
        ctx->pc = 0x53F6FCu;
            // 0x53f6fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53F700u;
        goto label_53f700;
    }
    ctx->pc = 0x53F6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F700u);
        ctx->pc = 0x53F6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F6F8u;
            // 0x53f6fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F700u; }
            if (ctx->pc != 0x53F700u) { return; }
        }
        }
    }
    ctx->pc = 0x53F700u;
label_53f700:
    // 0x53f700: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x53f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_53f704:
    // 0x53f704: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f708:
    // 0x53f708: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53f708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53f70c:
    // 0x53f70c: 0x320f809  jalr        $t9
label_53f710:
    if (ctx->pc == 0x53F710u) {
        ctx->pc = 0x53F714u;
        goto label_53f714;
    }
    ctx->pc = 0x53F70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F714u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F714u; }
            if (ctx->pc != 0x53F714u) { return; }
        }
        }
    }
    ctx->pc = 0x53F714u;
label_53f714:
    // 0x53f714: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x53f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_53f718:
    // 0x53f718: 0xc14f718  jal         func_53DC60
label_53f71c:
    if (ctx->pc == 0x53F71Cu) {
        ctx->pc = 0x53F71Cu;
            // 0x53f71c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x53F720u;
        goto label_53f720;
    }
    ctx->pc = 0x53F718u;
    SET_GPR_U32(ctx, 31, 0x53F720u);
    ctx->pc = 0x53F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F718u;
            // 0x53f71c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53DC60u;
    if (runtime->hasFunction(0x53DC60u)) {
        auto targetFn = runtime->lookupFunction(0x53DC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F720u; }
        if (ctx->pc != 0x53F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053DC60_0x53dc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F720u; }
        if (ctx->pc != 0x53F720u) { return; }
    }
    ctx->pc = 0x53F720u;
label_53f720:
    // 0x53f720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53f720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f724:
    // 0x53f724: 0xc075bf8  jal         func_1D6FE0
label_53f728:
    if (ctx->pc == 0x53F728u) {
        ctx->pc = 0x53F728u;
            // 0x53f728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F72Cu;
        goto label_53f72c;
    }
    ctx->pc = 0x53F724u;
    SET_GPR_U32(ctx, 31, 0x53F72Cu);
    ctx->pc = 0x53F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F724u;
            // 0x53f728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F72Cu; }
        if (ctx->pc != 0x53F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F72Cu; }
        if (ctx->pc != 0x53F72Cu) { return; }
    }
    ctx->pc = 0x53F72Cu;
label_53f72c:
    // 0x53f72c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x53f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_53f730:
    // 0x53f730: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53f730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53f734:
    // 0x53f734: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53f738:
    if (ctx->pc == 0x53F738u) {
        ctx->pc = 0x53F738u;
            // 0x53f738: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F73Cu;
        goto label_53f73c;
    }
    ctx->pc = 0x53F734u;
    {
        const bool branch_taken_0x53f734 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53f734) {
            ctx->pc = 0x53F738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F734u;
            // 0x53f738: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F748u;
            goto label_53f748;
        }
    }
    ctx->pc = 0x53F73Cu;
label_53f73c:
    // 0x53f73c: 0xc0400a8  jal         func_1002A0
label_53f740:
    if (ctx->pc == 0x53F740u) {
        ctx->pc = 0x53F740u;
            // 0x53f740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F744u;
        goto label_53f744;
    }
    ctx->pc = 0x53F73Cu;
    SET_GPR_U32(ctx, 31, 0x53F744u);
    ctx->pc = 0x53F740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F73Cu;
            // 0x53f740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F744u; }
        if (ctx->pc != 0x53F744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F744u; }
        if (ctx->pc != 0x53F744u) { return; }
    }
    ctx->pc = 0x53F744u;
label_53f744:
    // 0x53f744: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53f744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f748:
    // 0x53f748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53f748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53f74c:
    // 0x53f74c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53f74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53f750:
    // 0x53f750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f754:
    // 0x53f754: 0x3e00008  jr          $ra
label_53f758:
    if (ctx->pc == 0x53F758u) {
        ctx->pc = 0x53F758u;
            // 0x53f758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53F75Cu;
        goto label_53f75c;
    }
    ctx->pc = 0x53F754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F754u;
            // 0x53f758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F75Cu;
label_53f75c:
    // 0x53f75c: 0x0  nop
    ctx->pc = 0x53f75cu;
    // NOP
}
