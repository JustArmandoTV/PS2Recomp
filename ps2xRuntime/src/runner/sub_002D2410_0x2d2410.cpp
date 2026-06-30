#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2410
// Address: 0x2d2410 - 0x2d2860
void sub_002D2410_0x2d2410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2410_0x2d2410");
#endif

    switch (ctx->pc) {
        case 0x2d248cu: goto label_2d248c;
        case 0x2d2494u: goto label_2d2494;
        case 0x2d2510u: goto label_2d2510;
        case 0x2d2538u: goto label_2d2538;
        case 0x2d25a0u: goto label_2d25a0;
        case 0x2d25e4u: goto label_2d25e4;
        case 0x2d25f8u: goto label_2d25f8;
        case 0x2d2698u: goto label_2d2698;
        case 0x2d26f4u: goto label_2d26f4;
        case 0x2d279cu: goto label_2d279c;
        case 0x2d27fcu: goto label_2d27fc;
        case 0x2d282cu: goto label_2d282c;
        default: break;
    }

    ctx->pc = 0x2d2410u;

    // 0x2d2410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d2410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d2414: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d2418: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d2418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d241c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d2420: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d2420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d2424: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d2424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d242c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d242cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2434: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d2434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d243c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d243cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2440: 0x128000fc  beqz        $s4, . + 4 + (0xFC << 2)
    ctx->pc = 0x2D2440u;
    {
        const bool branch_taken_0x2d2440 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2440u;
            // 0x2d2444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2440) {
            ctx->pc = 0x2D2834u;
            goto label_2d2834;
        }
    }
    ctx->pc = 0x2D2448u;
    // 0x2d2448: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d244c: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x2d244cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2d2450: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2450u;
    {
        const bool branch_taken_0x2d2450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2450) {
            ctx->pc = 0x2D2474u;
            goto label_2d2474;
        }
    }
    ctx->pc = 0x2D2458u;
    // 0x2d2458: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x2d2458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x2d245c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2d245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d2460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d2460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d2464: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2d2464u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d2468: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2d2468u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d246c: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D246Cu;
    {
        const bool branch_taken_0x2d246c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d246c) {
            ctx->pc = 0x2D2470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D246Cu;
            // 0x2d2470: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2498u;
            goto label_2d2498;
        }
    }
    ctx->pc = 0x2D2474u;
label_2d2474:
    // 0x2d2474: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d2474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d2478: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d2478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d247c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d2480: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d2484: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D2484u;
    SET_GPR_U32(ctx, 31, 0x2D248Cu);
    ctx->pc = 0x2D2488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2484u;
            // 0x2d2488: 0x24a51790  addiu       $a1, $a1, 0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D248Cu; }
        if (ctx->pc != 0x2D248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D248Cu; }
        if (ctx->pc != 0x2D248Cu) { return; }
    }
    ctx->pc = 0x2D248Cu;
label_2d248c:
    // 0x2d248c: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D248Cu;
    SET_GPR_U32(ctx, 31, 0x2D2494u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2494u; }
        if (ctx->pc != 0x2D2494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2494u; }
        if (ctx->pc != 0x2D2494u) { return; }
    }
    ctx->pc = 0x2D2494u;
label_2d2494:
    // 0x2d2494: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2d2494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2d2498:
    // 0x2d2498: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2d2498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d249c: 0x948021  addu        $s0, $a0, $s4
    ctx->pc = 0x2d249cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2d24a0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x2d24a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d24a4: 0x54200030  bnel        $at, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D24A4u;
    {
        const bool branch_taken_0x2d24a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d24a4) {
            ctx->pc = 0x2D24A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D24A4u;
            // 0x2d24a8: 0x8eb1000c  lw          $s1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2568u;
            goto label_2d2568;
        }
    }
    ctx->pc = 0x2D24ACu;
    // 0x2d24ac: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2d24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2d24b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d24b4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2d24b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d24b8: 0xb21823  subu        $v1, $a1, $s2
    ctx->pc = 0x2d24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2d24bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D24BCu;
    {
        const bool branch_taken_0x2d24bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D24C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D24BCu;
            // 0x2d24c0: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24bc) {
            ctx->pc = 0x2D24CCu;
            goto label_2d24cc;
        }
    }
    ctx->pc = 0x2D24C4u;
    // 0x2d24c4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2d24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d24c8: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2d24c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_2d24cc:
    // 0x2d24cc: 0x941823  subu        $v1, $a0, $s4
    ctx->pc = 0x2d24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2d24d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d24d4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2d24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d24d8: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x2d24d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d24dc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D24DCu;
    {
        const bool branch_taken_0x2d24dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d24dc) {
            ctx->pc = 0x2D24F8u;
            goto label_2d24f8;
        }
    }
    ctx->pc = 0x2D24E4u;
    // 0x2d24e4: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x2d24e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d24e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D24E8u;
    {
        const bool branch_taken_0x2d24e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24e8) {
            ctx->pc = 0x2D24F8u;
            goto label_2d24f8;
        }
    }
    ctx->pc = 0x2D24F0u;
    // 0x2d24f0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2d24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d24f4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2d24f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2d24f8:
    // 0x2d24f8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D24F8u;
    {
        const bool branch_taken_0x2d24f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24f8) {
            ctx->pc = 0x2D2530u;
            goto label_2d2530;
        }
    }
    ctx->pc = 0x2D2500u;
    // 0x2d2500: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2d2500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d2504: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x2d2504u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d2508: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2508u;
    {
        const bool branch_taken_0x2d2508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2508u;
            // 0x2d250c: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2508) {
            ctx->pc = 0x2D2530u;
            goto label_2d2530;
        }
    }
    ctx->pc = 0x2D2510u;
label_2d2510:
    // 0x2d2510: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2d2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x2d2514: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2d2514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2d2518: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d2518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d251c: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x2d251cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d2520: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d2520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d2524: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D2524u;
    {
        const bool branch_taken_0x2d2524 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2524) {
            ctx->pc = 0x2D2510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2510;
        }
    }
    ctx->pc = 0x2D252Cu;
    // 0x2d252c: 0x0  nop
    ctx->pc = 0x2d252cu;
    // NOP
label_2d2530:
    // 0x2d2530: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2530u;
    {
        const bool branch_taken_0x2d2530 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2530u;
            // 0x2d2534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2530) {
            ctx->pc = 0x2D2558u;
            goto label_2d2558;
        }
    }
    ctx->pc = 0x2D2538u;
label_2d2538:
    // 0x2d2538: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d2538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d253c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d2540: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d2540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2d2544: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2d2544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2d2548: 0x0  nop
    ctx->pc = 0x2d2548u;
    // NOP
    // 0x2d254c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D254Cu;
    {
        const bool branch_taken_0x2d254c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d254c) {
            ctx->pc = 0x2D2538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2538;
        }
    }
    ctx->pc = 0x2D2554u;
    // 0x2d2554: 0x0  nop
    ctx->pc = 0x2d2554u;
    // NOP
label_2d2558:
    // 0x2d2558: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d255c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d2560: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2D2560u;
    {
        const bool branch_taken_0x2d2560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2560u;
            // 0x2d2564: 0xaea30008  sw          $v1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2560) {
            ctx->pc = 0x2D2834u;
            goto label_2d2834;
        }
    }
    ctx->pc = 0x2D2568u;
label_2d2568:
    // 0x2d2568: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x2d2568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2d256c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D256Cu;
    {
        const bool branch_taken_0x2d256c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D2570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D256Cu;
            // 0x2d2570: 0x2b083  sra         $s6, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d256c) {
            ctx->pc = 0x2D257Cu;
            goto label_2d257c;
        }
    }
    ctx->pc = 0x2D2574u;
    // 0x2d2574: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2d2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2d2578: 0x2b083  sra         $s6, $v0, 2
    ctx->pc = 0x2d2578u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 2));
label_2d257c:
    // 0x2d257c: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x2d257cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d2580: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2580u;
    {
        const bool branch_taken_0x2d2580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2580) {
            ctx->pc = 0x2D2584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2580u;
            // 0x2d2584: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2588u;
            goto label_2d2588;
        }
    }
    ctx->pc = 0x2D2588u;
label_2d2588:
    // 0x2d2588: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x2d2588u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d258c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D258Cu;
    {
        const bool branch_taken_0x2d258c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d258c) {
            ctx->pc = 0x2D25D0u;
            goto label_2d25d0;
        }
    }
    ctx->pc = 0x2D2594u;
    // 0x2d2594: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2d2598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d259c: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x2d259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
label_2d25a0:
    // 0x2d25a0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2d25a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2d25a4: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x2d25a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2d25a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D25A8u;
    {
        const bool branch_taken_0x2d25a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25a8) {
            ctx->pc = 0x2D25B8u;
            goto label_2d25b8;
        }
    }
    ctx->pc = 0x2D25B0u;
    // 0x2d25b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D25B0u;
    {
        const bool branch_taken_0x2d25b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D25B0u;
            // 0x2d25b4: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25b0) {
            ctx->pc = 0x2D25C0u;
            goto label_2d25c0;
        }
    }
    ctx->pc = 0x2D25B8u;
label_2d25b8:
    // 0x2d25b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d25b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25bc: 0x0  nop
    ctx->pc = 0x2d25bcu;
    // NOP
label_2d25c0:
    // 0x2d25c0: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x2d25c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d25c4: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D25C4u;
    {
        const bool branch_taken_0x2d25c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d25c4) {
            ctx->pc = 0x2D25C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D25C4u;
            // 0x2d25c8: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D25A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d25a0;
        }
    }
    ctx->pc = 0x2D25CCu;
    // 0x2d25cc: 0x0  nop
    ctx->pc = 0x2d25ccu;
    // NOP
label_2d25d0:
    // 0x2d25d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2d25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2d25d4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d25d8: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x2d25d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x2d25dc: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x2D25DCu;
    SET_GPR_U32(ctx, 31, 0x2D25E4u);
    ctx->pc = 0x2D25E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D25DCu;
            // 0x2d25e0: 0x122880  sll         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D25E4u; }
        if (ctx->pc != 0x2D25E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D25E4u; }
        if (ctx->pc != 0x2D25E4u) { return; }
    }
    ctx->pc = 0x2D25E4u;
label_2d25e4:
    // 0x2d25e4: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x2d25e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2d25e8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x2d25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x2d25ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d25ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25f0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D25F0u;
    {
        const bool branch_taken_0x2d25f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D25F0u;
            // 0x2d25f4: 0x443021  addu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25f0) {
            ctx->pc = 0x2D2618u;
            goto label_2d2618;
        }
    }
    ctx->pc = 0x2D25F8u;
label_2d25f8:
    // 0x2d25f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d25fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d2600: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d2600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d2604: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d2604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d2608: 0x0  nop
    ctx->pc = 0x2d2608u;
    // NOP
    // 0x2d260c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D260Cu;
    {
        const bool branch_taken_0x2d260c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d260c) {
            ctx->pc = 0x2D25F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d25f8;
        }
    }
    ctx->pc = 0x2D2614u;
    // 0x2d2614: 0x0  nop
    ctx->pc = 0x2d2614u;
    // NOP
label_2d2618:
    // 0x2d2618: 0x52200085  beql        $s1, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x2D2618u;
    {
        const bool branch_taken_0x2d2618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2618) {
            ctx->pc = 0x2D261Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2618u;
            // 0x2d261c: 0xaeb00008  sw          $s0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2830u;
            goto label_2d2830;
        }
    }
    ctx->pc = 0x2D2620u;
    // 0x2d2620: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x2d2620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d2624: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x2d2624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2d2628: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x2d2628u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d262c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D262Cu;
    {
        const bool branch_taken_0x2d262c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D262Cu;
            // 0x2d2630: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d262c) {
            ctx->pc = 0x2D2710u;
            goto label_2d2710;
        }
    }
    ctx->pc = 0x2D2634u;
    // 0x2d2634: 0x248a0003  addiu       $t2, $a0, 0x3
    ctx->pc = 0x2d2634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2d2638: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x2d2638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x2d263c: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D263Cu;
    {
        const bool branch_taken_0x2d263c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x2D2640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D263Cu;
            // 0x2d2640: 0xa4083  sra         $t0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d263c) {
            ctx->pc = 0x2D264Cu;
            goto label_2d264c;
        }
    }
    ctx->pc = 0x2D2644u;
    // 0x2d2644: 0x25480003  addiu       $t0, $t2, 0x3
    ctx->pc = 0x2d2644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x2d2648: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x2d2648u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_2d264c:
    // 0x2d264c: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x2d264cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d2650: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D2650u;
    {
        const bool branch_taken_0x2d2650 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2650) {
            ctx->pc = 0x2D26E8u;
            goto label_2d26e8;
        }
    }
    ctx->pc = 0x2D2658u;
    // 0x2d2658: 0xb1082b  sltu        $at, $a1, $s1
    ctx->pc = 0x2d2658u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d265c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2D265Cu;
    {
        const bool branch_taken_0x2d265c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D265Cu;
            // 0x2d2660: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d265c) {
            ctx->pc = 0x2D2690u;
            goto label_2d2690;
        }
    }
    ctx->pc = 0x2D2664u;
    // 0x2d2664: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2668: 0x894024  and         $t0, $a0, $t1
    ctx->pc = 0x2d2668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x2d266c: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D266Cu;
    {
        const bool branch_taken_0x2d266c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D266Cu;
            // 0x2d2670: 0x640b0001  daddiu      $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d266c) {
            ctx->pc = 0x2D2684u;
            goto label_2d2684;
        }
    }
    ctx->pc = 0x2D2674u;
    // 0x2d2674: 0x1494024  and         $t0, $t2, $t1
    ctx->pc = 0x2d2674u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x2d2678: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2678u;
    {
        const bool branch_taken_0x2d2678 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2678) {
            ctx->pc = 0x2D2684u;
            goto label_2d2684;
        }
    }
    ctx->pc = 0x2D2680u;
    // 0x2d2680: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d2680u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2684:
    // 0x2d2684: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2684u;
    {
        const bool branch_taken_0x2d2684 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2684) {
            ctx->pc = 0x2D2690u;
            goto label_2d2690;
        }
    }
    ctx->pc = 0x2D268Cu;
    // 0x2d268c: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x2d268cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2d2690:
    // 0x2d2690: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D2690u;
    {
        const bool branch_taken_0x2d2690 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2690) {
            ctx->pc = 0x2D26E8u;
            goto label_2d26e8;
        }
    }
    ctx->pc = 0x2D2698u;
label_2d2698:
    // 0x2d2698: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2d2698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d269c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2d269cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2d26a0: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x2d26a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2d26a4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x2d26a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x2d26a8: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2d26a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2d26ac: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2d26acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2d26b0: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x2d26b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2d26b4: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x2d26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x2d26b8: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x2d26b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d26bc: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x2d26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
    // 0x2d26c0: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x2d26c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2d26c4: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x2d26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
    // 0x2d26c8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2d26c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2d26cc: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x2d26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x2d26d0: 0x8ce8001c  lw          $t0, 0x1C($a3)
    ctx->pc = 0x2d26d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2d26d4: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x2d26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
    // 0x2d26d8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2d26dc: 0xe3402b  sltu        $t0, $a3, $v1
    ctx->pc = 0x2d26dcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d26e0: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D26E0u;
    {
        const bool branch_taken_0x2d26e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D26E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26E0u;
            // 0x2d26e4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26e0) {
            ctx->pc = 0x2D2698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2698;
        }
    }
    ctx->pc = 0x2D26E8u;
label_2d26e8:
    // 0x2d26e8: 0xe5082b  sltu        $at, $a3, $a1
    ctx->pc = 0x2d26e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d26ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D26ECu;
    {
        const bool branch_taken_0x2d26ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26ec) {
            ctx->pc = 0x2D2710u;
            goto label_2d2710;
        }
    }
    ctx->pc = 0x2D26F4u;
label_2d26f4:
    // 0x2d26f4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2d26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d26f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d26f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d26fc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2d26fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2d2700: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x2d2700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d2704: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d2704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d2708: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D2708u;
    {
        const bool branch_taken_0x2d2708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2708) {
            ctx->pc = 0x2D26F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d26f4;
        }
    }
    ctx->pc = 0x2D2710u;
label_2d2710:
    // 0x2d2710: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x2d2710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d2714: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2d2714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2d2718: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d271c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2d271cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d2720: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d2720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2724: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x2d2724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2d2728: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2d2728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d272c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D272Cu;
    {
        const bool branch_taken_0x2d272c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D272Cu;
            // 0x2d2730: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d272c) {
            ctx->pc = 0x2D2818u;
            goto label_2d2818;
        }
    }
    ctx->pc = 0x2D2734u;
    // 0x2d2734: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x2d2734u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d2738: 0x2468ffe0  addiu       $t0, $v1, -0x20
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2d273c: 0x25490003  addiu       $t1, $t2, 0x3
    ctx->pc = 0x2d273cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x2d2740: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2740u;
    {
        const bool branch_taken_0x2d2740 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2D2744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2740u;
            // 0x2d2744: 0x93083  sra         $a2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2740) {
            ctx->pc = 0x2D2750u;
            goto label_2d2750;
        }
    }
    ctx->pc = 0x2D2748u;
    // 0x2d2748: 0x25260003  addiu       $a2, $t1, 0x3
    ctx->pc = 0x2d2748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x2d274c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2d274cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_2d2750:
    // 0x2d2750: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x2d2750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d2754: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D2754u;
    {
        const bool branch_taken_0x2d2754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2754) {
            ctx->pc = 0x2D27F0u;
            goto label_2d27f0;
        }
    }
    ctx->pc = 0x2D275Cu;
    // 0x2d275c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2d275cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d2760: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2D2760u;
    {
        const bool branch_taken_0x2d2760 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2760u;
            // 0x2d2764: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2760) {
            ctx->pc = 0x2D2794u;
            goto label_2d2794;
        }
    }
    ctx->pc = 0x2D2768u;
    // 0x2d2768: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2d2768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2d276c: 0x1473024  and         $a2, $t2, $a3
    ctx->pc = 0x2d276cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2d2770: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2770u;
    {
        const bool branch_taken_0x2d2770 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2770u;
            // 0x2d2774: 0x640b0001  daddiu      $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2770) {
            ctx->pc = 0x2D2788u;
            goto label_2d2788;
        }
    }
    ctx->pc = 0x2D2778u;
    // 0x2d2778: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x2d2778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2d277c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D277Cu;
    {
        const bool branch_taken_0x2d277c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d277c) {
            ctx->pc = 0x2D2788u;
            goto label_2d2788;
        }
    }
    ctx->pc = 0x2D2784u;
    // 0x2d2784: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d2784u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2788:
    // 0x2d2788: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2788u;
    {
        const bool branch_taken_0x2d2788 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2788) {
            ctx->pc = 0x2D2794u;
            goto label_2d2794;
        }
    }
    ctx->pc = 0x2D2790u;
    // 0x2d2790: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x2d2790u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2d2794:
    // 0x2d2794: 0x11800016  beqz        $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2794u;
    {
        const bool branch_taken_0x2d2794 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2794) {
            ctx->pc = 0x2D27F0u;
            goto label_2d27f0;
        }
    }
    ctx->pc = 0x2D279Cu;
label_2d279c:
    // 0x2d279c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d279cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d27a0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2d27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2d27a4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2d27a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d27a8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2d27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2d27ac: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2d27acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d27b0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2d27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2d27b4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2d27b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d27b8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2d27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2d27bc: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2d27bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d27c0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2d27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2d27c4: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x2d27c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d27c8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x2d27c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x2d27cc: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x2d27ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d27d0: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x2d27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x2d27d4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2d27d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d27d8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2d27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2d27dc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d27dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d27e0: 0xa8302b  sltu        $a2, $a1, $t0
    ctx->pc = 0x2d27e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2d27e4: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D27E4u;
    {
        const bool branch_taken_0x2d27e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D27E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27E4u;
            // 0x2d27e8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27e4) {
            ctx->pc = 0x2D279Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d279c;
        }
    }
    ctx->pc = 0x2D27ECu;
    // 0x2d27ec: 0x0  nop
    ctx->pc = 0x2d27ecu;
    // NOP
label_2d27f0:
    // 0x2d27f0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2d27f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d27f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D27F4u;
    {
        const bool branch_taken_0x2d27f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27f4) {
            ctx->pc = 0x2D2818u;
            goto label_2d2818;
        }
    }
    ctx->pc = 0x2D27FCu;
label_2d27fc:
    // 0x2d27fc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d27fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2800: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2d2800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2d2804: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d2804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d2808: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x2d2808u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d280c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d2810: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D2810u;
    {
        const bool branch_taken_0x2d2810 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2810) {
            ctx->pc = 0x2D27FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d27fc;
        }
    }
    ctx->pc = 0x2D2818u;
label_2d2818:
    // 0x2d2818: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2818u;
    {
        const bool branch_taken_0x2d2818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2818) {
            ctx->pc = 0x2D282Cu;
            goto label_2d282c;
        }
    }
    ctx->pc = 0x2D2820u;
    // 0x2d2820: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d2820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d2824: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D2824u;
    SET_GPR_U32(ctx, 31, 0x2D282Cu);
    ctx->pc = 0x2D2828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2824u;
            // 0x2d2828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D282Cu; }
        if (ctx->pc != 0x2D282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D282Cu; }
        if (ctx->pc != 0x2D282Cu) { return; }
    }
    ctx->pc = 0x2D282Cu;
label_2d282c:
    // 0x2d282c: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x2d282cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_2d2830:
    // 0x2d2830: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x2d2830u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
label_2d2834:
    // 0x2d2834: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d2834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2838: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d2838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d283c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d283cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d2840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d2844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d284c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d284cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2854: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2854u;
            // 0x2d2858: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D285Cu;
    // 0x2d285c: 0x0  nop
    ctx->pc = 0x2d285cu;
    // NOP
}
