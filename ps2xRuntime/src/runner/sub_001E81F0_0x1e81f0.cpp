#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E81F0
// Address: 0x1e81f0 - 0x1e8600
void sub_001E81F0_0x1e81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E81F0_0x1e81f0");
#endif

    switch (ctx->pc) {
        case 0x1e81f0u: goto label_1e81f0;
        case 0x1e81f4u: goto label_1e81f4;
        case 0x1e81f8u: goto label_1e81f8;
        case 0x1e81fcu: goto label_1e81fc;
        case 0x1e8200u: goto label_1e8200;
        case 0x1e8204u: goto label_1e8204;
        case 0x1e8208u: goto label_1e8208;
        case 0x1e820cu: goto label_1e820c;
        case 0x1e8210u: goto label_1e8210;
        case 0x1e8214u: goto label_1e8214;
        case 0x1e8218u: goto label_1e8218;
        case 0x1e821cu: goto label_1e821c;
        case 0x1e8220u: goto label_1e8220;
        case 0x1e8224u: goto label_1e8224;
        case 0x1e8228u: goto label_1e8228;
        case 0x1e822cu: goto label_1e822c;
        case 0x1e8230u: goto label_1e8230;
        case 0x1e8234u: goto label_1e8234;
        case 0x1e8238u: goto label_1e8238;
        case 0x1e823cu: goto label_1e823c;
        case 0x1e8240u: goto label_1e8240;
        case 0x1e8244u: goto label_1e8244;
        case 0x1e8248u: goto label_1e8248;
        case 0x1e824cu: goto label_1e824c;
        case 0x1e8250u: goto label_1e8250;
        case 0x1e8254u: goto label_1e8254;
        case 0x1e8258u: goto label_1e8258;
        case 0x1e825cu: goto label_1e825c;
        case 0x1e8260u: goto label_1e8260;
        case 0x1e8264u: goto label_1e8264;
        case 0x1e8268u: goto label_1e8268;
        case 0x1e826cu: goto label_1e826c;
        case 0x1e8270u: goto label_1e8270;
        case 0x1e8274u: goto label_1e8274;
        case 0x1e8278u: goto label_1e8278;
        case 0x1e827cu: goto label_1e827c;
        case 0x1e8280u: goto label_1e8280;
        case 0x1e8284u: goto label_1e8284;
        case 0x1e8288u: goto label_1e8288;
        case 0x1e828cu: goto label_1e828c;
        case 0x1e8290u: goto label_1e8290;
        case 0x1e8294u: goto label_1e8294;
        case 0x1e8298u: goto label_1e8298;
        case 0x1e829cu: goto label_1e829c;
        case 0x1e82a0u: goto label_1e82a0;
        case 0x1e82a4u: goto label_1e82a4;
        case 0x1e82a8u: goto label_1e82a8;
        case 0x1e82acu: goto label_1e82ac;
        case 0x1e82b0u: goto label_1e82b0;
        case 0x1e82b4u: goto label_1e82b4;
        case 0x1e82b8u: goto label_1e82b8;
        case 0x1e82bcu: goto label_1e82bc;
        case 0x1e82c0u: goto label_1e82c0;
        case 0x1e82c4u: goto label_1e82c4;
        case 0x1e82c8u: goto label_1e82c8;
        case 0x1e82ccu: goto label_1e82cc;
        case 0x1e82d0u: goto label_1e82d0;
        case 0x1e82d4u: goto label_1e82d4;
        case 0x1e82d8u: goto label_1e82d8;
        case 0x1e82dcu: goto label_1e82dc;
        case 0x1e82e0u: goto label_1e82e0;
        case 0x1e82e4u: goto label_1e82e4;
        case 0x1e82e8u: goto label_1e82e8;
        case 0x1e82ecu: goto label_1e82ec;
        case 0x1e82f0u: goto label_1e82f0;
        case 0x1e82f4u: goto label_1e82f4;
        case 0x1e82f8u: goto label_1e82f8;
        case 0x1e82fcu: goto label_1e82fc;
        case 0x1e8300u: goto label_1e8300;
        case 0x1e8304u: goto label_1e8304;
        case 0x1e8308u: goto label_1e8308;
        case 0x1e830cu: goto label_1e830c;
        case 0x1e8310u: goto label_1e8310;
        case 0x1e8314u: goto label_1e8314;
        case 0x1e8318u: goto label_1e8318;
        case 0x1e831cu: goto label_1e831c;
        case 0x1e8320u: goto label_1e8320;
        case 0x1e8324u: goto label_1e8324;
        case 0x1e8328u: goto label_1e8328;
        case 0x1e832cu: goto label_1e832c;
        case 0x1e8330u: goto label_1e8330;
        case 0x1e8334u: goto label_1e8334;
        case 0x1e8338u: goto label_1e8338;
        case 0x1e833cu: goto label_1e833c;
        case 0x1e8340u: goto label_1e8340;
        case 0x1e8344u: goto label_1e8344;
        case 0x1e8348u: goto label_1e8348;
        case 0x1e834cu: goto label_1e834c;
        case 0x1e8350u: goto label_1e8350;
        case 0x1e8354u: goto label_1e8354;
        case 0x1e8358u: goto label_1e8358;
        case 0x1e835cu: goto label_1e835c;
        case 0x1e8360u: goto label_1e8360;
        case 0x1e8364u: goto label_1e8364;
        case 0x1e8368u: goto label_1e8368;
        case 0x1e836cu: goto label_1e836c;
        case 0x1e8370u: goto label_1e8370;
        case 0x1e8374u: goto label_1e8374;
        case 0x1e8378u: goto label_1e8378;
        case 0x1e837cu: goto label_1e837c;
        case 0x1e8380u: goto label_1e8380;
        case 0x1e8384u: goto label_1e8384;
        case 0x1e8388u: goto label_1e8388;
        case 0x1e838cu: goto label_1e838c;
        case 0x1e8390u: goto label_1e8390;
        case 0x1e8394u: goto label_1e8394;
        case 0x1e8398u: goto label_1e8398;
        case 0x1e839cu: goto label_1e839c;
        case 0x1e83a0u: goto label_1e83a0;
        case 0x1e83a4u: goto label_1e83a4;
        case 0x1e83a8u: goto label_1e83a8;
        case 0x1e83acu: goto label_1e83ac;
        case 0x1e83b0u: goto label_1e83b0;
        case 0x1e83b4u: goto label_1e83b4;
        case 0x1e83b8u: goto label_1e83b8;
        case 0x1e83bcu: goto label_1e83bc;
        case 0x1e83c0u: goto label_1e83c0;
        case 0x1e83c4u: goto label_1e83c4;
        case 0x1e83c8u: goto label_1e83c8;
        case 0x1e83ccu: goto label_1e83cc;
        case 0x1e83d0u: goto label_1e83d0;
        case 0x1e83d4u: goto label_1e83d4;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e83dcu: goto label_1e83dc;
        case 0x1e83e0u: goto label_1e83e0;
        case 0x1e83e4u: goto label_1e83e4;
        case 0x1e83e8u: goto label_1e83e8;
        case 0x1e83ecu: goto label_1e83ec;
        case 0x1e83f0u: goto label_1e83f0;
        case 0x1e83f4u: goto label_1e83f4;
        case 0x1e83f8u: goto label_1e83f8;
        case 0x1e83fcu: goto label_1e83fc;
        case 0x1e8400u: goto label_1e8400;
        case 0x1e8404u: goto label_1e8404;
        case 0x1e8408u: goto label_1e8408;
        case 0x1e840cu: goto label_1e840c;
        case 0x1e8410u: goto label_1e8410;
        case 0x1e8414u: goto label_1e8414;
        case 0x1e8418u: goto label_1e8418;
        case 0x1e841cu: goto label_1e841c;
        case 0x1e8420u: goto label_1e8420;
        case 0x1e8424u: goto label_1e8424;
        case 0x1e8428u: goto label_1e8428;
        case 0x1e842cu: goto label_1e842c;
        case 0x1e8430u: goto label_1e8430;
        case 0x1e8434u: goto label_1e8434;
        case 0x1e8438u: goto label_1e8438;
        case 0x1e843cu: goto label_1e843c;
        case 0x1e8440u: goto label_1e8440;
        case 0x1e8444u: goto label_1e8444;
        case 0x1e8448u: goto label_1e8448;
        case 0x1e844cu: goto label_1e844c;
        case 0x1e8450u: goto label_1e8450;
        case 0x1e8454u: goto label_1e8454;
        case 0x1e8458u: goto label_1e8458;
        case 0x1e845cu: goto label_1e845c;
        case 0x1e8460u: goto label_1e8460;
        case 0x1e8464u: goto label_1e8464;
        case 0x1e8468u: goto label_1e8468;
        case 0x1e846cu: goto label_1e846c;
        case 0x1e8470u: goto label_1e8470;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e8478u: goto label_1e8478;
        case 0x1e847cu: goto label_1e847c;
        case 0x1e8480u: goto label_1e8480;
        case 0x1e8484u: goto label_1e8484;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e848cu: goto label_1e848c;
        case 0x1e8490u: goto label_1e8490;
        case 0x1e8494u: goto label_1e8494;
        case 0x1e8498u: goto label_1e8498;
        case 0x1e849cu: goto label_1e849c;
        case 0x1e84a0u: goto label_1e84a0;
        case 0x1e84a4u: goto label_1e84a4;
        case 0x1e84a8u: goto label_1e84a8;
        case 0x1e84acu: goto label_1e84ac;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84b4u: goto label_1e84b4;
        case 0x1e84b8u: goto label_1e84b8;
        case 0x1e84bcu: goto label_1e84bc;
        case 0x1e84c0u: goto label_1e84c0;
        case 0x1e84c4u: goto label_1e84c4;
        case 0x1e84c8u: goto label_1e84c8;
        case 0x1e84ccu: goto label_1e84cc;
        case 0x1e84d0u: goto label_1e84d0;
        case 0x1e84d4u: goto label_1e84d4;
        case 0x1e84d8u: goto label_1e84d8;
        case 0x1e84dcu: goto label_1e84dc;
        case 0x1e84e0u: goto label_1e84e0;
        case 0x1e84e4u: goto label_1e84e4;
        case 0x1e84e8u: goto label_1e84e8;
        case 0x1e84ecu: goto label_1e84ec;
        case 0x1e84f0u: goto label_1e84f0;
        case 0x1e84f4u: goto label_1e84f4;
        case 0x1e84f8u: goto label_1e84f8;
        case 0x1e84fcu: goto label_1e84fc;
        case 0x1e8500u: goto label_1e8500;
        case 0x1e8504u: goto label_1e8504;
        case 0x1e8508u: goto label_1e8508;
        case 0x1e850cu: goto label_1e850c;
        case 0x1e8510u: goto label_1e8510;
        case 0x1e8514u: goto label_1e8514;
        case 0x1e8518u: goto label_1e8518;
        case 0x1e851cu: goto label_1e851c;
        case 0x1e8520u: goto label_1e8520;
        case 0x1e8524u: goto label_1e8524;
        case 0x1e8528u: goto label_1e8528;
        case 0x1e852cu: goto label_1e852c;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8534u: goto label_1e8534;
        case 0x1e8538u: goto label_1e8538;
        case 0x1e853cu: goto label_1e853c;
        case 0x1e8540u: goto label_1e8540;
        case 0x1e8544u: goto label_1e8544;
        case 0x1e8548u: goto label_1e8548;
        case 0x1e854cu: goto label_1e854c;
        case 0x1e8550u: goto label_1e8550;
        case 0x1e8554u: goto label_1e8554;
        case 0x1e8558u: goto label_1e8558;
        case 0x1e855cu: goto label_1e855c;
        case 0x1e8560u: goto label_1e8560;
        case 0x1e8564u: goto label_1e8564;
        case 0x1e8568u: goto label_1e8568;
        case 0x1e856cu: goto label_1e856c;
        case 0x1e8570u: goto label_1e8570;
        case 0x1e8574u: goto label_1e8574;
        case 0x1e8578u: goto label_1e8578;
        case 0x1e857cu: goto label_1e857c;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e8584u: goto label_1e8584;
        case 0x1e8588u: goto label_1e8588;
        case 0x1e858cu: goto label_1e858c;
        case 0x1e8590u: goto label_1e8590;
        case 0x1e8594u: goto label_1e8594;
        case 0x1e8598u: goto label_1e8598;
        case 0x1e859cu: goto label_1e859c;
        case 0x1e85a0u: goto label_1e85a0;
        case 0x1e85a4u: goto label_1e85a4;
        case 0x1e85a8u: goto label_1e85a8;
        case 0x1e85acu: goto label_1e85ac;
        case 0x1e85b0u: goto label_1e85b0;
        case 0x1e85b4u: goto label_1e85b4;
        case 0x1e85b8u: goto label_1e85b8;
        case 0x1e85bcu: goto label_1e85bc;
        case 0x1e85c0u: goto label_1e85c0;
        case 0x1e85c4u: goto label_1e85c4;
        case 0x1e85c8u: goto label_1e85c8;
        case 0x1e85ccu: goto label_1e85cc;
        case 0x1e85d0u: goto label_1e85d0;
        case 0x1e85d4u: goto label_1e85d4;
        case 0x1e85d8u: goto label_1e85d8;
        case 0x1e85dcu: goto label_1e85dc;
        case 0x1e85e0u: goto label_1e85e0;
        case 0x1e85e4u: goto label_1e85e4;
        case 0x1e85e8u: goto label_1e85e8;
        case 0x1e85ecu: goto label_1e85ec;
        case 0x1e85f0u: goto label_1e85f0;
        case 0x1e85f4u: goto label_1e85f4;
        case 0x1e85f8u: goto label_1e85f8;
        case 0x1e85fcu: goto label_1e85fc;
        default: break;
    }

    ctx->pc = 0x1e81f0u;

label_1e81f0:
    // 0x1e81f0: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x1e81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_1e81f4:
    // 0x1e81f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e81f8:
    // 0x1e81f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e81fc:
    // 0x1e81fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e8200:
    // 0x1e8200: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e8204:
    // 0x1e8204: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8208:
    // 0x1e8208: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1e8208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e820c:
    // 0x1e820c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8210:
    // 0x1e8210: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1e8210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8214:
    // 0x1e8214: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8218:
    // 0x1e8218: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e821c:
    // 0x1e821c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e821cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8220:
    // 0x1e8220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8224:
    // 0x1e8224: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e8224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8228:
    // 0x1e8228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e822c:
    // 0x1e822c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e822cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e8230:
    // 0x1e8230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8234:
    // 0x1e8234: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e8234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8238:
    // 0x1e8238: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e823c:
    // 0x1e823c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8240:
    // 0x1e8240: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e8244:
    // 0x1e8244: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e8244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8248:
    // 0x1e8248: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e824c:
    if (ctx->pc == 0x1E824Cu) {
        ctx->pc = 0x1E824Cu;
            // 0x1e824c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8250u;
        goto label_1e8250;
    }
    ctx->pc = 0x1E8248u;
    {
        const bool branch_taken_0x1e8248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8248u;
            // 0x1e824c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8248) {
            ctx->pc = 0x1E8284u;
            goto label_1e8284;
        }
    }
    ctx->pc = 0x1E8250u;
label_1e8250:
    // 0x1e8250: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e8254:
    // 0x1e8254: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e8254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8258:
    // 0x1e8258: 0x2463aa28  addiu       $v1, $v1, -0x55D8
    ctx->pc = 0x1e8258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945320));
label_1e825c:
    // 0x1e825c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e8260:
    // 0x1e8260: 0x2442aa38  addiu       $v0, $v0, -0x55C8
    ctx->pc = 0x1e8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945336));
label_1e8264:
    // 0x1e8264: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e8264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e8268:
    // 0x1e8268: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e8268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e826c:
    // 0x1e826c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e8270:
    // 0x1e8270: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e8270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e8274:
    // 0x1e8274: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e8278:
    // 0x1e8278: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e827c:
    // 0x1e827c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e827cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e8280:
    // 0x1e8280: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e8280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e8284:
    // 0x1e8284: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e8284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e8288:
    // 0x1e8288: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e828c:
    // 0x1e828c: 0xc0a45a0  jal         func_291680
label_1e8290:
    if (ctx->pc == 0x1E8290u) {
        ctx->pc = 0x1E8290u;
            // 0x1e8290: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E8294u;
        goto label_1e8294;
    }
    ctx->pc = 0x1E828Cu;
    SET_GPR_U32(ctx, 31, 0x1E8294u);
    ctx->pc = 0x1E8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E828Cu;
            // 0x1e8290: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8294u; }
        if (ctx->pc != 0x1E8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8294u; }
        if (ctx->pc != 0x1E8294u) { return; }
    }
    ctx->pc = 0x1E8294u;
label_1e8294:
    // 0x1e8294: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e8294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e8298:
    // 0x1e8298: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x1e8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e829c:
    // 0x1e829c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e82a0:
    // 0x1e82a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e82a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e82a4:
    // 0x1e82a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e82a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e82a8:
    // 0x1e82a8: 0x320f809  jalr        $t9
label_1e82ac:
    if (ctx->pc == 0x1E82ACu) {
        ctx->pc = 0x1E82ACu;
            // 0x1e82ac: 0x27a60510  addiu       $a2, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->pc = 0x1E82B0u;
        goto label_1e82b0;
    }
    ctx->pc = 0x1E82A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E82B0u);
        ctx->pc = 0x1E82ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82A8u;
            // 0x1e82ac: 0x27a60510  addiu       $a2, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E82B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E82B0u; }
            if (ctx->pc != 0x1E82B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E82B0u;
label_1e82b0:
    // 0x1e82b0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e82b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e82b4:
    // 0x1e82b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e82b8:
    // 0x1e82b8: 0xc0a4644  jal         func_291910
label_1e82bc:
    if (ctx->pc == 0x1E82BCu) {
        ctx->pc = 0x1E82BCu;
            // 0x1e82bc: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x1E82C0u;
        goto label_1e82c0;
    }
    ctx->pc = 0x1E82B8u;
    SET_GPR_U32(ctx, 31, 0x1E82C0u);
    ctx->pc = 0x1E82BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82B8u;
            // 0x1e82bc: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82C0u; }
        if (ctx->pc != 0x1E82C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82C0u; }
        if (ctx->pc != 0x1E82C0u) { return; }
    }
    ctx->pc = 0x1E82C0u;
label_1e82c0:
    // 0x1e82c0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e82c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e82c4:
    // 0x1e82c4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e82c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e82c8:
    // 0x1e82c8: 0x0  nop
    ctx->pc = 0x1e82c8u;
    // NOP
label_1e82cc:
    // 0x1e82cc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1e82ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e82d0:
    // 0x1e82d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e82d4:
    if (ctx->pc == 0x1E82D4u) {
        ctx->pc = 0x1E82D4u;
            // 0x1e82d4: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1E82D8u;
        goto label_1e82d8;
    }
    ctx->pc = 0x1E82D0u;
    {
        const bool branch_taken_0x1e82d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E82D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82D0u;
            // 0x1e82d4: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82d0) {
            ctx->pc = 0x1E82E0u;
            goto label_1e82e0;
        }
    }
    ctx->pc = 0x1E82D8u;
label_1e82d8:
    // 0x1e82d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e82dc:
    if (ctx->pc == 0x1E82DCu) {
        ctx->pc = 0x1E82DCu;
            // 0x1e82dc: 0xc7a200a4  lwc1        $f2, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1E82E0u;
        goto label_1e82e0;
    }
    ctx->pc = 0x1E82D8u;
    {
        const bool branch_taken_0x1e82d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82D8u;
            // 0x1e82dc: 0xc7a200a4  lwc1        $f2, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82d8) {
            ctx->pc = 0x1E82E8u;
            goto label_1e82e8;
        }
    }
    ctx->pc = 0x1E82E0u;
label_1e82e0:
    // 0x1e82e0: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x1e82e0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_1e82e4:
    // 0x1e82e4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1e82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e82e8:
    // 0x1e82e8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1e82e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e82ec:
    // 0x1e82ec: 0x0  nop
    ctx->pc = 0x1e82ecu;
    // NOP
label_1e82f0:
    // 0x1e82f0: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1e82f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e82f4:
    // 0x1e82f4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e82f8:
    if (ctx->pc == 0x1E82F8u) {
        ctx->pc = 0x1E82F8u;
            // 0x1e82f8: 0x46001186  mov.s       $f6, $f2 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1E82FCu;
        goto label_1e82fc;
    }
    ctx->pc = 0x1E82F4u;
    {
        const bool branch_taken_0x1e82f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e82f4) {
            ctx->pc = 0x1E82F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82F4u;
            // 0x1e82f8: 0x46001186  mov.s       $f6, $f2 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E82FCu;
            goto label_1e82fc;
        }
    }
    ctx->pc = 0x1E82FCu;
label_1e82fc:
    // 0x1e82fc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1e82fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8300:
    // 0x1e8300: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e8300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e8304:
    // 0x1e8304: 0x0  nop
    ctx->pc = 0x1e8304u;
    // NOP
label_1e8308:
    // 0x1e8308: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1e8308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e830c:
    // 0x1e830c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e8310:
    if (ctx->pc == 0x1E8310u) {
        ctx->pc = 0x1E8310u;
            // 0x1e8310: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1E8314u;
        goto label_1e8314;
    }
    ctx->pc = 0x1E830Cu;
    {
        const bool branch_taken_0x1e830c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e830c) {
            ctx->pc = 0x1E8310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E830Cu;
            // 0x1e8310: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8314u;
            goto label_1e8314;
        }
    }
    ctx->pc = 0x1E8314u;
label_1e8314:
    // 0x1e8314: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8318:
    // 0x1e8318: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e831c:
    // 0x1e831c: 0x0  nop
    ctx->pc = 0x1e831cu;
    // NOP
label_1e8320:
    // 0x1e8320: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e8320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8324:
    // 0x1e8324: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e8328:
    if (ctx->pc == 0x1E8328u) {
        ctx->pc = 0x1E8328u;
            // 0x1e8328: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E832Cu;
        goto label_1e832c;
    }
    ctx->pc = 0x1E8324u;
    {
        const bool branch_taken_0x1e8324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8324) {
            ctx->pc = 0x1E8328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8324u;
            // 0x1e8328: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E832Cu;
            goto label_1e832c;
        }
    }
    ctx->pc = 0x1E832Cu;
label_1e832c:
    // 0x1e832c: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1e832cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e8330:
    // 0x1e8330: 0x0  nop
    ctx->pc = 0x1e8330u;
    // NOP
label_1e8334:
    // 0x1e8334: 0x46035836  c.le.s      $f11, $f3
    ctx->pc = 0x1e8334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8338:
    // 0x1e8338: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e833c:
    if (ctx->pc == 0x1E833Cu) {
        ctx->pc = 0x1E833Cu;
            // 0x1e833c: 0x46001ac6  mov.s       $f11, $f3 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x1E8340u;
        goto label_1e8340;
    }
    ctx->pc = 0x1E8338u;
    {
        const bool branch_taken_0x1e8338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8338) {
            ctx->pc = 0x1E833Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8338u;
            // 0x1e833c: 0x46001ac6  mov.s       $f11, $f3 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8340u;
            goto label_1e8340;
        }
    }
    ctx->pc = 0x1E8340u;
label_1e8340:
    // 0x1e8340: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1e8340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e8344:
    // 0x1e8344: 0x0  nop
    ctx->pc = 0x1e8344u;
    // NOP
label_1e8348:
    // 0x1e8348: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x1e8348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e834c:
    // 0x1e834c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e8350:
    if (ctx->pc == 0x1E8350u) {
        ctx->pc = 0x1E8350u;
            // 0x1e8350: 0x46001286  mov.s       $f10, $f2 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1E8354u;
        goto label_1e8354;
    }
    ctx->pc = 0x1E834Cu;
    {
        const bool branch_taken_0x1e834c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e834c) {
            ctx->pc = 0x1E8350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E834Cu;
            // 0x1e8350: 0x46001286  mov.s       $f10, $f2 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8354u;
            goto label_1e8354;
        }
    }
    ctx->pc = 0x1E8354u;
label_1e8354:
    // 0x1e8354: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1e8354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e8358:
    // 0x1e8358: 0x0  nop
    ctx->pc = 0x1e8358u;
    // NOP
label_1e835c:
    // 0x1e835c: 0x46014836  c.le.s      $f9, $f1
    ctx->pc = 0x1e835cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8360:
    // 0x1e8360: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e8364:
    if (ctx->pc == 0x1E8364u) {
        ctx->pc = 0x1E8364u;
            // 0x1e8364: 0x46000a46  mov.s       $f9, $f1 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1E8368u;
        goto label_1e8368;
    }
    ctx->pc = 0x1E8360u;
    {
        const bool branch_taken_0x1e8360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8360) {
            ctx->pc = 0x1E8364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8360u;
            // 0x1e8364: 0x46000a46  mov.s       $f9, $f1 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8368u;
            goto label_1e8368;
        }
    }
    ctx->pc = 0x1E8368u;
label_1e8368:
    // 0x1e8368: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e8368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e836c:
    // 0x1e836c: 0x0  nop
    ctx->pc = 0x1e836cu;
    // NOP
label_1e8370:
    // 0x1e8370: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e8370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8374:
    // 0x1e8374: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e8378:
    if (ctx->pc == 0x1E8378u) {
        ctx->pc = 0x1E8378u;
            // 0x1e8378: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E837Cu;
        goto label_1e837c;
    }
    ctx->pc = 0x1E8374u;
    {
        const bool branch_taken_0x1e8374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8374) {
            ctx->pc = 0x1E8378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8374u;
            // 0x1e8378: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E837Cu;
            goto label_1e837c;
        }
    }
    ctx->pc = 0x1E837Cu;
label_1e837c:
    // 0x1e837c: 0xc7a10510  lwc1        $f1, 0x510($sp)
    ctx->pc = 0x1e837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8380:
    // 0x1e8380: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e8384:
    // 0x1e8384: 0xc7a00514  lwc1        $f0, 0x514($sp)
    ctx->pc = 0x1e8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8388:
    // 0x1e8388: 0x27a3030c  addiu       $v1, $sp, 0x30C
    ctx->pc = 0x1e8388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
label_1e838c:
    // 0x1e838c: 0xc7a50518  lwc1        $f5, 0x518($sp)
    ctx->pc = 0x1e838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e8390:
    // 0x1e8390: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1e8390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1e8394:
    // 0x1e8394: 0x460409c0  add.s       $f7, $f1, $f4
    ctx->pc = 0x1e8394u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e8398:
    // 0x1e8398: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_1e839c:
    // 0x1e839c: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x1e839cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1e83a0:
    // 0x1e83a0: 0x46060180  add.s       $f6, $f0, $f6
    ctx->pc = 0x1e83a0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1e83a4:
    // 0x1e83a4: 0xc7a4051c  lwc1        $f4, 0x51C($sp)
    ctx->pc = 0x1e83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e83a8:
    // 0x1e83a8: 0xc7a30520  lwc1        $f3, 0x520($sp)
    ctx->pc = 0x1e83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e83ac:
    // 0x1e83ac: 0xc7a20524  lwc1        $f2, 0x524($sp)
    ctx->pc = 0x1e83acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e83b0:
    // 0x1e83b0: 0xc7a10528  lwc1        $f1, 0x528($sp)
    ctx->pc = 0x1e83b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e83b4:
    // 0x1e83b4: 0xc7a0052c  lwc1        $f0, 0x52C($sp)
    ctx->pc = 0x1e83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e83b8:
    // 0x1e83b8: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x1e83b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
label_1e83bc:
    // 0x1e83bc: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x1e83bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
label_1e83c0:
    // 0x1e83c0: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x1e83c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
label_1e83c4:
    // 0x1e83c4: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x1e83c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
label_1e83c8:
    // 0x1e83c8: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1e83c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_1e83cc:
    // 0x1e83cc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1e83ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1e83d0:
    // 0x1e83d0: 0xe7a70510  swc1        $f7, 0x510($sp)
    ctx->pc = 0x1e83d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_1e83d4:
    // 0x1e83d4: 0xe7a60514  swc1        $f6, 0x514($sp)
    ctx->pc = 0x1e83d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
label_1e83d8:
    // 0x1e83d8: 0xe7a50518  swc1        $f5, 0x518($sp)
    ctx->pc = 0x1e83d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
label_1e83dc:
    // 0x1e83dc: 0xe7a4051c  swc1        $f4, 0x51C($sp)
    ctx->pc = 0x1e83dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1308), bits); }
label_1e83e0:
    // 0x1e83e0: 0xe7a30520  swc1        $f3, 0x520($sp)
    ctx->pc = 0x1e83e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_1e83e4:
    // 0x1e83e4: 0xe7a20524  swc1        $f2, 0x524($sp)
    ctx->pc = 0x1e83e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1316), bits); }
label_1e83e8:
    // 0x1e83e8: 0xe7a10528  swc1        $f1, 0x528($sp)
    ctx->pc = 0x1e83e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_1e83ec:
    // 0x1e83ec: 0xe7a0052c  swc1        $f0, 0x52C($sp)
    ctx->pc = 0x1e83ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1324), bits); }
label_1e83f0:
    // 0x1e83f0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e83f4:
    // 0x1e83f4: 0xafa30300  sw          $v1, 0x300($sp)
    ctx->pc = 0x1e83f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 3));
label_1e83f8:
    // 0x1e83f8: 0xafa20308  sw          $v0, 0x308($sp)
    ctx->pc = 0x1e83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 2));
label_1e83fc:
    // 0x1e83fc: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x1e83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
label_1e8400:
    // 0x1e8400: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e8400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8404:
    // 0x1e8404: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1e8404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1e8408:
    // 0x1e8408: 0x320f809  jalr        $t9
label_1e840c:
    if (ctx->pc == 0x1E840Cu) {
        ctx->pc = 0x1E840Cu;
            // 0x1e840c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8410u;
        goto label_1e8410;
    }
    ctx->pc = 0x1E8408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8410u);
        ctx->pc = 0x1E840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8408u;
            // 0x1e840c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8410u; }
            if (ctx->pc != 0x1E8410u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8410u;
label_1e8410:
    // 0x1e8410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8414:
    // 0x1e8414: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e8418:
    // 0x1e8418: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e8418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e841c:
    // 0x1e841c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8420:
    // 0x1e8420: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e8420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e8424:
    // 0x1e8424: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e8424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8428:
    // 0x1e8428: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e842c:
    if (ctx->pc == 0x1E842Cu) {
        ctx->pc = 0x1E842Cu;
            // 0x1e842c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E8430u;
        goto label_1e8430;
    }
    ctx->pc = 0x1E8428u;
    {
        const bool branch_taken_0x1e8428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8428u;
            // 0x1e842c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8428) {
            ctx->pc = 0x1E8458u;
            goto label_1e8458;
        }
    }
    ctx->pc = 0x1E8430u;
label_1e8430:
    // 0x1e8430: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e8430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e8434:
    // 0x1e8434: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e8434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e8438:
    // 0x1e8438: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
label_1e843c:
    // 0x1e843c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e8440:
    // 0x1e8440: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e8444:
    // 0x1e8444: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e8444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e8448:
    // 0x1e8448: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e844c:
    // 0x1e844c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e8450:
    // 0x1e8450: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e8450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e8454:
    // 0x1e8454: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e8454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e8458:
    // 0x1e8458: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e8458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e845c:
    // 0x1e845c: 0x8fa20304  lw          $v0, 0x304($sp)
    ctx->pc = 0x1e845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
label_1e8460:
    // 0x1e8460: 0x8fb10300  lw          $s1, 0x300($sp)
    ctx->pc = 0x1e8460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_1e8464:
    // 0x1e8464: 0x8c7e000c  lw          $fp, 0xC($v1)
    ctx->pc = 0x1e8464u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e8468:
    // 0x1e8468: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e846c:
    // 0x1e846c: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x1e846cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e8470:
    // 0x1e8470: 0xafb302fc  sw          $s3, 0x2FC($sp)
    ctx->pc = 0x1e8470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 19));
label_1e8474:
    // 0x1e8474: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e8478:
    // 0x1e8478: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x1e8478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
label_1e847c:
    // 0x1e847c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e847cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8480:
    // 0x1e8480: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e8480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e8484:
    // 0x1e8484: 0x320f809  jalr        $t9
label_1e8488:
    if (ctx->pc == 0x1E8488u) {
        ctx->pc = 0x1E8488u;
            // 0x1e8488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E848Cu;
        goto label_1e848c;
    }
    ctx->pc = 0x1E8484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E848Cu);
        ctx->pc = 0x1E8488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8484u;
            // 0x1e8488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E848Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E848Cu; }
            if (ctx->pc != 0x1E848Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E848Cu;
label_1e848c:
    // 0x1e848c: 0x1235002e  beq         $s1, $s5, . + 4 + (0x2E << 2)
label_1e8490:
    if (ctx->pc == 0x1E8490u) {
        ctx->pc = 0x1E8490u;
            // 0x1e8490: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8494u;
        goto label_1e8494;
    }
    ctx->pc = 0x1E848Cu;
    {
        const bool branch_taken_0x1e848c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x1E8490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E848Cu;
            // 0x1e8490: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e848c) {
            ctx->pc = 0x1E8548u;
            goto label_1e8548;
        }
    }
    ctx->pc = 0x1E8494u;
label_1e8494:
    // 0x1e8494: 0x1ef140  sll         $fp, $fp, 5
    ctx->pc = 0x1e8494u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
label_1e8498:
    // 0x1e8498: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e8498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e849c:
    // 0x1e849c: 0x27a4053c  addiu       $a0, $sp, 0x53C
    ctx->pc = 0x1e849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
label_1e84a0:
    // 0x1e84a0: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e84a4:
    // 0x1e84a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e84a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e84a8:
    // 0x1e84a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e84a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e84ac:
    // 0x1e84ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1e84acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e84b0:
    // 0x1e84b0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e84b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e84b4:
    // 0x1e84b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e84b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e84b8:
    // 0x1e84b8: 0x320f809  jalr        $t9
label_1e84bc:
    if (ctx->pc == 0x1E84BCu) {
        ctx->pc = 0x1E84BCu;
            // 0x1e84bc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E84C0u;
        goto label_1e84c0;
    }
    ctx->pc = 0x1E84B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E84C0u);
        ctx->pc = 0x1E84BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84B8u;
            // 0x1e84bc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E84C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E84C0u; }
            if (ctx->pc != 0x1E84C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E84C0u;
label_1e84c0:
    // 0x1e84c0: 0x27a3053c  addiu       $v1, $sp, 0x53C
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
label_1e84c4:
    // 0x1e84c4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e84c8:
    // 0x1e84c8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1e84cc:
    if (ctx->pc == 0x1E84CCu) {
        ctx->pc = 0x1E84D0u;
        goto label_1e84d0;
    }
    ctx->pc = 0x1E84C8u;
    {
        const bool branch_taken_0x1e84c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84c8) {
            ctx->pc = 0x1E8538u;
            goto label_1e8538;
        }
    }
    ctx->pc = 0x1E84D0u;
label_1e84d0:
    // 0x1e84d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e84d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e84d4:
    // 0x1e84d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e84d8:
    // 0x1e84d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e84dc:
    // 0x1e84dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e84dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e84e0:
    // 0x1e84e0: 0x320f809  jalr        $t9
label_1e84e4:
    if (ctx->pc == 0x1E84E4u) {
        ctx->pc = 0x1E84E4u;
            // 0x1e84e4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1E84E8u;
        goto label_1e84e8;
    }
    ctx->pc = 0x1E84E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E84E8u);
        ctx->pc = 0x1E84E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84E0u;
            // 0x1e84e4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E84E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E84E8u; }
            if (ctx->pc != 0x1E84E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E84E8u;
label_1e84e8:
    // 0x1e84e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e84ec:
    // 0x1e84ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e84ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e84f0:
    // 0x1e84f0: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_1e84f4:
    // 0x1e84f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e84f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e84f8:
    // 0x1e84f8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e84f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e84fc:
    // 0x1e84fc: 0xafa302f4  sw          $v1, 0x2F4($sp)
    ctx->pc = 0x1e84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 3));
label_1e8500:
    // 0x1e8500: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x1e8500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
label_1e8504:
    // 0x1e8504: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e8504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e8508:
    // 0x1e8508: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e850c:
    // 0x1e850c: 0x3c91021  addu        $v0, $fp, $t1
    ctx->pc = 0x1e850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_1e8510:
    // 0x1e8510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8514:
    // 0x1e8514: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1e8514u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1e8518:
    // 0x1e8518: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e8518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e851c:
    // 0x1e851c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8520:
    // 0x1e8520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8524:
    // 0x1e8524: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1e8528:
    // 0x1e8528: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_1e852c:
    // 0x1e852c: 0x40f809  jalr        $v0
label_1e8530:
    if (ctx->pc == 0x1E8530u) {
        ctx->pc = 0x1E8530u;
            // 0x1e8530: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8534u;
        goto label_1e8534;
    }
    ctx->pc = 0x1E852Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8534u);
        ctx->pc = 0x1E8530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E852Cu;
            // 0x1e8530: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8534u; }
            if (ctx->pc != 0x1E8534u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8534u;
label_1e8534:
    // 0x1e8534: 0x0  nop
    ctx->pc = 0x1e8534u;
    // NOP
label_1e8538:
    // 0x1e8538: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e8538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e853c:
    // 0x1e853c: 0x5635ffd7  bnel        $s1, $s5, . + 4 + (-0x29 << 2)
label_1e8540:
    if (ctx->pc == 0x1E8540u) {
        ctx->pc = 0x1E8540u;
            // 0x1e8540: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x1E8544u;
        goto label_1e8544;
    }
    ctx->pc = 0x1E853Cu;
    {
        const bool branch_taken_0x1e853c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x1e853c) {
            ctx->pc = 0x1E8540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E853Cu;
            // 0x1e8540: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E849Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e849c;
        }
    }
    ctx->pc = 0x1E8544u;
label_1e8544:
    // 0x1e8544: 0x0  nop
    ctx->pc = 0x1e8544u;
    // NOP
label_1e8548:
    // 0x1e8548: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e854c:
    // 0x1e854c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e8550:
    // 0x1e8550: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1e8550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1e8554:
    // 0x1e8554: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e8558:
    // 0x1e8558: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e855c:
    // 0x1e855c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e855cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8560:
    // 0x1e8560: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e8564:
    if (ctx->pc == 0x1E8564u) {
        ctx->pc = 0x1E8564u;
            // 0x1e8564: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8568u;
        goto label_1e8568;
    }
    ctx->pc = 0x1E8560u;
    {
        const bool branch_taken_0x1e8560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8560u;
            // 0x1e8564: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8560) {
            ctx->pc = 0x1E8590u;
            goto label_1e8590;
        }
    }
    ctx->pc = 0x1E8568u;
label_1e8568:
    // 0x1e8568: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e856c:
    // 0x1e856c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8570:
    // 0x1e8570: 0x2463aa58  addiu       $v1, $v1, -0x55A8
    ctx->pc = 0x1e8570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945368));
label_1e8574:
    // 0x1e8574: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e8574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e8578:
    // 0x1e8578: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8578u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e857c:
    // 0x1e857c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e857cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e8580:
    // 0x1e8580: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8580u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e8584:
    // 0x1e8584: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e8584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e8588:
    // 0x1e8588: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e8588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e858c:
    // 0x1e858c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e858cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e8590:
    // 0x1e8590: 0x8fa40308  lw          $a0, 0x308($sp)
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_1e8594:
    // 0x1e8594: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1e8598:
    // 0x1e8598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e8598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e859c:
    // 0x1e859c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_1e85a0:
    if (ctx->pc == 0x1E85A0u) {
        ctx->pc = 0x1E85A0u;
            // 0x1e85a0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x1E85A4u;
        goto label_1e85a4;
    }
    ctx->pc = 0x1E859Cu;
    {
        const bool branch_taken_0x1e859c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e859c) {
            ctx->pc = 0x1E85A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E859Cu;
            // 0x1e85a0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E85CCu;
            goto label_1e85cc;
        }
    }
    ctx->pc = 0x1E85A4u;
label_1e85a4:
    // 0x1e85a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e85a8:
    // 0x1e85a8: 0x8fa30308  lw          $v1, 0x308($sp)
    ctx->pc = 0x1e85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_1e85ac:
    // 0x1e85ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e85acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e85b0:
    // 0x1e85b0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e85b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e85b4:
    // 0x1e85b4: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x1e85b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_1e85b8:
    // 0x1e85b8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1e85bc:
    // 0x1e85bc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e85bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e85c0:
    // 0x1e85c0: 0xc0a7ab4  jal         func_29EAD0
label_1e85c4:
    if (ctx->pc == 0x1E85C4u) {
        ctx->pc = 0x1E85C4u;
            // 0x1e85c4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E85C8u;
        goto label_1e85c8;
    }
    ctx->pc = 0x1E85C0u;
    SET_GPR_U32(ctx, 31, 0x1E85C8u);
    ctx->pc = 0x1E85C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85C0u;
            // 0x1e85c4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85C8u; }
        if (ctx->pc != 0x1E85C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85C8u; }
        if (ctx->pc != 0x1E85C8u) { return; }
    }
    ctx->pc = 0x1E85C8u;
label_1e85c8:
    // 0x1e85c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e85c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e85cc:
    // 0x1e85cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e85ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e85d0:
    // 0x1e85d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e85d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e85d4:
    // 0x1e85d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e85d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e85d8:
    // 0x1e85d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e85d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e85dc:
    // 0x1e85dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e85dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e85e0:
    // 0x1e85e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e85e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e85e4:
    // 0x1e85e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e85e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e85e8:
    // 0x1e85e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e85e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e85ec:
    // 0x1e85ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e85ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e85f0:
    // 0x1e85f0: 0x3e00008  jr          $ra
label_1e85f4:
    if (ctx->pc == 0x1E85F4u) {
        ctx->pc = 0x1E85F4u;
            // 0x1e85f4: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->pc = 0x1E85F8u;
        goto label_1e85f8;
    }
    ctx->pc = 0x1E85F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E85F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85F0u;
            // 0x1e85f4: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E85F8u;
label_1e85f8:
    // 0x1e85f8: 0x0  nop
    ctx->pc = 0x1e85f8u;
    // NOP
label_1e85fc:
    // 0x1e85fc: 0x0  nop
    ctx->pc = 0x1e85fcu;
    // NOP
}
