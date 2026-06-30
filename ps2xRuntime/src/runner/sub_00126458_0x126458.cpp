#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126458
// Address: 0x126458 - 0x127638
void sub_00126458_0x126458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126458_0x126458");
#endif

    switch (ctx->pc) {
        case 0x1264ccu: goto label_1264cc;
        case 0x126550u: goto label_126550;
        case 0x126570u: goto label_126570;
        case 0x126574u: goto label_126574;
        case 0x1265b8u: goto label_1265b8;
        case 0x1265f8u: goto label_1265f8;
        case 0x126660u: goto label_126660;
        case 0x126670u: goto label_126670;
        case 0x126680u: goto label_126680;
        case 0x126690u: goto label_126690;
        case 0x12669cu: goto label_12669c;
        case 0x1266acu: goto label_1266ac;
        case 0x1266b8u: goto label_1266b8;
        case 0x1266c4u: goto label_1266c4;
        case 0x1266d4u: goto label_1266d4;
        case 0x1266e4u: goto label_1266e4;
        case 0x1266f0u: goto label_1266f0;
        case 0x126734u: goto label_126734;
        case 0x126760u: goto label_126760;
        case 0x12677cu: goto label_12677c;
        case 0x1267ecu: goto label_1267ec;
        case 0x126800u: goto label_126800;
        case 0x12682cu: goto label_12682c;
        case 0x1268a0u: goto label_1268a0;
        case 0x1268b4u: goto label_1268b4;
        case 0x1268ccu: goto label_1268cc;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268ecu: goto label_1268ec;
        case 0x1268f0u: goto label_1268f0;
        case 0x126904u: goto label_126904;
        case 0x12692cu: goto label_12692c;
        case 0x126948u: goto label_126948;
        case 0x126954u: goto label_126954;
        case 0x126964u: goto label_126964;
        case 0x12699cu: goto label_12699c;
        case 0x1269b0u: goto label_1269b0;
        case 0x1269c0u: goto label_1269c0;
        case 0x1269ccu: goto label_1269cc;
        case 0x1269d4u: goto label_1269d4;
        case 0x126a48u: goto label_126a48;
        case 0x126a54u: goto label_126a54;
        case 0x126a60u: goto label_126a60;
        case 0x126a78u: goto label_126a78;
        case 0x126a84u: goto label_126a84;
        case 0x126aacu: goto label_126aac;
        case 0x126ab8u: goto label_126ab8;
        case 0x126abcu: goto label_126abc;
        case 0x126ac4u: goto label_126ac4;
        case 0x126aecu: goto label_126aec;
        case 0x126af0u: goto label_126af0;
        case 0x126b00u: goto label_126b00;
        case 0x126b08u: goto label_126b08;
        case 0x126b10u: goto label_126b10;
        case 0x126b1cu: goto label_126b1c;
        case 0x126b28u: goto label_126b28;
        case 0x126b34u: goto label_126b34;
        case 0x126b54u: goto label_126b54;
        case 0x126b64u: goto label_126b64;
        case 0x126b74u: goto label_126b74;
        case 0x126b84u: goto label_126b84;
        case 0x126ba8u: goto label_126ba8;
        case 0x126bc8u: goto label_126bc8;
        case 0x126c0cu: goto label_126c0c;
        case 0x126c1cu: goto label_126c1c;
        case 0x126c6cu: goto label_126c6c;
        case 0x126c80u: goto label_126c80;
        case 0x126cecu: goto label_126cec;
        case 0x126d00u: goto label_126d00;
        case 0x126d14u: goto label_126d14;
        case 0x126d28u: goto label_126d28;
        case 0x126d30u: goto label_126d30;
        case 0x126d40u: goto label_126d40;
        case 0x126d5cu: goto label_126d5c;
        case 0x126dc8u: goto label_126dc8;
        case 0x126dd4u: goto label_126dd4;
        case 0x126e08u: goto label_126e08;
        case 0x126e0cu: goto label_126e0c;
        case 0x126e24u: goto label_126e24;
        case 0x126e40u: goto label_126e40;
        case 0x126e58u: goto label_126e58;
        case 0x126e74u: goto label_126e74;
        case 0x126ea0u: goto label_126ea0;
        case 0x126ee4u: goto label_126ee4;
        case 0x126ef4u: goto label_126ef4;
        case 0x126f24u: goto label_126f24;
        case 0x126f40u: goto label_126f40;
        case 0x126f60u: goto label_126f60;
        case 0x126f70u: goto label_126f70;
        case 0x126f88u: goto label_126f88;
        case 0x126f94u: goto label_126f94;
        case 0x126fa4u: goto label_126fa4;
        case 0x126fb8u: goto label_126fb8;
        case 0x126fd0u: goto label_126fd0;
        case 0x126fd4u: goto label_126fd4;
        case 0x126fe0u: goto label_126fe0;
        case 0x127004u: goto label_127004;
        case 0x127008u: goto label_127008;
        case 0x127010u: goto label_127010;
        case 0x127014u: goto label_127014;
        case 0x127020u: goto label_127020;
        case 0x127040u: goto label_127040;
        case 0x1270bcu: goto label_1270bc;
        case 0x1270ccu: goto label_1270cc;
        case 0x12713cu: goto label_12713c;
        case 0x127160u: goto label_127160;
        case 0x127168u: goto label_127168;
        case 0x127184u: goto label_127184;
        case 0x12719cu: goto label_12719c;
        case 0x1271a4u: goto label_1271a4;
        case 0x1271b4u: goto label_1271b4;
        case 0x1271c4u: goto label_1271c4;
        case 0x1271e8u: goto label_1271e8;
        case 0x127218u: goto label_127218;
        case 0x127224u: goto label_127224;
        case 0x127254u: goto label_127254;
        case 0x12731cu: goto label_12731c;
        case 0x127328u: goto label_127328;
        case 0x127330u: goto label_127330;
        case 0x127338u: goto label_127338;
        case 0x127344u: goto label_127344;
        case 0x127350u: goto label_127350;
        case 0x127368u: goto label_127368;
        case 0x127380u: goto label_127380;
        case 0x12738cu: goto label_12738c;
        case 0x1273b0u: goto label_1273b0;
        case 0x1273c4u: goto label_1273c4;
        case 0x1273ecu: goto label_1273ec;
        case 0x1273f0u: goto label_1273f0;
        case 0x1273f8u: goto label_1273f8;
        case 0x127404u: goto label_127404;
        case 0x127410u: goto label_127410;
        case 0x12743cu: goto label_12743c;
        case 0x127448u: goto label_127448;
        case 0x127458u: goto label_127458;
        case 0x127464u: goto label_127464;
        case 0x127470u: goto label_127470;
        case 0x1274acu: goto label_1274ac;
        case 0x1274e4u: goto label_1274e4;
        case 0x1274f8u: goto label_1274f8;
        case 0x127510u: goto label_127510;
        case 0x1275dcu: goto label_1275dc;
        case 0x1275e4u: goto label_1275e4;
        case 0x1275fcu: goto label_1275fc;
        default: break;
    }

    ctx->pc = 0x126458u;

    // 0x126458: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12645c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12645cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x126460: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x126460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x126464: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x126464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x126468: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x126468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12646c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x12646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x126470: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x126470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126474: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x126474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x126478: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x126478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12647c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x12647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x126480: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x126480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x126484: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x126484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x126488: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x126488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x12648c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x12648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x126490: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x126490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x126494: 0x8c8d0040  lw          $t5, 0x40($a0)
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x126498: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x126498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x12649c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x12649cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1264a0: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x1264a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x1264a4: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1264A4u;
    {
        const bool branch_taken_0x1264a4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1264A4u;
            // 0x1264a8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264a4) {
            ctx->pc = 0x1264D0u;
            goto label_1264d0;
        }
    }
    ctx->pc = 0x1264ACu;
    // 0x1264ac: 0x8c8f0044  lw          $t7, 0x44($a0)
    ctx->pc = 0x1264acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1264b0: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x1264b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264b4: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x1264b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x1264b8: 0x8c8e0044  lw          $t6, 0x44($a0)
    ctx->pc = 0x1264b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1264bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1264bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1264c0: 0x1cf7804  sllv        $t7, $t7, $t6
    ctx->pc = 0x1264c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
    // 0x1264c4: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x1264C4u;
    SET_GPR_U32(ctx, 31, 0x1264CCu);
    ctx->pc = 0x1264C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1264C4u;
            // 0x1264c8: 0xadaf0008  sw          $t7, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1264CCu; }
        if (ctx->pc != 0x1264CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1264CCu; }
        if (ctx->pc != 0x1264CCu) { return; }
    }
    ctx->pc = 0x1264CCu;
label_1264cc:
    // 0x1264cc: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x1264ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
label_1264d0:
    // 0x1264d0: 0x14703e  dsrl32      $t6, $s4, 0
    ctx->pc = 0x1264d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x1264d4: 0xe683c  dsll32      $t5, $t6, 0
    ctx->pc = 0x1264d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1264d8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1264d8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1264dc: 0x5a3000d  bgezl       $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x1264DCu;
    {
        const bool branch_taken_0x1264dc = (GPR_S32(ctx, 13) >= 0);
        if (branch_taken_0x1264dc) {
            ctx->pc = 0x1264E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1264DCu;
            // 0x1264e0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126514u;
            goto label_126514;
        }
    }
    ctx->pc = 0x1264E4u;
    // 0x1264e4: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x1264e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x1264e8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1264e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1264ec: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1264ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1264f0: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x1264f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x1264f4: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x1264f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x1264f8: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x1264f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1264fc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1264fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126500: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x126500u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x126504: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126504u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x126508: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126508u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12650c: 0x28fa025  or          $s4, $s4, $t7
    ctx->pc = 0x12650cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
    // 0x126510: 0x14703e  dsrl32      $t6, $s4, 0
    ctx->pc = 0x126510u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) >> (32 + 0));
label_126514:
    // 0x126514: 0xe803c  dsll32      $s0, $t6, 0
    ctx->pc = 0x126514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) << (32 + 0));
    // 0x126518: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x126518u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12651c: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12651cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x126520: 0x20e7824  and         $t7, $s0, $t6
    ctx->pc = 0x126520u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x126524: 0x15ee0022  bne         $t7, $t6, . + 4 + (0x22 << 2)
    ctx->pc = 0x126524u;
    {
        const bool branch_taken_0x126524 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x126528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126524u;
            // 0x126528: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126524) {
            ctx->pc = 0x1265B0u;
            goto label_1265b0;
        }
    }
    ctx->pc = 0x12652Cu;
    // 0x12652c: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x12652cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126530: 0x240e270f  addiu       $t6, $zero, 0x270F
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x126534: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x126534u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x126538: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x126538u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12653c: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x12653cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x126540: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x126540u;
    {
        const bool branch_taken_0x126540 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126540u;
            // 0x126544: 0xadae0000  sw          $t6, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126540) {
            ctx->pc = 0x1265A4u;
            goto label_1265a4;
        }
    }
    ctx->pc = 0x126548u;
    // 0x126548: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x126548u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12654c: 0x25f60868  addiu       $s6, $t7, 0x868
    ctx->pc = 0x12654cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 2152));
label_126550:
    // 0x126550: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x126550u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x126554: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x126554u;
    {
        const bool branch_taken_0x126554 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126554u;
            // 0x126558: 0x26ce0008  addiu       $t6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126554) {
            ctx->pc = 0x126570u;
            goto label_126570;
        }
    }
    ctx->pc = 0x12655Cu;
    // 0x12655c: 0x82cf0003  lb          $t7, 0x3($s6)
    ctx->pc = 0x12655cu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x126560: 0x26cd0003  addiu       $t5, $s6, 0x3
    ctx->pc = 0x126560u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x126564: 0x1af700a  movz        $t6, $t5, $t7
    ctx->pc = 0x126564u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
    // 0x126568: 0x8faf0014  lw          $t7, 0x14($sp)
    ctx->pc = 0x126568u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12656c: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x12656cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
label_126570:
    // 0x126570: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x126570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_126574:
    // 0x126574: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x126574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126578: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x126578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12657c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12657cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126580: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x126580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x126584: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x126584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126588: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x126588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12658c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x12658cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x126590: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x126590u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x126594: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x126594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x126598: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x126598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12659c: 0x3e00008  jr          $ra
    ctx->pc = 0x12659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1265A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12659Cu;
            // 0x1265a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1265A4u;
label_1265a4:
    // 0x1265a4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1265a8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1265A8u;
    {
        const bool branch_taken_0x1265a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1265A8u;
            // 0x1265ac: 0x25f60878  addiu       $s6, $t7, 0x878 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 2168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265a8) {
            ctx->pc = 0x126550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126550;
        }
    }
    ctx->pc = 0x1265B0u;
label_1265b0:
    // 0x1265b0: 0xc049760  jal         func_125D80
    ctx->pc = 0x1265B0u;
    SET_GPR_U32(ctx, 31, 0x1265B8u);
    ctx->pc = 0x1265B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1265B0u;
            // 0x1265b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1265B8u; }
        if (ctx->pc != 0x1265B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1265B8u; }
        if (ctx->pc != 0x1265B8u) { return; }
    }
    ctx->pc = 0x1265B8u;
label_1265b8:
    // 0x1265b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1265B8u;
    {
        const bool branch_taken_0x1265b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1265B8u;
            // 0x1265bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265b8) {
            ctx->pc = 0x1265E8u;
            goto label_1265e8;
        }
    }
    ctx->pc = 0x1265C0u;
    // 0x1265c0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1265c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1265c4: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x1265c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1265c8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1265c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1265cc: 0x25d60880  addiu       $s6, $t6, 0x880
    ctx->pc = 0x1265ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 2176));
    // 0x1265d0: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x1265d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x1265d4: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x1265d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1265d8: 0x11c0ffe5  beqz        $t6, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1265D8u;
    {
        const bool branch_taken_0x1265d8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1265D8u;
            // 0x1265dc: 0x26cf0001  addiu       $t7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265d8) {
            ctx->pc = 0x126570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126570;
        }
    }
    ctx->pc = 0x1265E0u;
    // 0x1265e0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1265E0u;
    {
        const bool branch_taken_0x1265e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1265E0u;
            // 0x1265e4: 0xadcf0000  sw          $t7, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265e0) {
            ctx->pc = 0x126570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126570;
        }
    }
    ctx->pc = 0x1265E8u;
label_1265e8:
    // 0x1265e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1265e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1265ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265f0: 0xc04aa92  jal         func_12AA48
    ctx->pc = 0x1265F0u;
    SET_GPR_U32(ctx, 31, 0x1265F8u);
    ctx->pc = 0x1265F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1265F0u;
            // 0x1265f4: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AA48u;
    if (runtime->hasFunction(0x12AA48u)) {
        auto targetFn = runtime->lookupFunction(0x12AA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1265F8u; }
        if (ctx->pc != 0x1265F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AA48_0x12aa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1265F8u; }
        if (ctx->pc != 0x1265F8u) { return; }
    }
    ctx->pc = 0x1265F8u;
label_1265f8:
    // 0x1265f8: 0x107d02  srl         $t7, $s0, 20
    ctx->pc = 0x1265f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1265fc: 0x31f307ff  andi        $s3, $t7, 0x7FF
    ctx->pc = 0x1265fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x126600: 0x126003e8  beqz        $s3, . + 4 + (0x3E8 << 2)
    ctx->pc = 0x126600u;
    {
        const bool branch_taken_0x126600 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126600u;
            // 0x126604: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126600) {
            ctx->pc = 0x1275A4u;
            goto label_1275a4;
        }
    }
    ctx->pc = 0x126608u;
    // 0x126608: 0x3c0e000f  lui         $t6, 0xF
    ctx->pc = 0x126608u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
    // 0x12660c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x12660cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x126610: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x126610u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x126614: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x126614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x126618: 0x14783f  dsra32      $t7, $s4, 0
    ctx->pc = 0x126618u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x12661c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12661cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126620: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126620u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126624: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x126624u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x126628: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126628u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12662c: 0x28db824  and         $s7, $s4, $t5
    ctx->pc = 0x12662cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & GPR_U64(ctx, 13));
    // 0x126630: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x126634: 0x3c0e3ff0  lui         $t6, 0x3FF0
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16368 << 16));
    // 0x126638: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126638u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12663c: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x12663cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x126640: 0x2efb825  or          $s7, $s7, $t7
    ctx->pc = 0x126640u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 15));
    // 0x126644: 0x17783f  dsra32      $t7, $s7, 0
    ctx->pc = 0x126644u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x126648: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x126648u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12664c: 0x2edb824  and         $s7, $s7, $t5
    ctx->pc = 0x12664cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 13));
    // 0x126650: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126650u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126654: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126654u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x126658: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126658u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12665c: 0x2efb825  or          $s7, $s7, $t7
    ctx->pc = 0x12665cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 15));
label_126660:
    // 0x126660: 0x240507ff  addiu       $a1, $zero, 0x7FF
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x126664: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x126664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126668: 0xc049622  jal         func_125888
    ctx->pc = 0x126668u;
    SET_GPR_U32(ctx, 31, 0x126670u);
    ctx->pc = 0x12666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126668u;
            // 0x12666c: 0x52cfc  dsll32      $a1, $a1, 19 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126670u; }
        if (ctx->pc != 0x126670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126670u; }
        if (ctx->pc != 0x126670u) { return; }
    }
    ctx->pc = 0x126670u;
label_126670:
    // 0x126670: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x126670u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x126674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126678: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x126678u;
    SET_GPR_U32(ctx, 31, 0x126680u);
    ctx->pc = 0x12667Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126678u;
            // 0x12667c: 0xdde50888  ld          $a1, 0x888($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 2184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126680u; }
        if (ctx->pc != 0x126680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126680u; }
        if (ctx->pc != 0x126680u) { return; }
    }
    ctx->pc = 0x126680u;
label_126680:
    // 0x126680: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x126684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126688: 0xc04960a  jal         func_125828
    ctx->pc = 0x126688u;
    SET_GPR_U32(ctx, 31, 0x126690u);
    ctx->pc = 0x12668Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126688u;
            // 0x12668c: 0xdde50890  ld          $a1, 0x890($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 2192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126690u; }
        if (ctx->pc != 0x126690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126690u; }
        if (ctx->pc != 0x126690u) { return; }
    }
    ctx->pc = 0x126690u;
label_126690:
    // 0x126690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126694: 0xc049776  jal         func_125DD8
    ctx->pc = 0x126694u;
    SET_GPR_U32(ctx, 31, 0x12669Cu);
    ctx->pc = 0x126698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126694u;
            // 0x126698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12669Cu; }
        if (ctx->pc != 0x12669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12669Cu; }
        if (ctx->pc != 0x12669Cu) { return; }
    }
    ctx->pc = 0x12669Cu;
label_12669c:
    // 0x12669c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12669cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1266a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1266a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266a4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1266A4u;
    SET_GPR_U32(ctx, 31, 0x1266ACu);
    ctx->pc = 0x1266A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1266A4u;
            // 0x1266a8: 0xdde50898  ld          $a1, 0x898($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 2200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266ACu; }
        if (ctx->pc != 0x1266ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266ACu; }
        if (ctx->pc != 0x1266ACu) { return; }
    }
    ctx->pc = 0x1266ACu;
label_1266ac:
    // 0x1266ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1266acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266b0: 0xc04960a  jal         func_125828
    ctx->pc = 0x1266B0u;
    SET_GPR_U32(ctx, 31, 0x1266B8u);
    ctx->pc = 0x1266B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1266B0u;
            // 0x1266b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266B8u; }
        if (ctx->pc != 0x1266B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266B8u; }
        if (ctx->pc != 0x1266B8u) { return; }
    }
    ctx->pc = 0x1266B8u;
label_1266b8:
    // 0x1266b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1266b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266bc: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x1266BCu;
    SET_GPR_U32(ctx, 31, 0x1266C4u);
    ctx->pc = 0x1266C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1266BCu;
            // 0x1266c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266C4u; }
        if (ctx->pc != 0x1266C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266C4u; }
        if (ctx->pc != 0x1266C4u) { return; }
    }
    ctx->pc = 0x1266C4u;
label_1266c4:
    // 0x1266c4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1266c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1266c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1266c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266cc: 0xc049760  jal         func_125D80
    ctx->pc = 0x1266CCu;
    SET_GPR_U32(ctx, 31, 0x1266D4u);
    ctx->pc = 0x1266D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1266CCu;
            // 0x1266d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266D4u; }
        if (ctx->pc != 0x1266D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266D4u; }
        if (ctx->pc != 0x1266D4u) { return; }
    }
    ctx->pc = 0x1266D4u;
label_1266d4:
    // 0x1266d4: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1266D4u;
    {
        const bool branch_taken_0x1266d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1266D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1266D4u;
            // 0x1266d8: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266d4) {
            ctx->pc = 0x126704u;
            goto label_126704;
        }
    }
    ctx->pc = 0x1266DCu;
    // 0x1266dc: 0xc049776  jal         func_125DD8
    ctx->pc = 0x1266DCu;
    SET_GPR_U32(ctx, 31, 0x1266E4u);
    ctx->pc = 0x1266E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1266DCu;
            // 0x1266e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266E4u; }
        if (ctx->pc != 0x1266E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266E4u; }
        if (ctx->pc != 0x1266E4u) { return; }
    }
    ctx->pc = 0x1266E4u;
label_1266e4:
    // 0x1266e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1266e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266e8: 0xc049760  jal         func_125D80
    ctx->pc = 0x1266E8u;
    SET_GPR_U32(ctx, 31, 0x1266F0u);
    ctx->pc = 0x1266ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1266E8u;
            // 0x1266ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266F0u; }
        if (ctx->pc != 0x1266F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1266F0u; }
        if (ctx->pc != 0x1266F0u) { return; }
    }
    ctx->pc = 0x1266F0u;
label_1266f0:
    // 0x1266f0: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x1266f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1266f4: 0x25afffff  addiu       $t7, $t5, -0x1
    ctx->pc = 0x1266f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1266f8: 0x1e2680b  movn        $t5, $t7, $v0
    ctx->pc = 0x1266f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x1266fc: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x1266fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x126700: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x126700u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126704:
    // 0x126704: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x126704u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126708: 0x2daf0017  sltiu       $t7, $t5, 0x17
    ctx->pc = 0x126708u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x12670c: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12670Cu;
    {
        const bool branch_taken_0x12670c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12670Cu;
            // 0x126710: 0xafae0034  sw          $t6, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12670c) {
            ctx->pc = 0x126748u;
            goto label_126748;
        }
    }
    ctx->pc = 0x126714u;
    // 0x126714: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x126714u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x126718: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x126718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x12671c: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x12671cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x126720: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x126720u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x126724: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x126724u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x126728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12672c: 0xc049760  jal         func_125D80
    ctx->pc = 0x12672Cu;
    SET_GPR_U32(ctx, 31, 0x126734u);
    ctx->pc = 0x126730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12672Cu;
            // 0x126730: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126734u; }
        if (ctx->pc != 0x126734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126734u; }
        if (ctx->pc != 0x126734u) { return; }
    }
    ctx->pc = 0x126734u;
label_126734:
    // 0x126734: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x126734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126738: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x126738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x12673c: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x12673cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x126740: 0x1e2700b  movn        $t6, $t7, $v0
    ctx->pc = 0x126740u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x126744: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x126744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
label_126748:
    // 0x126748: 0x2537823  subu        $t7, $s2, $s3
    ctx->pc = 0x126748u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x12674c: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12674cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x126750: 0x6020391  bltzl       $s0, . + 4 + (0x391 << 2)
    ctx->pc = 0x126750u;
    {
        const bool branch_taken_0x126750 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x126750) {
            ctx->pc = 0x126754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126750u;
            // 0x126754: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127598u;
            goto label_127598;
        }
    }
    ctx->pc = 0x126758u;
    // 0x126758: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x126758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x12675c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_126760:
    // 0x126760: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x126760u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126764: 0x5e00384  bltz        $t7, . + 4 + (0x384 << 2)
    ctx->pc = 0x126764u;
    {
        const bool branch_taken_0x126764 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x126768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126764u;
            // 0x126768: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126764) {
            ctx->pc = 0x127578u;
            goto label_127578;
        }
    }
    ctx->pc = 0x12676Cu;
    // 0x12676c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x12676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x126770: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x126770u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x126774: 0xafaf0040  sw          $t7, 0x40($sp)
    ctx->pc = 0x126774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 15));
    // 0x126778: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x126778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
label_12677c:
    // 0x12677c: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126780: 0x2dee000a  sltiu       $t6, $t7, 0xA
    ctx->pc = 0x126780u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x126784: 0xe780a  movz        $t7, $zero, $t6
    ctx->pc = 0x126784u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x126788: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x126788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x12678c: 0x29ef0006  slti        $t7, $t7, 0x6
    ctx->pc = 0x12678cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x126790: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126790u;
    {
        const bool branch_taken_0x126790 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126790u;
            // 0x126794: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126790) {
            ctx->pc = 0x1267A8u;
            goto label_1267a8;
        }
    }
    ctx->pc = 0x126798u;
    // 0x126798: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x126798u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12679c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12679cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267a0: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x1267a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x1267a4: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x1267a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
label_1267a8:
    // 0x1267a8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1267a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1267ac: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1267b0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1267b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1267b4: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x1267b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x1267b8: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x1267b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x1267bc: 0x2daf0006  sltiu       $t7, $t5, 0x6
    ctx->pc = 0x1267bcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1267c0: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1267C0u;
    {
        const bool branch_taken_0x1267c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1267C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1267C0u;
            // 0x1267c4: 0xafae0038  sw          $t6, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267c0) {
            ctx->pc = 0x1267ECu;
            goto label_1267ec;
        }
    }
    ctx->pc = 0x1267C8u;
    // 0x1267c8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1267c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1267cc: 0xd7880  sll         $t7, $t5, 2
    ctx->pc = 0x1267ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1267d0: 0x25ce08a0  addiu       $t6, $t6, 0x8A0
    ctx->pc = 0x1267d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2208));
    // 0x1267d4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1267d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1267d8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1267d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1267dc: 0x1a00008  jr          $t5
    ctx->pc = 0x1267DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1267E4u: goto label_1267e4;
            case 0x127528u: goto label_127528;
            case 0x12752Cu: goto label_12752c;
            case 0x12754Cu: goto label_12754c;
            case 0x127550u: goto label_127550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1267E4u;
label_1267e4:
    // 0x1267e4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1267e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1267e8: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x1267e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1267ec:
    // 0x1267ec: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x1267ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
    // 0x1267f0: 0x2e6f0018  sltiu       $t7, $s3, 0x18
    ctx->pc = 0x1267f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1267f4: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1267F4u;
    {
        const bool branch_taken_0x1267f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1267F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1267F4u;
            // 0x1267f8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267f4) {
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x1267FCu;
    // 0x1267fc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1267fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126800:
    // 0x126800: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x126804: 0x260f0014  addiu       $t7, $s0, 0x14
    ctx->pc = 0x126804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x126808: 0x26f782b  sltu        $t7, $s3, $t7
    ctx->pc = 0x126808u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12680c: 0x0  nop
    ctx->pc = 0x12680cu;
    // NOP
    // 0x126810: 0x0  nop
    ctx->pc = 0x126810u;
    // NOP
    // 0x126814: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126814u;
    {
        const bool branch_taken_0x126814 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126814u;
            // 0x126818: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126814) {
            ctx->pc = 0x126800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126800;
        }
    }
    ctx->pc = 0x12681Cu;
    // 0x12681c: 0xaead0044  sw          $t5, 0x44($s5)
    ctx->pc = 0x12681cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 13));
label_126820:
    // 0x126820: 0x8ea50044  lw          $a1, 0x44($s5)
    ctx->pc = 0x126820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x126824: 0xc04a740  jal         func_129D00
    ctx->pc = 0x126824u;
    SET_GPR_U32(ctx, 31, 0x12682Cu);
    ctx->pc = 0x126828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126824u;
            // 0x126828: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12682Cu; }
        if (ctx->pc != 0x12682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12682Cu; }
        if (ctx->pc != 0x12682Cu) { return; }
    }
    ctx->pc = 0x12682Cu;
label_12682c:
    // 0x12682c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x12682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x126830: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x126830u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126834: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x126834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x126838: 0x2daf000f  sltiu       $t7, $t5, 0xF
    ctx->pc = 0x126838u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x12683c: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x12683Cu;
    {
        const bool branch_taken_0x12683c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12683Cu;
            // 0x126840: 0x8fb60054  lw          $s6, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12683c) {
            ctx->pc = 0x1269ECu;
            goto label_1269ec;
        }
    }
    ctx->pc = 0x126844u;
    // 0x126844: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
    ctx->pc = 0x126844u;
    {
        const bool branch_taken_0x126844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126844u;
            // 0x126848: 0x8fae002c  lw          $t6, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126844) {
            ctx->pc = 0x1269ECu;
            goto label_1269ec;
        }
    }
    ctx->pc = 0x12684Cu;
    // 0x12684c: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x12684cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126850: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x126850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x126854: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x126854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126858: 0x19c00316  blez        $t6, . + 4 + (0x316 << 2)
    ctx->pc = 0x126858u;
    {
        const bool branch_taken_0x126858 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x12685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126858u;
            // 0x12685c: 0xafae0030  sw          $t6, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126858) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x126860u;
    // 0x126860: 0x31cf000f  andi        $t7, $t6, 0xF
    ctx->pc = 0x126860u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x126864: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x126864u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126868: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x126868u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12686c: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x12686cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x126870: 0x25ce0978  addiu       $t6, $t6, 0x978
    ctx->pc = 0x126870u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2424));
    // 0x126874: 0xd8103  sra         $s0, $t5, 4
    ctx->pc = 0x126874u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 13), 4));
    // 0x126878: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x126878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12687c: 0x320e0010  andi        $t6, $s0, 0x10
    ctx->pc = 0x12687cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x126880: 0x11c00008  beqz        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x126880u;
    {
        const bool branch_taken_0x126880 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126880u;
            // 0x126884: 0xddf10000  ld          $s1, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126880) {
            ctx->pc = 0x1268A4u;
            goto label_1268a4;
        }
    }
    ctx->pc = 0x126888u;
    // 0x126888: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12688c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126890: 0xdde50a60  ld          $a1, 0xA60($t7)
    ctx->pc = 0x126890u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 2656)));
    // 0x126894: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x126894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x126898: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x126898u;
    SET_GPR_U32(ctx, 31, 0x1268A0u);
    ctx->pc = 0x12689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126898u;
            // 0x12689c: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268A0u; }
        if (ctx->pc != 0x1268A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268A0u; }
        if (ctx->pc != 0x1268A0u) { return; }
    }
    ctx->pc = 0x1268A0u;
label_1268a0:
    // 0x1268a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1268a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1268a4:
    // 0x1268a4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1268A4u;
    {
        const bool branch_taken_0x1268a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1268A4u;
            // 0x1268a8: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268a4) {
            ctx->pc = 0x1268DCu;
            goto label_1268dc;
        }
    }
    ctx->pc = 0x1268ACu;
    // 0x1268ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1268acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268b0: 0x25f00a40  addiu       $s0, $t7, 0xA40
    ctx->pc = 0x1268b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 2624));
label_1268b4:
    // 0x1268b4: 0x324f0001  andi        $t7, $s2, 0x1
    ctx->pc = 0x1268b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1268b8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1268B8u;
    {
        const bool branch_taken_0x1268b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1268B8u;
            // 0x1268bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268b8) {
            ctx->pc = 0x1268D0u;
            goto label_1268d0;
        }
    }
    ctx->pc = 0x1268C0u;
    // 0x1268c0: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1268c4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1268C4u;
    SET_GPR_U32(ctx, 31, 0x1268CCu);
    ctx->pc = 0x1268C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1268C4u;
            // 0x1268c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268CCu; }
        if (ctx->pc != 0x1268CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268CCu; }
        if (ctx->pc != 0x1268CCu) { return; }
    }
    ctx->pc = 0x1268CCu;
label_1268cc:
    // 0x1268cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1268ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1268d0:
    // 0x1268d0: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x1268d0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1268d4: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1268D4u;
    {
        const bool branch_taken_0x1268d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1268D4u;
            // 0x1268d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d4) {
            ctx->pc = 0x1268B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1268b4;
        }
    }
    ctx->pc = 0x1268DCu;
label_1268dc:
    // 0x1268dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1268dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268e0: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x1268E0u;
    SET_GPR_U32(ctx, 31, 0x1268E8u);
    ctx->pc = 0x1268E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1268E0u;
            // 0x1268e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268E8u; }
        if (ctx->pc != 0x1268E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268E8u; }
        if (ctx->pc != 0x1268E8u) { return; }
    }
    ctx->pc = 0x1268E8u;
label_1268e8:
    // 0x1268e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1268e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1268ec:
    // 0x1268ec: 0x8faf0034  lw          $t7, 0x34($sp)
    ctx->pc = 0x1268ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1268f0:
    // 0x1268f0: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1268F0u;
    {
        const bool branch_taken_0x1268f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1268F0u;
            // 0x1268f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268f0) {
            ctx->pc = 0x126940u;
            goto label_126940;
        }
    }
    ctx->pc = 0x1268F8u;
    // 0x1268f8: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x1268f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1268fc: 0xc049760  jal         func_125D80
    ctx->pc = 0x1268FCu;
    SET_GPR_U32(ctx, 31, 0x126904u);
    ctx->pc = 0x126900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1268FCu;
            // 0x126900: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126904u; }
        if (ctx->pc != 0x126904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126904u; }
        if (ctx->pc != 0x126904u) { return; }
    }
    ctx->pc = 0x126904u;
label_126904:
    // 0x126904: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x126904u;
    {
        const bool branch_taken_0x126904 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x126908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126904u;
            // 0x126908: 0x8fad0020  lw          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126904) {
            ctx->pc = 0x126940u;
            goto label_126940;
        }
    }
    ctx->pc = 0x12690Cu;
    // 0x12690c: 0x19a0000c  blez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x12690Cu;
    {
        const bool branch_taken_0x12690c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x126910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12690Cu;
            // 0x126910: 0x8fae0028  lw          $t6, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12690c) {
            ctx->pc = 0x126940u;
            goto label_126940;
        }
    }
    ctx->pc = 0x126914u;
    // 0x126914: 0x19c0002f  blez        $t6, . + 4 + (0x2F << 2)
    ctx->pc = 0x126914u;
    {
        const bool branch_taken_0x126914 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x126918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126914u;
            // 0x126918: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126914) {
            ctx->pc = 0x1269D4u;
            goto label_1269d4;
        }
    }
    ctx->pc = 0x12691Cu;
    // 0x12691c: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x126920: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x126920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x126924: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x126924u;
    SET_GPR_U32(ctx, 31, 0x12692Cu);
    ctx->pc = 0x126928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126924u;
            // 0x126928: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12692Cu; }
        if (ctx->pc != 0x12692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12692Cu; }
        if (ctx->pc != 0x12692Cu) { return; }
    }
    ctx->pc = 0x12692Cu;
label_12692c:
    // 0x12692c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x126930: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126934: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x126934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126938: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x126938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12693c: 0xafaf002c  sw          $t7, 0x2C($sp)
    ctx->pc = 0x12693cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
label_126940:
    // 0x126940: 0xc049776  jal         func_125DD8
    ctx->pc = 0x126940u;
    SET_GPR_U32(ctx, 31, 0x126948u);
    ctx->pc = 0x126944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126940u;
            // 0x126944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126948u; }
        if (ctx->pc != 0x126948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126948u; }
        if (ctx->pc != 0x126948u) { return; }
    }
    ctx->pc = 0x126948u;
label_126948:
    // 0x126948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12694c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12694Cu;
    SET_GPR_U32(ctx, 31, 0x126954u);
    ctx->pc = 0x126950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12694Cu;
            // 0x126950: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126954u; }
        if (ctx->pc != 0x126954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126954u; }
        if (ctx->pc != 0x126954u) { return; }
    }
    ctx->pc = 0x126954u;
label_126954:
    // 0x126954: 0x24051007  addiu       $a1, $zero, 0x1007
    ctx->pc = 0x126954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
    // 0x126958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12695c: 0xc04960a  jal         func_125828
    ctx->pc = 0x12695Cu;
    SET_GPR_U32(ctx, 31, 0x126964u);
    ctx->pc = 0x126960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12695Cu;
            // 0x126960: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126964u; }
        if (ctx->pc != 0x126964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126964u; }
        if (ctx->pc != 0x126964u) { return; }
    }
    ctx->pc = 0x126964u;
label_126964:
    // 0x126964: 0x2783f  dsra32      $t7, $v0, 0
    ctx->pc = 0x126964u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x126968: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x126968u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12696c: 0x3c0efcc0  lui         $t6, 0xFCC0
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64704 << 16));
    // 0x126970: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x126970u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x126974: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x126974u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x126978: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x126978u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12697c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12697cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126980: 0x15a0025a  bnez        $t5, . + 4 + (0x25A << 2)
    ctx->pc = 0x126980u;
    {
        const bool branch_taken_0x126980 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126980u;
            // 0x126984: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126980) {
            ctx->pc = 0x1272ECu;
            goto label_1272ec;
        }
    }
    ctx->pc = 0x126988u;
    // 0x126988: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x126988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x12698c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x12698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x126990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126994: 0xc049622  jal         func_125888
    ctx->pc = 0x126994u;
    SET_GPR_U32(ctx, 31, 0x12699Cu);
    ctx->pc = 0x126998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126994u;
            // 0x126998: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12699Cu; }
        if (ctx->pc != 0x12699Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12699Cu; }
        if (ctx->pc != 0x12699Cu) { return; }
    }
    ctx->pc = 0x12699Cu;
label_12699c:
    // 0x12699c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x12699cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1269a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1269a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1269a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a8: 0xc049760  jal         func_125D80
    ctx->pc = 0x1269A8u;
    SET_GPR_U32(ctx, 31, 0x1269B0u);
    ctx->pc = 0x1269ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1269A8u;
            // 0x1269ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269B0u; }
        if (ctx->pc != 0x1269B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269B0u; }
        if (ctx->pc != 0x1269B0u) { return; }
    }
    ctx->pc = 0x1269B0u;
label_1269b0:
    // 0x1269b0: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1269B0u;
    {
        const bool branch_taken_0x1269b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1269B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1269B0u;
            // 0x1269b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269b0) {
            ctx->pc = 0x126A5Cu;
            goto label_126a5c;
        }
    }
    ctx->pc = 0x1269B8u;
    // 0x1269b8: 0xc049622  jal         func_125888
    ctx->pc = 0x1269B8u;
    SET_GPR_U32(ctx, 31, 0x1269C0u);
    ctx->pc = 0x1269BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1269B8u;
            // 0x1269bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269C0u; }
        if (ctx->pc != 0x1269C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269C0u; }
        if (ctx->pc != 0x1269C0u) { return; }
    }
    ctx->pc = 0x1269C0u;
label_1269c0:
    // 0x1269c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1269c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269c4: 0xc049760  jal         func_125D80
    ctx->pc = 0x1269C4u;
    SET_GPR_U32(ctx, 31, 0x1269CCu);
    ctx->pc = 0x1269C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1269C4u;
            // 0x1269c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269CCu; }
        if (ctx->pc != 0x1269CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269CCu; }
        if (ctx->pc != 0x1269CCu) { return; }
    }
    ctx->pc = 0x1269CCu;
label_1269cc:
    // 0x1269cc: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1269CCu;
    {
        const bool branch_taken_0x1269cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1269CCu;
            // 0x1269d0: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269cc) {
            ctx->pc = 0x126AF0u;
            goto label_126af0;
        }
    }
    ctx->pc = 0x1269D4u;
label_1269d4:
    // 0x1269d4: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x1269d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1269d8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1269d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269dc: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1269e0: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x1269e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
    // 0x1269e4: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x1269e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x1269e8: 0x8fb60054  lw          $s6, 0x54($sp)
    ctx->pc = 0x1269e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1269ec:
    // 0x1269ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1269ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1269f0: 0x440008e  bltz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1269F0u;
    {
        const bool branch_taken_0x1269f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1269F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1269F0u;
            // 0x1269f4: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269f0) {
            ctx->pc = 0x126C2Cu;
            goto label_126c2c;
        }
    }
    ctx->pc = 0x1269F8u;
    // 0x1269f8: 0x29af000f  slti        $t7, $t5, 0xF
    ctx->pc = 0x1269f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1269fc: 0x11e0008b  beqz        $t7, . + 4 + (0x8B << 2)
    ctx->pc = 0x1269FCu;
    {
        const bool branch_taken_0x1269fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1269FCu;
            // 0x126a00: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269fc) {
            ctx->pc = 0x126C2Cu;
            goto label_126c2c;
        }
    }
    ctx->pc = 0x126A04u;
    // 0x126a04: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x126a08: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x126a0c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x126a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x126a10: 0xddd10000  ld          $s1, 0x0($t6)
    ctx->pc = 0x126a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x126a14: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x126a14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x126a18: 0x5c30038  bgezl       $t6, . + 4 + (0x38 << 2)
    ctx->pc = 0x126A18u;
    {
        const bool branch_taken_0x126a18 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x126a18) {
            ctx->pc = 0x126A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126A18u;
            // 0x126a1c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126AFCu;
            goto label_126afc;
        }
    }
    ctx->pc = 0x126A20u;
    // 0x126a20: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126a24: 0x5de00035  bgtzl       $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x126A24u;
    {
        const bool branch_taken_0x126a24 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x126a24) {
            ctx->pc = 0x126A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126A24u;
            // 0x126a28: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126AFCu;
            goto label_126afc;
        }
    }
    ctx->pc = 0x126A2Cu;
    // 0x126a2c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x126a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x126a30: 0x5e0002e  bltz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x126A30u;
    {
        const bool branch_taken_0x126a30 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x126A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126A30u;
            // 0x126a34: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a30) {
            ctx->pc = 0x126AECu;
            goto label_126aec;
        }
    }
    ctx->pc = 0x126A38u;
    // 0x126a38: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x126a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x126a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a40: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x126A40u;
    SET_GPR_U32(ctx, 31, 0x126A48u);
    ctx->pc = 0x126A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126A40u;
            // 0x126a44: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126A48u; }
        if (ctx->pc != 0x126A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126A48u; }
        if (ctx->pc != 0x126A48u) { return; }
    }
    ctx->pc = 0x126A48u;
label_126a48:
    // 0x126a48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a4c: 0xc049760  jal         func_125D80
    ctx->pc = 0x126A4Cu;
    SET_GPR_U32(ctx, 31, 0x126A54u);
    ctx->pc = 0x126A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126A4Cu;
            // 0x126a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126A54u; }
        if (ctx->pc != 0x126A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126A54u; }
        if (ctx->pc != 0x126A54u) { return; }
    }
    ctx->pc = 0x126A54u;
label_126a54:
    // 0x126a54: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x126A54u;
    {
        const bool branch_taken_0x126a54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x126A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126A54u;
            // 0x126a58: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a54) {
            ctx->pc = 0x126AF0u;
            goto label_126af0;
        }
    }
    ctx->pc = 0x126A5Cu;
label_126a5c:
    // 0x126a5c: 0x8fad0054  lw          $t5, 0x54($sp)
    ctx->pc = 0x126a5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_126a60:
    // 0x126a60: 0x240f0031  addiu       $t7, $zero, 0x31
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x126a64: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x126a64u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x126a68: 0x25b60001  addiu       $s6, $t5, 0x1
    ctx->pc = 0x126a68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x126a6c: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126a70: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x126a74: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x126a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
label_126a78:
    // 0x126a78: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126a7c: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x126A7Cu;
    SET_GPR_U32(ctx, 31, 0x126A84u);
    ctx->pc = 0x126A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126A7Cu;
            // 0x126a80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126A84u; }
        if (ctx->pc != 0x126A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126A84u; }
        if (ctx->pc != 0x126A84u) { return; }
    }
    ctx->pc = 0x126A84u;
label_126a84:
    // 0x126a84: 0x8faf004c  lw          $t7, 0x4C($sp)
    ctx->pc = 0x126a84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x126a88: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x126A88u;
    {
        const bool branch_taken_0x126a88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126A88u;
            // 0x126a8c: 0x8fad0048  lw          $t5, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a88) {
            ctx->pc = 0x126AB8u;
            goto label_126ab8;
        }
    }
    ctx->pc = 0x126A90u;
    // 0x126a90: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x126A90u;
    {
        const bool branch_taken_0x126a90 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126A90u;
            // 0x126a94: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a90) {
            ctx->pc = 0x126AB0u;
            goto label_126ab0;
        }
    }
    ctx->pc = 0x126A98u;
    // 0x126a98: 0x11af0005  beq         $t5, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126A98u;
    {
        const bool branch_taken_0x126a98 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x126a98) {
            ctx->pc = 0x126AB0u;
            goto label_126ab0;
        }
    }
    ctx->pc = 0x126AA0u;
    // 0x126aa0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126aa4: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x126AA4u;
    SET_GPR_U32(ctx, 31, 0x126AACu);
    ctx->pc = 0x126AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126AA4u;
            // 0x126aa8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126AACu; }
        if (ctx->pc != 0x126AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126AACu; }
        if (ctx->pc != 0x126AACu) { return; }
    }
    ctx->pc = 0x126AACu;
label_126aac:
    // 0x126aac: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x126aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_126ab0:
    // 0x126ab0: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x126AB0u;
    SET_GPR_U32(ctx, 31, 0x126AB8u);
    ctx->pc = 0x126AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126AB0u;
            // 0x126ab4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126AB8u; }
        if (ctx->pc != 0x126AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126AB8u; }
        if (ctx->pc != 0x126AB8u) { return; }
    }
    ctx->pc = 0x126AB8u;
label_126ab8:
    // 0x126ab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_126abc:
    // 0x126abc: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x126ABCu;
    SET_GPR_U32(ctx, 31, 0x126AC4u);
    ctx->pc = 0x126AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126ABCu;
            // 0x126ac0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126AC4u; }
        if (ctx->pc != 0x126AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126AC4u; }
        if (ctx->pc != 0x126AC4u) { return; }
    }
    ctx->pc = 0x126AC4u;
label_126ac4:
    // 0x126ac4: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x126ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x126ac8: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126acc: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x126accu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126ad0: 0x25cf0001  addiu       $t7, $t6, 0x1
    ctx->pc = 0x126ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x126ad4: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x126ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x126ad8: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x126ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x126adc: 0x55c00001  bnel        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126ADCu;
    {
        const bool branch_taken_0x126adc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x126adc) {
            ctx->pc = 0x126AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126ADCu;
            // 0x126ae0: 0xadd60000  sw          $s6, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126AE4u;
            goto label_126ae4;
        }
    }
    ctx->pc = 0x126AE4u;
label_126ae4:
    // 0x126ae4: 0x1000fea3  b           . + 4 + (-0x15D << 2)
    ctx->pc = 0x126AE4u;
    {
        const bool branch_taken_0x126ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126AE4u;
            // 0x126ae8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ae4) {
            ctx->pc = 0x126574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126574;
        }
    }
    ctx->pc = 0x126AECu;
label_126aec:
    // 0x126aec: 0x8faf000c  lw          $t7, 0xC($sp)
    ctx->pc = 0x126aecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_126af0:
    // 0x126af0: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x126af0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x126af4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x126AF4u;
    {
        const bool branch_taken_0x126af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126AF4u;
            // 0x126af8: 0xafaf002c  sw          $t7, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af4) {
            ctx->pc = 0x126A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a78;
        }
    }
    ctx->pc = 0x126AFCu;
label_126afc:
    // 0x126afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_126b00:
    // 0x126b00: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x126B00u;
    SET_GPR_U32(ctx, 31, 0x126B08u);
    ctx->pc = 0x126B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B00u;
            // 0x126b04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B08u; }
        if (ctx->pc != 0x126B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B08u; }
        if (ctx->pc != 0x126B08u) { return; }
    }
    ctx->pc = 0x126B08u;
label_126b08:
    // 0x126b08: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x126B08u;
    SET_GPR_U32(ctx, 31, 0x126B10u);
    ctx->pc = 0x126B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B08u;
            // 0x126b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B10u; }
        if (ctx->pc != 0x126B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B10u; }
        if (ctx->pc != 0x126B10u) { return; }
    }
    ctx->pc = 0x126B10u;
label_126b10:
    // 0x126b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b14: 0xc049776  jal         func_125DD8
    ctx->pc = 0x126B14u;
    SET_GPR_U32(ctx, 31, 0x126B1Cu);
    ctx->pc = 0x126B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B14u;
            // 0x126b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B1Cu; }
        if (ctx->pc != 0x126B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B1Cu; }
        if (ctx->pc != 0x126B1Cu) { return; }
    }
    ctx->pc = 0x126B1Cu;
label_126b1c:
    // 0x126b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b20: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x126B20u;
    SET_GPR_U32(ctx, 31, 0x126B28u);
    ctx->pc = 0x126B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B20u;
            // 0x126b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B28u; }
        if (ctx->pc != 0x126B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B28u; }
        if (ctx->pc != 0x126B28u) { return; }
    }
    ctx->pc = 0x126B28u;
label_126b28:
    // 0x126b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b2c: 0xc049622  jal         func_125888
    ctx->pc = 0x126B2Cu;
    SET_GPR_U32(ctx, 31, 0x126B34u);
    ctx->pc = 0x126B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B2Cu;
            // 0x126b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B34u; }
        if (ctx->pc != 0x126B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B34u; }
        if (ctx->pc != 0x126B34u) { return; }
    }
    ctx->pc = 0x126B34u;
label_126b34:
    // 0x126b34: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x126b34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x126b38: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x126b38u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x126b3c: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x126b3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126b40: 0x166d002d  bne         $s3, $t5, . + 4 + (0x2D << 2)
    ctx->pc = 0x126B40u;
    {
        const bool branch_taken_0x126b40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x126B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B40u;
            // 0x126b44: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b40) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126B48u;
    // 0x126b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b4c: 0xc04960a  jal         func_125828
    ctx->pc = 0x126B4Cu;
    SET_GPR_U32(ctx, 31, 0x126B54u);
    ctx->pc = 0x126B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B4Cu;
            // 0x126b50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B54u; }
        if (ctx->pc != 0x126B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B54u; }
        if (ctx->pc != 0x126B54u) { return; }
    }
    ctx->pc = 0x126B54u;
label_126b54:
    // 0x126b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b5c: 0xc049760  jal         func_125D80
    ctx->pc = 0x126B5Cu;
    SET_GPR_U32(ctx, 31, 0x126B64u);
    ctx->pc = 0x126B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B5Cu;
            // 0x126b60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B64u; }
        if (ctx->pc != 0x126B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B64u; }
        if (ctx->pc != 0x126B64u) { return; }
    }
    ctx->pc = 0x126B64u;
label_126b64:
    // 0x126b64: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x126B64u;
    {
        const bool branch_taken_0x126b64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x126B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B64u;
            // 0x126b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b64) {
            ctx->pc = 0x126B84u;
            goto label_126b84;
        }
    }
    ctx->pc = 0x126B6Cu;
    // 0x126b6c: 0xc049760  jal         func_125D80
    ctx->pc = 0x126B6Cu;
    SET_GPR_U32(ctx, 31, 0x126B74u);
    ctx->pc = 0x126B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B6Cu;
            // 0x126b70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B74u; }
        if (ctx->pc != 0x126B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B74u; }
        if (ctx->pc != 0x126B74u) { return; }
    }
    ctx->pc = 0x126B74u;
label_126b74:
    // 0x126b74: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x126B74u;
    {
        const bool branch_taken_0x126b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B74u;
            // 0x126b78: 0x320f0001  andi        $t7, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b74) {
            ctx->pc = 0x126AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126ab8;
        }
    }
    ctx->pc = 0x126B7Cu;
    // 0x126b7c: 0x11e0ffcf  beqz        $t7, . + 4 + (-0x31 << 2)
    ctx->pc = 0x126B7Cu;
    {
        const bool branch_taken_0x126b7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B7Cu;
            // 0x126b80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b7c) {
            ctx->pc = 0x126ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126abc;
        }
    }
    ctx->pc = 0x126B84u;
label_126b84:
    // 0x126b84: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x126b88: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x126b88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x126b8c: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x126b8cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x126b90: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x126b94: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x126b94u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x126b98: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x126B98u;
    {
        const bool branch_taken_0x126b98 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x126B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B98u;
            // 0x126b9c: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b98) {
            ctx->pc = 0x126BCCu;
            goto label_126bcc;
        }
    }
    ctx->pc = 0x126BA0u;
    // 0x126ba0: 0x240e0039  addiu       $t6, $zero, 0x39
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x126ba4: 0x8faf0054  lw          $t7, 0x54($sp)
    ctx->pc = 0x126ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_126ba8:
    // 0x126ba8: 0x12cf000b  beq         $s6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x126BA8u;
    {
        const bool branch_taken_0x126ba8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 15));
        ctx->pc = 0x126BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126BA8u;
            // 0x126bac: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ba8) {
            ctx->pc = 0x126BD8u;
            goto label_126bd8;
        }
    }
    ctx->pc = 0x126BB0u;
    // 0x126bb0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x126bb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x126bb4: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x126bb4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x126bb8: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x126bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x126bbc: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x126bbcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x126bc0: 0x11eefff9  beq         $t7, $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x126BC0u;
    {
        const bool branch_taken_0x126bc0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x126BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126BC0u;
            // 0x126bc4: 0x8faf0054  lw          $t7, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bc0) {
            ctx->pc = 0x126BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126ba8;
        }
    }
    ctx->pc = 0x126BC8u;
label_126bc8:
    // 0x126bc8: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_126bcc:
    // 0x126bcc: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x126bccu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x126bd0: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x126BD0u;
    {
        const bool branch_taken_0x126bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126BD0u;
            // 0x126bd4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bd0) {
            ctx->pc = 0x126AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126ab8;
        }
    }
    ctx->pc = 0x126BD8u;
label_126bd8:
    // 0x126bd8: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x126bdc: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x126be0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x126be0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x126be4: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x126be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x126be8: 0xa1cf0000  sb          $t7, 0x0($t6)
    ctx->pc = 0x126be8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x126bec: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x126BECu;
    {
        const bool branch_taken_0x126bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126BECu;
            // 0x126bf0: 0x240d0030  addiu       $t5, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bec) {
            ctx->pc = 0x126BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126bc8;
        }
    }
    ctx->pc = 0x126BF4u;
    // 0x126bf4: 0x0  nop
    ctx->pc = 0x126bf4u;
    // NOP
label_126bf8:
    // 0x126bf8: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x126bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x126bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c00: 0x424bc  dsll32      $a0, $a0, 18
    ctx->pc = 0x126c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    // 0x126c04: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x126C04u;
    SET_GPR_U32(ctx, 31, 0x126C0Cu);
    ctx->pc = 0x126C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126C04u;
            // 0x126c08: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C0Cu; }
        if (ctx->pc != 0x126C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C0Cu; }
        if (ctx->pc != 0x126C0Cu) { return; }
    }
    ctx->pc = 0x126C0Cu;
label_126c0c:
    // 0x126c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c14: 0xc049760  jal         func_125D80
    ctx->pc = 0x126C14u;
    SET_GPR_U32(ctx, 31, 0x126C1Cu);
    ctx->pc = 0x126C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126C14u;
            // 0x126c18: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C1Cu; }
        if (ctx->pc != 0x126C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C1Cu; }
        if (ctx->pc != 0x126C1Cu) { return; }
    }
    ctx->pc = 0x126C1Cu;
label_126c1c:
    // 0x126c1c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x126C1Cu;
    {
        const bool branch_taken_0x126c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C1Cu;
            // 0x126c20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c1c) {
            ctx->pc = 0x126B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126b00;
        }
    }
    ctx->pc = 0x126C24u;
    // 0x126c24: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
    ctx->pc = 0x126C24u;
    {
        const bool branch_taken_0x126c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C24u;
            // 0x126c28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c24) {
            ctx->pc = 0x126ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126abc;
        }
    }
    ctx->pc = 0x126C2Cu;
label_126c2c:
    // 0x126c2c: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x126c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126c30: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x126c30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126c34: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126c38: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x126c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x126c3c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x126c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x126c40: 0x8fad0038  lw          $t5, 0x38($sp)
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126c44: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x126C44u;
    {
        const bool branch_taken_0x126c44 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C44u;
            // 0x126c48: 0x29f70002  slti        $s7, $t7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c44) {
            ctx->pc = 0x126C90u;
            goto label_126c90;
        }
    }
    ctx->pc = 0x126C4Cu;
    // 0x126c4c: 0x12e00193  beqz        $s7, . + 4 + (0x193 << 2)
    ctx->pc = 0x126C4Cu;
    {
        const bool branch_taken_0x126c4c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C4Cu;
            // 0x126c50: 0x8fae0044  lw          $t6, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c4c) {
            ctx->pc = 0x12729Cu;
            goto label_12729c;
        }
    }
    ctx->pc = 0x126C54u;
    // 0x126c54: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x126C54u;
    {
        const bool branch_taken_0x126c54 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C54u;
            // 0x126c58: 0x24530433  addiu       $s3, $v0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c54) {
            ctx->pc = 0x126C68u;
            goto label_126c68;
        }
    }
    ctx->pc = 0x126C5Cu;
    // 0x126c5c: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x126c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x126c60: 0x240e0036  addiu       $t6, $zero, 0x36
    ctx->pc = 0x126c60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x126c64: 0x1cf9823  subu        $s3, $t6, $t7
    ctx->pc = 0x126c64u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_126c68:
    // 0x126c68: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x126c68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_126c6c:
    // 0x126c6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126c74: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x126c78: 0xc04a854  jal         func_12A150
    ctx->pc = 0x126C78u;
    SET_GPR_U32(ctx, 31, 0x126C80u);
    ctx->pc = 0x126C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126C78u;
            // 0x126c7c: 0xafad003c  sw          $t5, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A150u;
    if (runtime->hasFunction(0x12A150u)) {
        auto targetFn = runtime->lookupFunction(0x12A150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C80u; }
        if (ctx->pc != 0x126C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A150_0x12a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C80u; }
        if (ctx->pc != 0x126C80u) { return; }
    }
    ctx->pc = 0x126C80u;
label_126c80:
    // 0x126c80: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x126c80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126c84: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x126c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x126c88: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x126c88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x126c8c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x126c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_126c90:
    // 0x126c90: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x126C90u;
    {
        const bool branch_taken_0x126c90 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x126C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C90u;
            // 0x126c94: 0x8faf003c  lw          $t7, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c90) {
            ctx->pc = 0x126CC4u;
            goto label_126cc4;
        }
    }
    ctx->pc = 0x126C98u;
    // 0x126c98: 0x19e0000a  blez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x126C98u;
    {
        const bool branch_taken_0x126c98 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C98u;
            // 0x126c9c: 0x8fb3003c  lw          $s3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c98) {
            ctx->pc = 0x126CC4u;
            goto label_126cc4;
        }
    }
    ctx->pc = 0x126CA0u;
    // 0x126ca0: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x126ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x126ca4: 0x233782a  slt         $t7, $s1, $s3
    ctx->pc = 0x126ca4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x126ca8: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x126ca8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126cac: 0x22f980b  movn        $s3, $s1, $t7
    ctx->pc = 0x126cacu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x126cb0: 0x1b36823  subu        $t5, $t5, $s3
    ctx->pc = 0x126cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x126cb4: 0x1d37023  subu        $t6, $t6, $s3
    ctx->pc = 0x126cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x126cb8: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x126cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    // 0x126cbc: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x126cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x126cc0: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x126cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_126cc4:
    // 0x126cc4: 0x8faf001c  lw          $t7, 0x1C($sp)
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126cc8: 0x19e0001a  blez        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x126CC8u;
    {
        const bool branch_taken_0x126cc8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x126CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CC8u;
            // 0x126ccc: 0x8fad0038  lw          $t5, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cc8) {
            ctx->pc = 0x126D34u;
            goto label_126d34;
        }
    }
    ctx->pc = 0x126CD0u;
    // 0x126cd0: 0x11a00170  beqz        $t5, . + 4 + (0x170 << 2)
    ctx->pc = 0x126CD0u;
    {
        const bool branch_taken_0x126cd0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CD0u;
            // 0x126cd4: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cd0) {
            ctx->pc = 0x127294u;
            goto label_127294;
        }
    }
    ctx->pc = 0x126CD8u;
    // 0x126cd8: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x126CD8u;
    {
        const bool branch_taken_0x126cd8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x126CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CD8u;
            // 0x126cdc: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cd8) {
            ctx->pc = 0x126D14u;
            goto label_126d14;
        }
    }
    ctx->pc = 0x126CE0u;
    // 0x126ce0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ce4: 0xc04a8e4  jal         func_12A390
    ctx->pc = 0x126CE4u;
    SET_GPR_U32(ctx, 31, 0x126CECu);
    ctx->pc = 0x126CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126CE4u;
            // 0x126ce8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A390u;
    if (runtime->hasFunction(0x12A390u)) {
        auto targetFn = runtime->lookupFunction(0x12A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126CECu; }
        if (ctx->pc != 0x126CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A390_0x12a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126CECu; }
        if (ctx->pc != 0x126CECu) { return; }
    }
    ctx->pc = 0x126CECu;
label_126cec:
    // 0x126cec: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x126cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x126cf0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x126cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cf8: 0xc04a862  jal         func_12A188
    ctx->pc = 0x126CF8u;
    SET_GPR_U32(ctx, 31, 0x126D00u);
    ctx->pc = 0x126CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126CF8u;
            // 0x126cfc: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A188u;
    if (runtime->hasFunction(0x12A188u)) {
        auto targetFn = runtime->lookupFunction(0x12A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D00u; }
        if (ctx->pc != 0x126D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A188_0x12a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D00u; }
        if (ctx->pc != 0x126D00u) { return; }
    }
    ctx->pc = 0x126D00u;
label_126d00:
    // 0x126d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x126d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d0c: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x126D0Cu;
    SET_GPR_U32(ctx, 31, 0x126D14u);
    ctx->pc = 0x126D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D0Cu;
            // 0x126d10: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D14u; }
        if (ctx->pc != 0x126D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D14u; }
        if (ctx->pc != 0x126D14u) { return; }
    }
    ctx->pc = 0x126D14u;
label_126d14:
    // 0x126d14: 0x8fae001c  lw          $t6, 0x1C($sp)
    ctx->pc = 0x126d14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126d18: 0x1d28023  subu        $s0, $t6, $s2
    ctx->pc = 0x126d18u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x126d1c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126D1Cu;
    {
        const bool branch_taken_0x126d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126D1Cu;
            // 0x126d20: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d1c) {
            ctx->pc = 0x126D34u;
            goto label_126d34;
        }
    }
    ctx->pc = 0x126D24u;
    // 0x126d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x126d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126d28:
    // 0x126d28: 0xc04a8e4  jal         func_12A390
    ctx->pc = 0x126D28u;
    SET_GPR_U32(ctx, 31, 0x126D30u);
    ctx->pc = 0x126D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D28u;
            // 0x126d2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A390u;
    if (runtime->hasFunction(0x12A390u)) {
        auto targetFn = runtime->lookupFunction(0x12A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D30u; }
        if (ctx->pc != 0x126D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A390_0x12a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D30u; }
        if (ctx->pc != 0x126D30u) { return; }
    }
    ctx->pc = 0x126D30u;
label_126d30:
    // 0x126d30: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x126d30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126d34:
    // 0x126d34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d38: 0xc04a854  jal         func_12A150
    ctx->pc = 0x126D38u;
    SET_GPR_U32(ctx, 31, 0x126D40u);
    ctx->pc = 0x126D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D38u;
            // 0x126d3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A150u;
    if (runtime->hasFunction(0x12A150u)) {
        auto targetFn = runtime->lookupFunction(0x12A150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D40u; }
        if (ctx->pc != 0x126D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A150_0x12a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D40u; }
        if (ctx->pc != 0x126D40u) { return; }
    }
    ctx->pc = 0x126D40u;
label_126d40:
    // 0x126d40: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x126d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x126d44: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x126d44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126d48: 0x19e00005  blez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126D48u;
    {
        const bool branch_taken_0x126d48 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x126D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126D48u;
            // 0x126d4c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d48) {
            ctx->pc = 0x126D60u;
            goto label_126d60;
        }
    }
    ctx->pc = 0x126D50u;
    // 0x126d50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d54: 0xc04a8e4  jal         func_12A390
    ctx->pc = 0x126D54u;
    SET_GPR_U32(ctx, 31, 0x126D5Cu);
    ctx->pc = 0x126D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D54u;
            // 0x126d58: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A390u;
    if (runtime->hasFunction(0x12A390u)) {
        auto targetFn = runtime->lookupFunction(0x12A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D5Cu; }
        if (ctx->pc != 0x126D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A390_0x12a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D5Cu; }
        if (ctx->pc != 0x126D5Cu) { return; }
    }
    ctx->pc = 0x126D5Cu;
label_126d5c:
    // 0x126d5c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x126d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_126d60:
    // 0x126d60: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x126D60u;
    {
        const bool branch_taken_0x126d60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126D60u;
            // 0x126d64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d60) {
            ctx->pc = 0x126DA8u;
            goto label_126da8;
        }
    }
    ctx->pc = 0x126D68u;
    // 0x126d68: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x126d68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x126d6c: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x126d6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x126d70: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x126d70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x126d74: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x126D74u;
    {
        const bool branch_taken_0x126d74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126D74u;
            // 0x126d78: 0x8faf0040  lw          $t7, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d74) {
            ctx->pc = 0x126DACu;
            goto label_126dac;
        }
    }
    ctx->pc = 0x126D7Cu;
    // 0x126d7c: 0x14783f  dsra32      $t7, $s4, 0
    ctx->pc = 0x126d7cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x126d80: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x126d80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x126d84: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126d84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126d88: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x126D88u;
    {
        const bool branch_taken_0x126d88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126D88u;
            // 0x126d8c: 0x8fad0018  lw          $t5, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d88) {
            ctx->pc = 0x126DA8u;
            goto label_126da8;
        }
    }
    ctx->pc = 0x126D90u;
    // 0x126d90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x126d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126d94: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x126d94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x126d98: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x126d98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x126d9c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x126d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x126da0: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x126da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
    // 0x126da4: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x126da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
label_126da8:
    // 0x126da8: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x126da8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_126dac:
    // 0x126dac: 0x11e00135  beqz        $t7, . + 4 + (0x135 << 2)
    ctx->pc = 0x126DACu;
    {
        const bool branch_taken_0x126dac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126DACu;
            // 0x126db0: 0x8fad0050  lw          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dac) {
            ctx->pc = 0x127284u;
            goto label_127284;
        }
    }
    ctx->pc = 0x126DB4u;
    // 0x126db4: 0x8daf0010  lw          $t7, 0x10($t5)
    ctx->pc = 0x126db4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x126db8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x126db8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x126dbc: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x126dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x126dc0: 0xc04a804  jal         func_12A010
    ctx->pc = 0x126DC0u;
    SET_GPR_U32(ctx, 31, 0x126DC8u);
    ctx->pc = 0x126DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126DC0u;
            // 0x126dc4: 0x8de40010  lw          $a0, 0x10($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A010u;
    if (runtime->hasFunction(0x12A010u)) {
        auto targetFn = runtime->lookupFunction(0x12A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126DC8u; }
        if (ctx->pc != 0x126DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A010_0x12a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126DC8u; }
        if (ctx->pc != 0x126DC8u) { return; }
    }
    ctx->pc = 0x126DC8u;
label_126dc8:
    // 0x126dc8: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x126dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x126dcc: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x126dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x126dd0: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x126dd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_126dd4:
    // 0x126dd4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x126DD4u;
    {
        const bool branch_taken_0x126dd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126DD4u;
            // 0x126dd8: 0x240f0020  addiu       $t7, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dd4) {
            ctx->pc = 0x126DE0u;
            goto label_126de0;
        }
    }
    ctx->pc = 0x126DDCu;
    // 0x126ddc: 0x1f39823  subu        $s3, $t7, $s3
    ctx->pc = 0x126ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_126de0:
    // 0x126de0: 0x2a6f0005  slti        $t7, $s3, 0x5
    ctx->pc = 0x126de0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x126de4: 0x15e0011e  bnez        $t7, . + 4 + (0x11E << 2)
    ctx->pc = 0x126DE4u;
    {
        const bool branch_taken_0x126de4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126DE4u;
            // 0x126de8: 0x2a6f0004  slti        $t7, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126de4) {
            ctx->pc = 0x127260u;
            goto label_127260;
        }
    }
    ctx->pc = 0x126DECu;
    // 0x126dec: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x126decu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x126df0: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x126df4: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x126df4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126df8: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x126df8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x126dfc: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x126dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x126e00: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x126e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
    // 0x126e04: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x126e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
label_126e08:
    // 0x126e08: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x126e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_126e0c:
    // 0x126e0c: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x126e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126e10: 0x19e00005  blez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126E10u;
    {
        const bool branch_taken_0x126e10 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x126E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E10u;
            // 0x126e14: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e10) {
            ctx->pc = 0x126E28u;
            goto label_126e28;
        }
    }
    ctx->pc = 0x126E18u;
    // 0x126e18: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x126e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e1c: 0xc04a926  jal         func_12A498
    ctx->pc = 0x126E1Cu;
    SET_GPR_U32(ctx, 31, 0x126E24u);
    ctx->pc = 0x126E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126E1Cu;
            // 0x126e20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E24u; }
        if (ctx->pc != 0x126E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E24u; }
        if (ctx->pc != 0x126E24u) { return; }
    }
    ctx->pc = 0x126E24u;
label_126e24:
    // 0x126e24: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x126e24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126e28:
    // 0x126e28: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x126e2c: 0x19a00005  blez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x126E2Cu;
    {
        const bool branch_taken_0x126e2c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x126E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E2Cu;
            // 0x126e30: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e2c) {
            ctx->pc = 0x126E44u;
            goto label_126e44;
        }
    }
    ctx->pc = 0x126E34u;
    // 0x126e34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e38: 0xc04a926  jal         func_12A498
    ctx->pc = 0x126E38u;
    SET_GPR_U32(ctx, 31, 0x126E40u);
    ctx->pc = 0x126E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126E38u;
            // 0x126e3c: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E40u; }
        if (ctx->pc != 0x126E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E40u; }
        if (ctx->pc != 0x126E40u) { return; }
    }
    ctx->pc = 0x126E40u;
label_126e40:
    // 0x126e40: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x126e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_126e44:
    // 0x126e44: 0x8fae0034  lw          $t6, 0x34($sp)
    ctx->pc = 0x126e44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x126e48: 0x11c00018  beqz        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x126E48u;
    {
        const bool branch_taken_0x126e48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E48u;
            // 0x126e4c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e48) {
            ctx->pc = 0x126EACu;
            goto label_126eac;
        }
    }
    ctx->pc = 0x126E50u;
    // 0x126e50: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x126E50u;
    SET_GPR_U32(ctx, 31, 0x126E58u);
    ctx->pc = 0x126E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126E50u;
            // 0x126e54: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E58u; }
        if (ctx->pc != 0x126E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E58u; }
        if (ctx->pc != 0x126E58u) { return; }
    }
    ctx->pc = 0x126E58u;
label_126e58:
    // 0x126e58: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x126E58u;
    {
        const bool branch_taken_0x126e58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x126E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E58u;
            // 0x126e5c: 0x8faf0020  lw          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e58) {
            ctx->pc = 0x126EB0u;
            goto label_126eb0;
        }
    }
    ctx->pc = 0x126E60u;
    // 0x126e60: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x126e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e68: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x126e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x126e6c: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x126E6Cu;
    SET_GPR_U32(ctx, 31, 0x126E74u);
    ctx->pc = 0x126E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126E6Cu;
            // 0x126e70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E74u; }
        if (ctx->pc != 0x126E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126E74u; }
        if (ctx->pc != 0x126E74u) { return; }
    }
    ctx->pc = 0x126E74u;
label_126e74:
    // 0x126e74: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x126e74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x126e78: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x126e78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e7c: 0x8fad0038  lw          $t5, 0x38($sp)
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126e80: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x126e80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x126e84: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x126E84u;
    {
        const bool branch_taken_0x126e84 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E84u;
            // 0x126e88: 0xafaf002c  sw          $t7, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e84) {
            ctx->pc = 0x126EA4u;
            goto label_126ea4;
        }
    }
    ctx->pc = 0x126E8Cu;
    // 0x126e8c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x126e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x126e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e94: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x126e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x126e98: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x126E98u;
    SET_GPR_U32(ctx, 31, 0x126EA0u);
    ctx->pc = 0x126E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126E98u;
            // 0x126e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126EA0u; }
        if (ctx->pc != 0x126EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126EA0u; }
        if (ctx->pc != 0x126EA0u) { return; }
    }
    ctx->pc = 0x126EA0u;
label_126ea0:
    // 0x126ea0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x126ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_126ea4:
    // 0x126ea4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x126ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126ea8: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x126ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
label_126eac:
    // 0x126eac: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x126eacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_126eb0:
    // 0x126eb0: 0x1de00015  bgtz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x126EB0u;
    {
        const bool branch_taken_0x126eb0 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x126EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EB0u;
            // 0x126eb4: 0x8faf0038  lw          $t7, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126eb0) {
            ctx->pc = 0x126F08u;
            goto label_126f08;
        }
    }
    ctx->pc = 0x126EB8u;
    // 0x126eb8: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126ebc: 0x29af0003  slti        $t7, $t5, 0x3
    ctx->pc = 0x126ebcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x126ec0: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x126EC0u;
    {
        const bool branch_taken_0x126ec0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EC0u;
            // 0x126ec4: 0x8faf0038  lw          $t7, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ec0) {
            ctx->pc = 0x126F08u;
            goto label_126f08;
        }
    }
    ctx->pc = 0x126EC8u;
    // 0x126ec8: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x126ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126ecc: 0x5c0ff07  bltz        $t6, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x126ECCu;
    {
        const bool branch_taken_0x126ecc = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x126ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126ECCu;
            // 0x126ed0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ecc) {
            ctx->pc = 0x126AECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126aec;
        }
    }
    ctx->pc = 0x126ED4u;
    // 0x126ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ed8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x126edc: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x126EDCu;
    SET_GPR_U32(ctx, 31, 0x126EE4u);
    ctx->pc = 0x126EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126EDCu;
            // 0x126ee0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126EE4u; }
        if (ctx->pc != 0x126EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126EE4u; }
        if (ctx->pc != 0x126EE4u) { return; }
    }
    ctx->pc = 0x126EE4u;
label_126ee4:
    // 0x126ee4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x126ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x126ee8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126eec: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x126EECu;
    SET_GPR_U32(ctx, 31, 0x126EF4u);
    ctx->pc = 0x126EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126EECu;
            // 0x126ef0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126EF4u; }
        if (ctx->pc != 0x126EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126EF4u; }
        if (ctx->pc != 0x126EF4u) { return; }
    }
    ctx->pc = 0x126EF4u;
label_126ef4:
    // 0x126ef4: 0x1c40feda  bgtz        $v0, . + 4 + (-0x126 << 2)
    ctx->pc = 0x126EF4u;
    {
        const bool branch_taken_0x126ef4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x126EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EF4u;
            // 0x126ef8: 0x8fad0054  lw          $t5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ef4) {
            ctx->pc = 0x126A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a60;
        }
    }
    ctx->pc = 0x126EFCu;
    // 0x126efc: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x126EFCu;
    {
        const bool branch_taken_0x126efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EFCu;
            // 0x126f00: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126efc) {
            ctx->pc = 0x126AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126af0;
        }
    }
    ctx->pc = 0x126F04u;
    // 0x126f04: 0x0  nop
    ctx->pc = 0x126f04u;
    // NOP
label_126f08:
    // 0x126f08: 0x11e000c3  beqz        $t7, . + 4 + (0xC3 << 2)
    ctx->pc = 0x126F08u;
    {
        const bool branch_taken_0x126f08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F08u;
            // 0x126f0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f08) {
            ctx->pc = 0x127218u;
            goto label_127218;
        }
    }
    ctx->pc = 0x126F10u;
    // 0x126f10: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126F10u;
    {
        const bool branch_taken_0x126f10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x126F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F10u;
            // 0x126f14: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f10) {
            ctx->pc = 0x126F28u;
            goto label_126f28;
        }
    }
    ctx->pc = 0x126F18u;
    // 0x126f18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x126f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f1c: 0xc04a926  jal         func_12A498
    ctx->pc = 0x126F1Cu;
    SET_GPR_U32(ctx, 31, 0x126F24u);
    ctx->pc = 0x126F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126F1Cu;
            // 0x126f20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F24u; }
        if (ctx->pc != 0x126F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F24u; }
        if (ctx->pc != 0x126F24u) { return; }
    }
    ctx->pc = 0x126F24u;
label_126f24:
    // 0x126f24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x126f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_126f28:
    // 0x126f28: 0x8fad004c  lw          $t5, 0x4C($sp)
    ctx->pc = 0x126f28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x126f2c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x126F2Cu;
    {
        const bool branch_taken_0x126f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F2Cu;
            // 0x126f30: 0xafad0048  sw          $t5, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f2c) {
            ctx->pc = 0x126F74u;
            goto label_126f74;
        }
    }
    ctx->pc = 0x126F34u;
    // 0x126f34: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x126f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126f38: 0xc04a740  jal         func_129D00
    ctx->pc = 0x126F38u;
    SET_GPR_U32(ctx, 31, 0x126F40u);
    ctx->pc = 0x126F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126F38u;
            // 0x126f3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F40u; }
        if (ctx->pc != 0x126F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F40u; }
        if (ctx->pc != 0x126F40u) { return; }
    }
    ctx->pc = 0x126F40u;
label_126f40:
    // 0x126f40: 0x8fae0048  lw          $t6, 0x48($sp)
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f44: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x126f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x126f48: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x126f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x126f4c: 0x8dc60010  lw          $a2, 0x10($t6)
    ctx->pc = 0x126f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x126f50: 0x25c5000c  addiu       $a1, $t6, 0xC
    ctx->pc = 0x126f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x126f54: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x126f54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x126f58: 0xc04a508  jal         func_129420
    ctx->pc = 0x126F58u;
    SET_GPR_U32(ctx, 31, 0x126F60u);
    ctx->pc = 0x126F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126F58u;
            // 0x126f5c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F60u; }
        if (ctx->pc != 0x126F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F60u; }
        if (ctx->pc != 0x126F60u) { return; }
    }
    ctx->pc = 0x126F60u;
label_126f60:
    // 0x126f60: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x126f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x126f64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f68: 0xc04a926  jal         func_12A498
    ctx->pc = 0x126F68u;
    SET_GPR_U32(ctx, 31, 0x126F70u);
    ctx->pc = 0x126F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126F68u;
            // 0x126f6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F70u; }
        if (ctx->pc != 0x126F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F70u; }
        if (ctx->pc != 0x126F70u) { return; }
    }
    ctx->pc = 0x126F70u;
label_126f70:
    // 0x126f70: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x126f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_126f74:
    // 0x126f74: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x126f74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x126f78: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x126f78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126f7c: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x126f7cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x126f80: 0x31f70001  andi        $s7, $t7, 0x1
    ctx->pc = 0x126f80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x126f84: 0xafb70058  sw          $s7, 0x58($sp)
    ctx->pc = 0x126f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 23));
label_126f88:
    // 0x126f88: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126f8c: 0xc04988a  jal         func_126228
    ctx->pc = 0x126F8Cu;
    SET_GPR_U32(ctx, 31, 0x126F94u);
    ctx->pc = 0x126F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126F8Cu;
            // 0x126f90: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126228u;
    if (runtime->hasFunction(0x126228u)) {
        auto targetFn = runtime->lookupFunction(0x126228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F94u; }
        if (ctx->pc != 0x126F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126228_0x126228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126F94u; }
        if (ctx->pc != 0x126F94u) { return; }
    }
    ctx->pc = 0x126F94u;
label_126f94:
    // 0x126f94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f9c: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x126F9Cu;
    SET_GPR_U32(ctx, 31, 0x126FA4u);
    ctx->pc = 0x126FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126F9Cu;
            // 0x126fa0: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FA4u; }
        if (ctx->pc != 0x126FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FA4u; }
        if (ctx->pc != 0x126FA4u) { return; }
    }
    ctx->pc = 0x126FA4u;
label_126fa4:
    // 0x126fa4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x126fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fac: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x126facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x126fb0: 0xc04a998  jal         func_12A660
    ctx->pc = 0x126FB0u;
    SET_GPR_U32(ctx, 31, 0x126FB8u);
    ctx->pc = 0x126FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FB0u;
            // 0x126fb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A660u;
    if (runtime->hasFunction(0x12A660u)) {
        auto targetFn = runtime->lookupFunction(0x12A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FB8u; }
        if (ctx->pc != 0x126FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A660_0x12a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FB8u; }
        if (ctx->pc != 0x126FB8u) { return; }
    }
    ctx->pc = 0x126FB8u;
label_126fb8:
    // 0x126fb8: 0x8c4f000c  lw          $t7, 0xC($v0)
    ctx->pc = 0x126fb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x126fbc: 0x15e00094  bnez        $t7, . + 4 + (0x94 << 2)
    ctx->pc = 0x126FBCu;
    {
        const bool branch_taken_0x126fbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FBCu;
            // 0x126fc0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fbc) {
            ctx->pc = 0x127210u;
            goto label_127210;
        }
    }
    ctx->pc = 0x126FC4u;
    // 0x126fc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc8: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x126FC8u;
    SET_GPR_U32(ctx, 31, 0x126FD0u);
    ctx->pc = 0x126FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FC8u;
            // 0x126fcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FD0u; }
        if (ctx->pc != 0x126FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FD0u; }
        if (ctx->pc != 0x126FD0u) { return; }
    }
    ctx->pc = 0x126FD0u;
label_126fd0:
    // 0x126fd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126fd4:
    // 0x126fd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fd8: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x126FD8u;
    SET_GPR_U32(ctx, 31, 0x126FE0u);
    ctx->pc = 0x126FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FD8u;
            // 0x126fdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FE0u; }
        if (ctx->pc != 0x126FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FE0u; }
        if (ctx->pc != 0x126FE0u) { return; }
    }
    ctx->pc = 0x126FE0u;
label_126fe0:
    // 0x126fe0: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x126FE0u;
    {
        const bool branch_taken_0x126fe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FE0u;
            // 0x126fe4: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fe0) {
            ctx->pc = 0x127088u;
            goto label_127088;
        }
    }
    ctx->pc = 0x126FE8u;
    // 0x126fe8: 0x15e00027  bnez        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x126FE8u;
    {
        const bool branch_taken_0x126fe8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126fe8) {
            ctx->pc = 0x127088u;
            goto label_127088;
        }
    }
    ctx->pc = 0x126FF0u;
    // 0x126ff0: 0x16e00025  bnez        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x126FF0u;
    {
        const bool branch_taken_0x126ff0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FF0u;
            // 0x126ff4: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ff0) {
            ctx->pc = 0x127088u;
            goto label_127088;
        }
    }
    ctx->pc = 0x126FF8u;
    // 0x126ff8: 0x128f0005  beq         $s4, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126FF8u;
    {
        const bool branch_taken_0x126ff8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x126FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FF8u;
            // 0x126ffc: 0x250782a  slt         $t7, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ff8) {
            ctx->pc = 0x127010u;
            goto label_127010;
        }
    }
    ctx->pc = 0x127000u;
    // 0x127000: 0x28fa021  addu        $s4, $s4, $t7
    ctx->pc = 0x127000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
label_127004:
    // 0x127004: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x127004u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
label_127008:
    // 0x127008: 0x1000fe9b  b           . + 4 + (-0x165 << 2)
    ctx->pc = 0x127008u;
    {
        const bool branch_taken_0x127008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127008u;
            // 0x12700c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127008) {
            ctx->pc = 0x126A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a78;
        }
    }
    ctx->pc = 0x127010u;
label_127010:
    // 0x127010: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x127010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_127014:
    // 0x127014: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x127014u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x127018: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x127018u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12701c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12701cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_127020:
    // 0x127020: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x127020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x127024: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x127024u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x127028: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x127028u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x12702c: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x127030: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x127030u;
    {
        const bool branch_taken_0x127030 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x127034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127030u;
            // 0x127034: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127030) {
            ctx->pc = 0x127064u;
            goto label_127064;
        }
    }
    ctx->pc = 0x127038u;
    // 0x127038: 0x240e0039  addiu       $t6, $zero, 0x39
    ctx->pc = 0x127038u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x12703c: 0x8faf0054  lw          $t7, 0x54($sp)
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_127040:
    // 0x127040: 0x12cf000a  beq         $s6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x127040u;
    {
        const bool branch_taken_0x127040 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 15));
        ctx->pc = 0x127044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127040u;
            // 0x127044: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127040) {
            ctx->pc = 0x12706Cu;
            goto label_12706c;
        }
    }
    ctx->pc = 0x127048u;
    // 0x127048: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12704c: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x12704cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x127050: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x127050u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x127054: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x127054u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x127058: 0x11eefff9  beq         $t7, $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x127058u;
    {
        const bool branch_taken_0x127058 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x12705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127058u;
            // 0x12705c: 0x8faf0054  lw          $t7, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127058) {
            ctx->pc = 0x127040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127040;
        }
    }
    ctx->pc = 0x127060u;
    // 0x127060: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_127064:
    // 0x127064: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x127064u;
    {
        const bool branch_taken_0x127064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127064u;
            // 0x127068: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127064) {
            ctx->pc = 0x127008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127008;
        }
    }
    ctx->pc = 0x12706Cu;
label_12706c:
    // 0x12706c: 0x240f0031  addiu       $t7, $zero, 0x31
    ctx->pc = 0x12706cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x127070: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x127074: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x127074u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x127078: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x127078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x12707c: 0x25d60001  addiu       $s6, $t6, 0x1
    ctx->pc = 0x12707cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x127080: 0x1000fe7d  b           . + 4 + (-0x183 << 2)
    ctx->pc = 0x127080u;
    {
        const bool branch_taken_0x127080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127080u;
            // 0x127084: 0xa1cf0000  sb          $t7, 0x0($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127080) {
            ctx->pc = 0x126A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a78;
        }
    }
    ctx->pc = 0x127088u;
label_127088:
    // 0x127088: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x127088u;
    {
        const bool branch_taken_0x127088 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x127088) {
            ctx->pc = 0x1270A8u;
            goto label_1270a8;
        }
    }
    ctx->pc = 0x127090u;
    // 0x127090: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x127090u;
    {
        const bool branch_taken_0x127090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x127094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127090u;
            // 0x127094: 0x8fad0008  lw          $t5, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127090) {
            ctx->pc = 0x127100u;
            goto label_127100;
        }
    }
    ctx->pc = 0x127098u;
    // 0x127098: 0x15a00019  bnez        $t5, . + 4 + (0x19 << 2)
    ctx->pc = 0x127098u;
    {
        const bool branch_taken_0x127098 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127098u;
            // 0x12709c: 0x8fae0058  lw          $t6, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127098) {
            ctx->pc = 0x127100u;
            goto label_127100;
        }
    }
    ctx->pc = 0x1270A0u;
    // 0x1270a0: 0x15c00017  bnez        $t6, . + 4 + (0x17 << 2)
    ctx->pc = 0x1270A0u;
    {
        const bool branch_taken_0x1270a0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1270a0) {
            ctx->pc = 0x127100u;
            goto label_127100;
        }
    }
    ctx->pc = 0x1270A8u;
label_1270a8:
    // 0x1270a8: 0x1a40ffd6  blez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1270A8u;
    {
        const bool branch_taken_0x1270a8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1270ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270A8u;
            // 0x1270ac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270a8) {
            ctx->pc = 0x127004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127004;
        }
    }
    ctx->pc = 0x1270B0u;
    // 0x1270b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1270b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270b4: 0xc04a926  jal         func_12A498
    ctx->pc = 0x1270B4u;
    SET_GPR_U32(ctx, 31, 0x1270BCu);
    ctx->pc = 0x1270B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1270B4u;
            // 0x1270b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270BCu; }
        if (ctx->pc != 0x1270BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270BCu; }
        if (ctx->pc != 0x1270BCu) { return; }
    }
    ctx->pc = 0x1270BCu;
label_1270bc:
    // 0x1270bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1270bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1270c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1270c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270c4: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x1270C4u;
    SET_GPR_U32(ctx, 31, 0x1270CCu);
    ctx->pc = 0x1270C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1270C4u;
            // 0x1270c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270CCu; }
        if (ctx->pc != 0x1270CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270CCu; }
        if (ctx->pc != 0x1270CCu) { return; }
    }
    ctx->pc = 0x1270CCu;
label_1270cc:
    // 0x1270cc: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1270CCu;
    {
        const bool branch_taken_0x1270cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1270cc) {
            ctx->pc = 0x1270D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1270CCu;
            // 0x1270d0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1270ECu;
            goto label_1270ec;
        }
    }
    ctx->pc = 0x1270D4u;
    // 0x1270d4: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1270D4u;
    {
        const bool branch_taken_0x1270d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1270d4) {
            ctx->pc = 0x1270D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1270D4u;
            // 0x1270d8: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127008;
        }
    }
    ctx->pc = 0x1270DCu;
    // 0x1270dc: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x1270dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1270e0: 0x51e0ffc9  beql        $t7, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1270E0u;
    {
        const bool branch_taken_0x1270e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1270e0) {
            ctx->pc = 0x1270E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1270E0u;
            // 0x1270e4: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127008;
        }
    }
    ctx->pc = 0x1270E8u;
    // 0x1270e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1270e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1270ec:
    // 0x1270ec: 0x240f003a  addiu       $t7, $zero, 0x3A
    ctx->pc = 0x1270ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1270f0: 0x128fffc8  beq         $s4, $t7, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1270F0u;
    {
        const bool branch_taken_0x1270f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x1270F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270F0u;
            // 0x1270f4: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270f0) {
            ctx->pc = 0x127014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127014;
        }
    }
    ctx->pc = 0x1270F8u;
    // 0x1270f8: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1270F8u;
    {
        const bool branch_taken_0x1270f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270F8u;
            // 0x1270fc: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270f8) {
            ctx->pc = 0x127008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127008;
        }
    }
    ctx->pc = 0x127100u;
label_127100:
    // 0x127100: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x127100u;
    {
        const bool branch_taken_0x127100 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x127104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127100u;
            // 0x127104: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127100) {
            ctx->pc = 0x127118u;
            goto label_127118;
        }
    }
    ctx->pc = 0x127108u;
    // 0x127108: 0x128fffc1  beq         $s4, $t7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x127108u;
    {
        const bool branch_taken_0x127108 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x12710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127108u;
            // 0x12710c: 0x268f0001  addiu       $t7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127108) {
            ctx->pc = 0x127010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127010;
        }
    }
    ctx->pc = 0x127110u;
    // 0x127110: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x127110u;
    {
        const bool branch_taken_0x127110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127110u;
            // 0x127114: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127110) {
            ctx->pc = 0x127008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127008;
        }
    }
    ctx->pc = 0x127118u;
label_127118:
    // 0x127118: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x127118u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x12711c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12711cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127120: 0x126f0020  beq         $s3, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x127120u;
    {
        const bool branch_taken_0x127120 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x127124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127120u;
            // 0x127124: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127120) {
            ctx->pc = 0x1271A4u;
            goto label_1271a4;
        }
    }
    ctx->pc = 0x127128u;
    // 0x127128: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x127128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12712c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127130: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127134: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x127134u;
    SET_GPR_U32(ctx, 31, 0x12713Cu);
    ctx->pc = 0x127138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127134u;
            // 0x127138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12713Cu; }
        if (ctx->pc != 0x12713Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12713Cu; }
        if (ctx->pc != 0x12713Cu) { return; }
    }
    ctx->pc = 0x12713Cu;
label_12713c:
    // 0x12713c: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x12713cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127140: 0x8fae004c  lw          $t6, 0x4C($sp)
    ctx->pc = 0x127140u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x127144: 0x15ae000a  bne         $t5, $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x127144u;
    {
        const bool branch_taken_0x127144 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x127148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127144u;
            // 0x127148: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127144) {
            ctx->pc = 0x127170u;
            goto label_127170;
        }
    }
    ctx->pc = 0x12714Cu;
    // 0x12714c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x127150: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x127150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127154: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127158: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x127158u;
    SET_GPR_U32(ctx, 31, 0x127160u);
    ctx->pc = 0x12715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127158u;
            // 0x12715c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127160u; }
        if (ctx->pc != 0x127160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127160u; }
        if (ctx->pc != 0x127160u) { return; }
    }
    ctx->pc = 0x127160u;
label_127160:
    // 0x127160: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x127160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x127164: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x127164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_127168:
    // 0x127168: 0x1000ff87  b           . + 4 + (-0x79 << 2)
    ctx->pc = 0x127168u;
    {
        const bool branch_taken_0x127168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127168u;
            // 0x12716c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127168) {
            ctx->pc = 0x126F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126f88;
        }
    }
    ctx->pc = 0x127170u;
label_127170:
    // 0x127170: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x127170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127174: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12717c: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x12717Cu;
    SET_GPR_U32(ctx, 31, 0x127184u);
    ctx->pc = 0x127180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12717Cu;
            // 0x127180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127184u; }
        if (ctx->pc != 0x127184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127184u; }
        if (ctx->pc != 0x127184u) { return; }
    }
    ctx->pc = 0x127184u;
label_127184:
    // 0x127184: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x127184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x127188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12718c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12718cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x127190: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127194: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x127194u;
    SET_GPR_U32(ctx, 31, 0x12719Cu);
    ctx->pc = 0x127198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127194u;
            // 0x127198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12719Cu; }
        if (ctx->pc != 0x12719Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12719Cu; }
        if (ctx->pc != 0x12719Cu) { return; }
    }
    ctx->pc = 0x12719Cu;
label_12719c:
    // 0x12719c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12719Cu;
    {
        const bool branch_taken_0x12719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12719Cu;
            // 0x1271a0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12719c) {
            ctx->pc = 0x127168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127168;
        }
    }
    ctx->pc = 0x1271A4u;
label_1271a4:
    // 0x1271a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1271a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1271a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271ac: 0xc04a926  jal         func_12A498
    ctx->pc = 0x1271ACu;
    SET_GPR_U32(ctx, 31, 0x1271B4u);
    ctx->pc = 0x1271B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1271ACu;
            // 0x1271b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271B4u; }
        if (ctx->pc != 0x1271B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271B4u; }
        if (ctx->pc != 0x1271B4u) { return; }
    }
    ctx->pc = 0x1271B4u;
label_1271b4:
    // 0x1271b4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1271b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271bc: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x1271BCu;
    SET_GPR_U32(ctx, 31, 0x1271C4u);
    ctx->pc = 0x1271C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1271BCu;
            // 0x1271c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271C4u; }
        if (ctx->pc != 0x1271C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271C4u; }
        if (ctx->pc != 0x1271C4u) { return; }
    }
    ctx->pc = 0x1271C4u;
label_1271c4:
    // 0x1271c4: 0x5c40ff96  bgtzl       $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x1271C4u;
    {
        const bool branch_taken_0x1271c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1271c4) {
            ctx->pc = 0x1271C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1271C4u;
            // 0x1271c8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127020;
        }
    }
    ctx->pc = 0x1271CCu;
    // 0x1271cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1271CCu;
    {
        const bool branch_taken_0x1271cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1271CCu;
            // 0x1271d0: 0x240e0030  addiu       $t6, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271cc) {
            ctx->pc = 0x1271E4u;
            goto label_1271e4;
        }
    }
    ctx->pc = 0x1271D4u;
    // 0x1271d4: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x1271d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1271d8: 0x55e0ff91  bnel        $t7, $zero, . + 4 + (-0x6F << 2)
    ctx->pc = 0x1271D8u;
    {
        const bool branch_taken_0x1271d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1271d8) {
            ctx->pc = 0x1271DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1271D8u;
            // 0x1271dc: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127020;
        }
    }
    ctx->pc = 0x1271E0u;
    // 0x1271e0: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1271e4:
    // 0x1271e4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1271e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1271e8:
    // 0x1271e8: 0x82cf0000  lb          $t7, 0x0($s6)
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1271ec: 0x0  nop
    ctx->pc = 0x1271ecu;
    // NOP
    // 0x1271f0: 0x0  nop
    ctx->pc = 0x1271f0u;
    // NOP
    // 0x1271f4: 0x0  nop
    ctx->pc = 0x1271f4u;
    // NOP
    // 0x1271f8: 0x0  nop
    ctx->pc = 0x1271f8u;
    // NOP
    // 0x1271fc: 0x51eefffa  beql        $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1271FCu;
    {
        const bool branch_taken_0x1271fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x1271fc) {
            ctx->pc = 0x127200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1271FCu;
            // 0x127200: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1271E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1271e8;
        }
    }
    ctx->pc = 0x127204u;
    // 0x127204: 0x1000fe1c  b           . + 4 + (-0x1E4 << 2)
    ctx->pc = 0x127204u;
    {
        const bool branch_taken_0x127204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127204u;
            // 0x127208: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127204) {
            ctx->pc = 0x126A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a78;
        }
    }
    ctx->pc = 0x12720Cu;
    // 0x12720c: 0x0  nop
    ctx->pc = 0x12720cu;
    // NOP
label_127210:
    // 0x127210: 0x1000ff70  b           . + 4 + (-0x90 << 2)
    ctx->pc = 0x127210u;
    {
        const bool branch_taken_0x127210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127210u;
            // 0x127214: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127210) {
            ctx->pc = 0x126FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126fd4;
        }
    }
    ctx->pc = 0x127218u;
label_127218:
    // 0x127218: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x127218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12721c: 0xc04988a  jal         func_126228
    ctx->pc = 0x12721Cu;
    SET_GPR_U32(ctx, 31, 0x127224u);
    ctx->pc = 0x127220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12721Cu;
            // 0x127220: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126228u;
    if (runtime->hasFunction(0x126228u)) {
        auto targetFn = runtime->lookupFunction(0x126228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127224u; }
        if (ctx->pc != 0x127224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126228_0x126228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127224u; }
        if (ctx->pc != 0x127224u) { return; }
    }
    ctx->pc = 0x127224u;
label_127224:
    // 0x127224: 0x2c0702d  daddu       $t6, $s6, $zero
    ctx->pc = 0x127224u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127228: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x127228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12722c: 0xa1d40000  sb          $s4, 0x0($t6)
    ctx->pc = 0x12722cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x127230: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x127230u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127234: 0x26d782a  slt         $t7, $s3, $t5
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x127238: 0x11e0ffda  beqz        $t7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x127238u;
    {
        const bool branch_taken_0x127238 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127238u;
            // 0x12723c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127238) {
            ctx->pc = 0x1271A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1271a4;
        }
    }
    ctx->pc = 0x127240u;
    // 0x127240: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x127240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x127244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127248: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12724c: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x12724Cu;
    SET_GPR_U32(ctx, 31, 0x127254u);
    ctx->pc = 0x127250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12724Cu;
            // 0x127250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127254u; }
        if (ctx->pc != 0x127254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127254u; }
        if (ctx->pc != 0x127254u) { return; }
    }
    ctx->pc = 0x127254u;
label_127254:
    // 0x127254: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x127254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x127258: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x127258u;
    {
        const bool branch_taken_0x127258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127258u;
            // 0x12725c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127258) {
            ctx->pc = 0x127218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127218;
        }
    }
    ctx->pc = 0x127260u;
label_127260:
    // 0x127260: 0x11e0feea  beqz        $t7, . + 4 + (-0x116 << 2)
    ctx->pc = 0x127260u;
    {
        const bool branch_taken_0x127260 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127260u;
            // 0x127264: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127260) {
            ctx->pc = 0x126E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e0c;
        }
    }
    ctx->pc = 0x127268u;
    // 0x127268: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x127268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x12726c: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x12726cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127270: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x127270u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x127274: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x127274u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x127278: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x127278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    // 0x12727c: 0x1000fee2  b           . + 4 + (-0x11E << 2)
    ctx->pc = 0x12727Cu;
    {
        const bool branch_taken_0x12727c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12727Cu;
            // 0x127280: 0xafae0018  sw          $t6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12727c) {
            ctx->pc = 0x126E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e08;
        }
    }
    ctx->pc = 0x127284u;
label_127284:
    // 0x127284: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x127284u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x127288: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x127288u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12728c: 0x1000fed1  b           . + 4 + (-0x12F << 2)
    ctx->pc = 0x12728Cu;
    {
        const bool branch_taken_0x12728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12728Cu;
            // 0x127290: 0x31f3001f  andi        $s3, $t7, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12728c) {
            ctx->pc = 0x126DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126dd4;
        }
    }
    ctx->pc = 0x127294u;
label_127294:
    // 0x127294: 0x1000fea4  b           . + 4 + (-0x15C << 2)
    ctx->pc = 0x127294u;
    {
        const bool branch_taken_0x127294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127294u;
            // 0x127298: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127294) {
            ctx->pc = 0x126D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d28;
        }
    }
    ctx->pc = 0x12729Cu;
label_12729c:
    // 0x12729c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12729cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1272a0: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x1272a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272a4: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x1272a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1272a8: 0x1b0782a  slt         $t7, $t5, $s0
    ctx->pc = 0x1272a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1272ac: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1272ACu;
    {
        const bool branch_taken_0x1272ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1272ACu;
            // 0x1272b0: 0x1b09023  subu        $s2, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272ac) {
            ctx->pc = 0x1272D0u;
            goto label_1272d0;
        }
    }
    ctx->pc = 0x1272B4u;
    // 0x1272b4: 0x8fae0040  lw          $t6, 0x40($sp)
    ctx->pc = 0x1272b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1272b8: 0x20d8023  subu        $s0, $s0, $t5
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1272bc: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x1272bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x1272c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1272c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272c4: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x1272c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x1272c8: 0xafad001c  sw          $t5, 0x1C($sp)
    ctx->pc = 0x1272c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
    // 0x1272cc: 0xafae0040  sw          $t6, 0x40($sp)
    ctx->pc = 0x1272ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 14));
label_1272d0:
    // 0x1272d0: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x1272d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1272d4: 0x661fe65  bgez        $s3, . + 4 + (-0x19B << 2)
    ctx->pc = 0x1272D4u;
    {
        const bool branch_taken_0x1272d4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1272D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1272D4u;
            // 0x1272d8: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272d4) {
            ctx->pc = 0x126C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126c6c;
        }
    }
    ctx->pc = 0x1272DCu;
    // 0x1272dc: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x1272dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1272e0: 0x1f38823  subu        $s1, $t7, $s3
    ctx->pc = 0x1272e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x1272e4: 0x1000fe61  b           . + 4 + (-0x19F << 2)
    ctx->pc = 0x1272E4u;
    {
        const bool branch_taken_0x1272e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1272E4u;
            // 0x1272e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272e4) {
            ctx->pc = 0x126C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126c6c;
        }
    }
    ctx->pc = 0x1272ECu;
label_1272ec:
    // 0x1272ec: 0x8fae0038  lw          $t6, 0x38($sp)
    ctx->pc = 0x1272ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1272f0: 0x11c00036  beqz        $t6, . + 4 + (0x36 << 2)
    ctx->pc = 0x1272F0u;
    {
        const bool branch_taken_0x1272f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1272F0u;
            // 0x1272f4: 0x8faf0020  lw          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272f0) {
            ctx->pc = 0x1273CCu;
            goto label_1273cc;
        }
    }
    ctx->pc = 0x1272F8u;
    // 0x1272f8: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x1272f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1272fc: 0x4257c  dsll32      $a0, $a0, 21
    ctx->pc = 0x1272fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 21));
    // 0x127300: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127304: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x127304u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x127308: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12730c: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x12730cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x127310: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x127310u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x127314: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x127314u;
    SET_GPR_U32(ctx, 31, 0x12731Cu);
    ctx->pc = 0x127318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127314u;
            // 0x127318: 0xddc5fff8  ld          $a1, -0x8($t6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 4294967288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12731Cu; }
        if (ctx->pc != 0x12731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12731Cu; }
        if (ctx->pc != 0x12731Cu) { return; }
    }
    ctx->pc = 0x12731Cu;
label_12731c:
    // 0x12731c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127320: 0xc049622  jal         func_125888
    ctx->pc = 0x127320u;
    SET_GPR_U32(ctx, 31, 0x127328u);
    ctx->pc = 0x127324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127320u;
            // 0x127324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127328u; }
        if (ctx->pc != 0x127328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127328u; }
        if (ctx->pc != 0x127328u) { return; }
    }
    ctx->pc = 0x127328u;
label_127328:
    // 0x127328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12732c: 0x0  nop
    ctx->pc = 0x12732cu;
    // NOP
label_127330:
    // 0x127330: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x127330u;
    SET_GPR_U32(ctx, 31, 0x127338u);
    ctx->pc = 0x127334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127330u;
            // 0x127334: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127338u; }
        if (ctx->pc != 0x127338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127338u; }
        if (ctx->pc != 0x127338u) { return; }
    }
    ctx->pc = 0x127338u;
label_127338:
    // 0x127338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12733c: 0xc049776  jal         func_125DD8
    ctx->pc = 0x12733Cu;
    SET_GPR_U32(ctx, 31, 0x127344u);
    ctx->pc = 0x127340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12733Cu;
            // 0x127340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127344u; }
        if (ctx->pc != 0x127344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127344u; }
        if (ctx->pc != 0x127344u) { return; }
    }
    ctx->pc = 0x127344u;
label_127344:
    // 0x127344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127348: 0xc049622  jal         func_125888
    ctx->pc = 0x127348u;
    SET_GPR_U32(ctx, 31, 0x127350u);
    ctx->pc = 0x12734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127348u;
            // 0x12734c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127350u; }
        if (ctx->pc != 0x127350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127350u; }
        if (ctx->pc != 0x127350u) { return; }
    }
    ctx->pc = 0x127350u;
label_127350:
    // 0x127350: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x127350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x127354: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x127354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127358: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x127358u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12735c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12735cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127360: 0xc049760  jal         func_125D80
    ctx->pc = 0x127360u;
    SET_GPR_U32(ctx, 31, 0x127368u);
    ctx->pc = 0x127364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127360u;
            // 0x127364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127368u; }
        if (ctx->pc != 0x127368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127368u; }
        if (ctx->pc != 0x127368u) { return; }
    }
    ctx->pc = 0x127368u;
label_127368:
    // 0x127368: 0x440fdd3  bltz        $v0, . + 4 + (-0x22D << 2)
    ctx->pc = 0x127368u;
    {
        const bool branch_taken_0x127368 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127368u;
            // 0x12736c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127368) {
            ctx->pc = 0x126AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126ab8;
        }
    }
    ctx->pc = 0x127370u;
    // 0x127370: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x127370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x127374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127378: 0xc049622  jal         func_125888
    ctx->pc = 0x127378u;
    SET_GPR_U32(ctx, 31, 0x127380u);
    ctx->pc = 0x12737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127378u;
            // 0x12737c: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127380u; }
        if (ctx->pc != 0x127380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127380u; }
        if (ctx->pc != 0x127380u) { return; }
    }
    ctx->pc = 0x127380u;
label_127380:
    // 0x127380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127384: 0xc049760  jal         func_125D80
    ctx->pc = 0x127384u;
    SET_GPR_U32(ctx, 31, 0x12738Cu);
    ctx->pc = 0x127388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127384u;
            // 0x127388: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12738Cu; }
        if (ctx->pc != 0x12738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12738Cu; }
        if (ctx->pc != 0x12738Cu) { return; }
    }
    ctx->pc = 0x12738Cu;
label_12738c:
    // 0x12738c: 0x440fdfd  bltz        $v0, . + 4 + (-0x203 << 2)
    ctx->pc = 0x12738Cu;
    {
        const bool branch_taken_0x12738c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x127390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12738Cu;
            // 0x127390: 0x8fad0020  lw          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12738c) {
            ctx->pc = 0x126B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126b84;
        }
    }
    ctx->pc = 0x127394u;
    // 0x127394: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x127394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x127398: 0x26d782a  slt         $t7, $s3, $t5
    ctx->pc = 0x127398u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12739c: 0x11e0fd8d  beqz        $t7, . + 4 + (-0x273 << 2)
    ctx->pc = 0x12739Cu;
    {
        const bool branch_taken_0x12739c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12739Cu;
            // 0x1273a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12739c) {
            ctx->pc = 0x1269D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1269d4;
        }
    }
    ctx->pc = 0x1273A4u;
    // 0x1273a4: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x1273a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x1273a8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1273A8u;
    SET_GPR_U32(ctx, 31, 0x1273B0u);
    ctx->pc = 0x1273ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273A8u;
            // 0x1273ac: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273B0u; }
        if (ctx->pc != 0x1273B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273B0u; }
        if (ctx->pc != 0x1273B0u) { return; }
    }
    ctx->pc = 0x1273B0u;
label_1273b0:
    // 0x1273b0: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x1273b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x1273b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1273b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1273b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273bc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1273BCu;
    SET_GPR_U32(ctx, 31, 0x1273C4u);
    ctx->pc = 0x1273C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273BCu;
            // 0x1273c0: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273C4u; }
        if (ctx->pc != 0x1273C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273C4u; }
        if (ctx->pc != 0x1273C4u) { return; }
    }
    ctx->pc = 0x1273C4u;
label_1273c4:
    // 0x1273c4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1273C4u;
    {
        const bool branch_taken_0x1273c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273C4u;
            // 0x1273c8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273c4) {
            ctx->pc = 0x127330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127330;
        }
    }
    ctx->pc = 0x1273CCu;
label_1273cc:
    // 0x1273cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1273ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1273d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273d4: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x1273d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1273d8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1273d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1273dc: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x1273dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x1273e0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1273e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1273e4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1273E4u;
    SET_GPR_U32(ctx, 31, 0x1273ECu);
    ctx->pc = 0x1273E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273E4u;
            // 0x1273e8: 0xddc4fff8  ld          $a0, -0x8($t6) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 4294967288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273ECu; }
        if (ctx->pc != 0x1273ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273ECu; }
        if (ctx->pc != 0x1273ECu) { return; }
    }
    ctx->pc = 0x1273ECu;
label_1273ec:
    // 0x1273ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1273ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1273f0:
    // 0x1273f0: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x1273F0u;
    SET_GPR_U32(ctx, 31, 0x1273F8u);
    ctx->pc = 0x1273F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273F0u;
            // 0x1273f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273F8u; }
        if (ctx->pc != 0x1273F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273F8u; }
        if (ctx->pc != 0x1273F8u) { return; }
    }
    ctx->pc = 0x1273F8u;
label_1273f8:
    // 0x1273f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1273f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273fc: 0xc049776  jal         func_125DD8
    ctx->pc = 0x1273FCu;
    SET_GPR_U32(ctx, 31, 0x127404u);
    ctx->pc = 0x127400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273FCu;
            // 0x127400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127404u; }
        if (ctx->pc != 0x127404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127404u; }
        if (ctx->pc != 0x127404u) { return; }
    }
    ctx->pc = 0x127404u;
label_127404:
    // 0x127404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127408: 0xc049622  jal         func_125888
    ctx->pc = 0x127408u;
    SET_GPR_U32(ctx, 31, 0x127410u);
    ctx->pc = 0x12740Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127408u;
            // 0x12740c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127410u; }
        if (ctx->pc != 0x127410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127410u; }
        if (ctx->pc != 0x127410u) { return; }
    }
    ctx->pc = 0x127410u;
label_127410:
    // 0x127410: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x127410u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x127414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x127414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127418: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x127418u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12741c: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127420: 0x166d001d  bne         $s3, $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x127420u;
    {
        const bool branch_taken_0x127420 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x127424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127420u;
            // 0x127424: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127420) {
            ctx->pc = 0x127498u;
            goto label_127498;
        }
    }
    ctx->pc = 0x127428u;
    // 0x127428: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x127428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12742c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12742cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127430: 0x10857c  dsll32      $s0, $s0, 21
    ctx->pc = 0x127430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 21));
    // 0x127434: 0xc04960a  jal         func_125828
    ctx->pc = 0x127434u;
    SET_GPR_U32(ctx, 31, 0x12743Cu);
    ctx->pc = 0x127438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127434u;
            // 0x127438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12743Cu; }
        if (ctx->pc != 0x12743Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12743Cu; }
        if (ctx->pc != 0x12743Cu) { return; }
    }
    ctx->pc = 0x12743Cu;
label_12743c:
    // 0x12743c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127440: 0xc049760  jal         func_125D80
    ctx->pc = 0x127440u;
    SET_GPR_U32(ctx, 31, 0x127448u);
    ctx->pc = 0x127444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127440u;
            // 0x127444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127448u; }
        if (ctx->pc != 0x127448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127448u; }
        if (ctx->pc != 0x127448u) { return; }
    }
    ctx->pc = 0x127448u;
label_127448:
    // 0x127448: 0x440fdce  bltz        $v0, . + 4 + (-0x232 << 2)
    ctx->pc = 0x127448u;
    {
        const bool branch_taken_0x127448 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127448u;
            // 0x12744c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127448) {
            ctx->pc = 0x126B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126b84;
        }
    }
    ctx->pc = 0x127450u;
    // 0x127450: 0xc049622  jal         func_125888
    ctx->pc = 0x127450u;
    SET_GPR_U32(ctx, 31, 0x127458u);
    ctx->pc = 0x127454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127450u;
            // 0x127454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127458u; }
        if (ctx->pc != 0x127458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127458u; }
        if (ctx->pc != 0x127458u) { return; }
    }
    ctx->pc = 0x127458u;
label_127458:
    // 0x127458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12745c: 0xc049760  jal         func_125D80
    ctx->pc = 0x12745Cu;
    SET_GPR_U32(ctx, 31, 0x127464u);
    ctx->pc = 0x127460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12745Cu;
            // 0x127460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127464u; }
        if (ctx->pc != 0x127464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127464u; }
        if (ctx->pc != 0x127464u) { return; }
    }
    ctx->pc = 0x127464u;
label_127464:
    // 0x127464: 0x441fd5b  bgez        $v0, . + 4 + (-0x2A5 << 2)
    ctx->pc = 0x127464u;
    {
        const bool branch_taken_0x127464 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x127468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127464u;
            // 0x127468: 0x240e0030  addiu       $t6, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127464) {
            ctx->pc = 0x1269D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1269d4;
        }
    }
    ctx->pc = 0x12746Cu;
    // 0x12746c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_127470:
    // 0x127470: 0x82cf0000  lb          $t7, 0x0($s6)
    ctx->pc = 0x127470u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x127474: 0x0  nop
    ctx->pc = 0x127474u;
    // NOP
    // 0x127478: 0x0  nop
    ctx->pc = 0x127478u;
    // NOP
    // 0x12747c: 0x0  nop
    ctx->pc = 0x12747cu;
    // NOP
    // 0x127480: 0x0  nop
    ctx->pc = 0x127480u;
    // NOP
    // 0x127484: 0x51eefffa  beql        $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127484u;
    {
        const bool branch_taken_0x127484 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x127484) {
            ctx->pc = 0x127488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127484u;
            // 0x127488: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127470;
        }
    }
    ctx->pc = 0x12748Cu;
    // 0x12748c: 0x1000fd8a  b           . + 4 + (-0x276 << 2)
    ctx->pc = 0x12748Cu;
    {
        const bool branch_taken_0x12748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12748Cu;
            // 0x127490: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12748c) {
            ctx->pc = 0x126AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126ab8;
        }
    }
    ctx->pc = 0x127494u;
    // 0x127494: 0x0  nop
    ctx->pc = 0x127494u;
    // NOP
label_127498:
    // 0x127498: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x127498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x12749c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12749cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274a0: 0x424bc  dsll32      $a0, $a0, 18
    ctx->pc = 0x1274a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    // 0x1274a4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1274A4u;
    SET_GPR_U32(ctx, 31, 0x1274ACu);
    ctx->pc = 0x1274A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1274A4u;
            // 0x1274a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1274ACu; }
        if (ctx->pc != 0x1274ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1274ACu; }
        if (ctx->pc != 0x1274ACu) { return; }
    }
    ctx->pc = 0x1274ACu;
label_1274ac:
    // 0x1274ac: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1274ACu;
    {
        const bool branch_taken_0x1274ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274ACu;
            // 0x1274b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274ac) {
            ctx->pc = 0x1273F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1273f0;
        }
    }
    ctx->pc = 0x1274B4u;
label_1274b4:
    // 0x1274b4: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1274b8: 0xe9023  negu        $s2, $t6
    ctx->pc = 0x1274b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x1274bc: 0x1240fd0b  beqz        $s2, . + 4 + (-0x2F5 << 2)
    ctx->pc = 0x1274BCu;
    {
        const bool branch_taken_0x1274bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274BCu;
            // 0x1274c0: 0x324e000f  andi        $t6, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274bc) {
            ctx->pc = 0x1268ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1268ec;
        }
    }
    ctx->pc = 0x1274C4u;
    // 0x1274c4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1274c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1274c8: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x1274c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x1274cc: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x1274ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x1274d0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1274d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1274d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1274d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274d8: 0xddc40000  ld          $a0, 0x0($t6)
    ctx->pc = 0x1274d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1274dc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1274DCu;
    SET_GPR_U32(ctx, 31, 0x1274E4u);
    ctx->pc = 0x1274E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1274DCu;
            // 0x1274e0: 0x128103  sra         $s0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1274E4u; }
        if (ctx->pc != 0x1274E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1274E4u; }
        if (ctx->pc != 0x1274E4u) { return; }
    }
    ctx->pc = 0x1274E4u;
label_1274e4:
    // 0x1274e4: 0x1200fd01  beqz        $s0, . + 4 + (-0x2FF << 2)
    ctx->pc = 0x1274E4u;
    {
        const bool branch_taken_0x1274e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274E4u;
            // 0x1274e8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274e4) {
            ctx->pc = 0x1268ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1268ec;
        }
    }
    ctx->pc = 0x1274ECu;
    // 0x1274ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1274ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274f0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1274f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1274f4: 0x25f00a40  addiu       $s0, $t7, 0xA40
    ctx->pc = 0x1274f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 2624));
label_1274f8:
    // 0x1274f8: 0x324f0001  andi        $t7, $s2, 0x1
    ctx->pc = 0x1274f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1274fc: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1274FCu;
    {
        const bool branch_taken_0x1274fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274FCu;
            // 0x127500: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274fc) {
            ctx->pc = 0x127514u;
            goto label_127514;
        }
    }
    ctx->pc = 0x127504u;
    // 0x127504: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x127504u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x127508: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x127508u;
    SET_GPR_U32(ctx, 31, 0x127510u);
    ctx->pc = 0x12750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127508u;
            // 0x12750c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127510u; }
        if (ctx->pc != 0x127510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127510u; }
        if (ctx->pc != 0x127510u) { return; }
    }
    ctx->pc = 0x127510u;
label_127510:
    // 0x127510: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x127510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127514:
    // 0x127514: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x127514u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x127518: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127518u;
    {
        const bool branch_taken_0x127518 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127518u;
            // 0x12751c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127518) {
            ctx->pc = 0x1274F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1274f8;
        }
    }
    ctx->pc = 0x127520u;
    // 0x127520: 0x1000fcf3  b           . + 4 + (-0x30D << 2)
    ctx->pc = 0x127520u;
    {
        const bool branch_taken_0x127520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127520u;
            // 0x127524: 0x8faf0034  lw          $t7, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127520) {
            ctx->pc = 0x1268F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1268f0;
        }
    }
    ctx->pc = 0x127528u;
label_127528:
    // 0x127528: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x127528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_12752c:
    // 0x12752c: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x12752cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127530: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x127530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127534: 0xe782a  slt         $t7, $zero, $t6
    ctx->pc = 0x127534u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x127538: 0x1cf980b  movn        $s3, $t6, $t7
    ctx->pc = 0x127538u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 14));
    // 0x12753c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x12753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x127540: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x127540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x127544: 0x1000fca9  b           . + 4 + (-0x357 << 2)
    ctx->pc = 0x127544u;
    {
        const bool branch_taken_0x127544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127544u;
            // 0x127548: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127544) {
            ctx->pc = 0x1267ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1267ec;
        }
    }
    ctx->pc = 0x12754Cu;
label_12754c:
    // 0x12754c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x12754cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_127550:
    // 0x127550: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x127550u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127554: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x127554u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127558: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x127558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x12755c: 0x25f30001  addiu       $s3, $t7, 0x1
    ctx->pc = 0x12755cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x127560: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x127560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x127564: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x127564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x127568: 0x13702a  slt         $t6, $zero, $s3
    ctx->pc = 0x127568u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12756c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12756cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127570: 0x1000fc9e  b           . + 4 + (-0x362 << 2)
    ctx->pc = 0x127570u;
    {
        const bool branch_taken_0x127570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127570u;
            // 0x127574: 0x1ee980a  movz        $s3, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127570) {
            ctx->pc = 0x1267ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1267ec;
        }
    }
    ctx->pc = 0x127578u;
label_127578:
    // 0x127578: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12757c: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x12757cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127580: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x127580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x127584: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x127588: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x127588u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12758c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x12758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
    // 0x127590: 0x1000fc7a  b           . + 4 + (-0x386 << 2)
    ctx->pc = 0x127590u;
    {
        const bool branch_taken_0x127590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127590u;
            // 0x127594: 0xafad001c  sw          $t5, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127590) {
            ctx->pc = 0x12677Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12677c;
        }
    }
    ctx->pc = 0x127598u;
label_127598:
    // 0x127598: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x127598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x12759c: 0x1000fc70  b           . + 4 + (-0x390 << 2)
    ctx->pc = 0x12759Cu;
    {
        const bool branch_taken_0x12759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12759Cu;
            // 0x1275a0: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12759c) {
            ctx->pc = 0x126760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126760;
        }
    }
    ctx->pc = 0x1275A4u;
label_1275a4:
    // 0x1275a4: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1275a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1275a8: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1275a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1275ac: 0x24f6821  addu        $t5, $s2, $t7
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x1275b0: 0x25b30432  addiu       $s3, $t5, 0x432
    ctx->pc = 0x1275b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 1074));
    // 0x1275b4: 0x2a6f0021  slti        $t7, $s3, 0x21
    ctx->pc = 0x1275b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1275b8: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1275B8u;
    {
        const bool branch_taken_0x1275b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1275BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1275B8u;
            // 0x1275bc: 0x14703c  dsll32      $t6, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275b8) {
            ctx->pc = 0x127628u;
            goto label_127628;
        }
    }
    ctx->pc = 0x1275C0u;
    // 0x1275c0: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x1275c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1275c4: 0x25ad0412  addiu       $t5, $t5, 0x412
    ctx->pc = 0x1275c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1042));
    // 0x1275c8: 0x137023  negu        $t6, $s3
    ctx->pc = 0x1275c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1275cc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1275ccu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1275d0: 0x1d07004  sllv        $t6, $s0, $t6
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 14) & 0x1F));
    // 0x1275d4: 0x1af7806  srlv        $t7, $t7, $t5
    ctx->pc = 0x1275d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x1275d8: 0x1cf8025  or          $s0, $t6, $t7
    ctx->pc = 0x1275d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_1275dc:
    // 0x1275dc: 0xc049776  jal         func_125DD8
    ctx->pc = 0x1275DCu;
    SET_GPR_U32(ctx, 31, 0x1275E4u);
    ctx->pc = 0x1275E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1275DCu;
            // 0x1275e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275E4u; }
        if (ctx->pc != 0x1275E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275E4u; }
        if (ctx->pc != 0x1275E4u) { return; }
    }
    ctx->pc = 0x1275E4u;
label_1275e4:
    // 0x1275e4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1275E4u;
    {
        const bool branch_taken_0x1275e4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1275E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1275E4u;
            // 0x1275e8: 0x3c0ffe10  lui         $t7, 0xFE10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65040 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275e4) {
            ctx->pc = 0x127600u;
            goto label_127600;
        }
    }
    ctx->pc = 0x1275ECu;
    // 0x1275ec: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x1275ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x1275f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1275f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275f4: 0xc04960a  jal         func_125828
    ctx->pc = 0x1275F4u;
    SET_GPR_U32(ctx, 31, 0x1275FCu);
    ctx->pc = 0x1275F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1275F4u;
            // 0x1275f8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275FCu; }
        if (ctx->pc != 0x1275FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275FCu; }
        if (ctx->pc != 0x1275FCu) { return; }
    }
    ctx->pc = 0x1275FCu;
label_1275fc:
    // 0x1275fc: 0x3c0ffe10  lui         $t7, 0xFE10
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65040 << 16));
label_127600:
    // 0x127600: 0x2703f  dsra32      $t6, $v0, 0
    ctx->pc = 0x127600u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x127604: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x127604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x127608: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x127608u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12760c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127610: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x127610u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x127614: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x127614u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x127618: 0xafaf0044  sw          $t7, 0x44($sp)
    ctx->pc = 0x127618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 15));
    // 0x12761c: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x12761cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x127620: 0x1000fc0f  b           . + 4 + (-0x3F1 << 2)
    ctx->pc = 0x127620u;
    {
        const bool branch_taken_0x127620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127620u;
            // 0x127624: 0x2eeb825  or          $s7, $s7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127620) {
            ctx->pc = 0x126660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126660;
        }
    }
    ctx->pc = 0x127628u;
label_127628:
    // 0x127628: 0x137823  negu        $t7, $s3
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x12762c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12762cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x127630: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x127630u;
    {
        const bool branch_taken_0x127630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127630u;
            // 0x127634: 0x1ee8004  sllv        $s0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127630) {
            ctx->pc = 0x1275DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1275dc;
        }
    }
    ctx->pc = 0x127638u;
}
