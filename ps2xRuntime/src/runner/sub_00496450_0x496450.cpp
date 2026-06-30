#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00496450
// Address: 0x496450 - 0x496860
void sub_00496450_0x496450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496450_0x496450");
#endif

    switch (ctx->pc) {
        case 0x4964c8u: goto label_4964c8;
        case 0x4964d0u: goto label_4964d0;
        case 0x496520u: goto label_496520;
        case 0x496564u: goto label_496564;
        case 0x4965b4u: goto label_4965b4;
        case 0x496628u: goto label_496628;
        case 0x496650u: goto label_496650;
        case 0x4966a8u: goto label_4966a8;
        case 0x4966e0u: goto label_4966e0;
        case 0x496704u: goto label_496704;
        case 0x49670cu: goto label_49670c;
        case 0x49672cu: goto label_49672c;
        case 0x496770u: goto label_496770;
        case 0x4967acu: goto label_4967ac;
        case 0x496838u: goto label_496838;
        default: break;
    }

    ctx->pc = 0x496450u;

    // 0x496450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x496450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x496454: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x496454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x496458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x496458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49645c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x496460: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x496460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x496464: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x496464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x496468: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x496468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49646c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x496470: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x496470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x496474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x496478: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x496478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49647c: 0x122000ee  beqz        $s1, . + 4 + (0xEE << 2)
    ctx->pc = 0x49647Cu;
    {
        const bool branch_taken_0x49647c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x496480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49647Cu;
            // 0x496480: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49647c) {
            ctx->pc = 0x496838u;
            goto label_496838;
        }
    }
    ctx->pc = 0x496484u;
    // 0x496484: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x496484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x496488: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x496488u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x49648c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x49648Cu;
    {
        const bool branch_taken_0x49648c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49648c) {
            ctx->pc = 0x4964B0u;
            goto label_4964b0;
        }
    }
    ctx->pc = 0x496494u;
    // 0x496494: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x496494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x496498: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x496498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49649c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4964a0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4964a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4964a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4964a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4964a8: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4964A8u;
    {
        const bool branch_taken_0x4964a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4964a8) {
            ctx->pc = 0x4964ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4964A8u;
            // 0x4964ac: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4964D4u;
            goto label_4964d4;
        }
    }
    ctx->pc = 0x4964B0u;
label_4964b0:
    // 0x4964b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4964b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4964b4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4964b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4964b8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4964b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4964bc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4964bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4964c0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4964C0u;
    SET_GPR_U32(ctx, 31, 0x4964C8u);
    ctx->pc = 0x4964C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4964C0u;
            // 0x4964c4: 0x24a50910  addiu       $a1, $a1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4964C8u; }
        if (ctx->pc != 0x4964C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4964C8u; }
        if (ctx->pc != 0x4964C8u) { return; }
    }
    ctx->pc = 0x4964C8u;
label_4964c8:
    // 0x4964c8: 0xc04981a  jal         func_126068
    ctx->pc = 0x4964C8u;
    SET_GPR_U32(ctx, 31, 0x4964D0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4964D0u; }
        if (ctx->pc != 0x4964D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4964D0u; }
        if (ctx->pc != 0x4964D0u) { return; }
    }
    ctx->pc = 0x4964D0u;
label_4964d0:
    // 0x4964d0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4964d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4964d4:
    // 0x4964d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4964d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4964d8: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x4964d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x4964dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4964dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4964e0: 0x54200064  bnel        $at, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x4964E0u;
    {
        const bool branch_taken_0x4964e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4964e0) {
            ctx->pc = 0x4964E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4964E0u;
            // 0x4964e4: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496674u;
            goto label_496674;
        }
    }
    ctx->pc = 0x4964E8u;
    // 0x4964e8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4964e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4964ec: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x4964ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4964f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4964f4: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x4964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4964f8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4964F8u;
    {
        const bool branch_taken_0x4964f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4964FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4964F8u;
            // 0x4964fc: 0x43903  sra         $a3, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4964f8) {
            ctx->pc = 0x496508u;
            goto label_496508;
        }
    }
    ctx->pc = 0x496500u;
    // 0x496500: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x496500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x496504: 0x43903  sra         $a3, $a0, 4
    ctx->pc = 0x496504u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 4));
label_496508:
    // 0x496508: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x496508u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x49650c: 0x50200025  beql        $at, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x49650Cu;
    {
        const bool branch_taken_0x49650c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49650c) {
            ctx->pc = 0x496510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49650Cu;
            // 0x496510: 0x113100  sll         $a2, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4965A4u;
            goto label_4965a4;
        }
    }
    ctx->pc = 0x496514u;
    // 0x496514: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x496514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x496518: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x496518u;
    {
        const bool branch_taken_0x496518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496518u;
            // 0x49651c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496518) {
            ctx->pc = 0x496558u;
            goto label_496558;
        }
    }
    ctx->pc = 0x496520u;
label_496520:
    // 0x496520: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496520u;
    {
        const bool branch_taken_0x496520 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496520) {
            ctx->pc = 0x496538u;
            goto label_496538;
        }
    }
    ctx->pc = 0x496528u;
    // 0x496528: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x496528u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49652c: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x49652cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x496530: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x496530u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
    // 0x496534: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x496534u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
label_496538:
    // 0x496538: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x496538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49653c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x49653cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x496540: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x496540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x496544: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x496544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x496548: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x496548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x49654c: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x49654Cu;
    {
        const bool branch_taken_0x49654c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x496550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49654Cu;
            // 0x496550: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49654c) {
            ctx->pc = 0x496520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496520;
        }
    }
    ctx->pc = 0x496554u;
    // 0x496554: 0x0  nop
    ctx->pc = 0x496554u;
    // NOP
label_496558:
    // 0x496558: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x496558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49655c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x49655Cu;
    {
        const bool branch_taken_0x49655c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49655Cu;
            // 0x496560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49655c) {
            ctx->pc = 0x496648u;
            goto label_496648;
        }
    }
    ctx->pc = 0x496564u;
label_496564:
    // 0x496564: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x496564u;
    {
        const bool branch_taken_0x496564 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496564) {
            ctx->pc = 0x496580u;
            goto label_496580;
        }
    }
    ctx->pc = 0x49656Cu;
    // 0x49656c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x49656cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x496570: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x496570u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x496574: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x496574u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
    // 0x496578: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x496578u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x49657c: 0x0  nop
    ctx->pc = 0x49657cu;
    // NOP
label_496580:
    // 0x496580: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x496580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496584: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x496584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x496588: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x496588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x49658c: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x49658cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496590: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x496590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x496594: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x496594u;
    {
        const bool branch_taken_0x496594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x496598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496594u;
            // 0x496598: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496594) {
            ctx->pc = 0x496564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496564;
        }
    }
    ctx->pc = 0x49659Cu;
    // 0x49659c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49659Cu;
    {
        const bool branch_taken_0x49659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49659c) {
            ctx->pc = 0x496648u;
            goto label_496648;
        }
    }
    ctx->pc = 0x4965A4u;
label_4965a4:
    // 0x4965a4: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x4965a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4965a8: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x4965a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4965ac: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x4965ACu;
    {
        const bool branch_taken_0x4965ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4965B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4965ACu;
            // 0x4965b0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4965ac) {
            ctx->pc = 0x4965F0u;
            goto label_4965f0;
        }
    }
    ctx->pc = 0x4965B4u;
label_4965b4:
    // 0x4965b4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4965B4u;
    {
        const bool branch_taken_0x4965b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4965b4) {
            ctx->pc = 0x4965D0u;
            goto label_4965d0;
        }
    }
    ctx->pc = 0x4965BCu;
    // 0x4965bc: 0xdd250000  ld          $a1, 0x0($t1)
    ctx->pc = 0x4965bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4965c0: 0xdd240008  ld          $a0, 0x8($t1)
    ctx->pc = 0x4965c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4965c4: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x4965c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
    // 0x4965c8: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x4965c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x4965cc: 0x0  nop
    ctx->pc = 0x4965ccu;
    // NOP
label_4965d0:
    // 0x4965d0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4965d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4965d4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4965d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4965d8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4965d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4965dc: 0x123202b  sltu        $a0, $t1, $v1
    ctx->pc = 0x4965dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4965e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4965e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4965e4: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4965E4u;
    {
        const bool branch_taken_0x4965e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4965E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4965E4u;
            // 0x4965e8: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4965e4) {
            ctx->pc = 0x4965B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4965b4;
        }
    }
    ctx->pc = 0x4965ECu;
    // 0x4965ec: 0x0  nop
    ctx->pc = 0x4965ecu;
    // NOP
label_4965f0:
    // 0x4965f0: 0xf12023  subu        $a0, $a3, $s1
    ctx->pc = 0x4965f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x4965f4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x4965f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4965f8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x4965f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4965fc: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x4965fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496600: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x496600u;
    {
        const bool branch_taken_0x496600 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x496600) {
            ctx->pc = 0x496604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496600u;
            // 0x496604: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49661Cu;
            goto label_49661c;
        }
    }
    ctx->pc = 0x496608u;
    // 0x496608: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x496608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49660c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x49660Cu;
    {
        const bool branch_taken_0x49660c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49660c) {
            ctx->pc = 0x496618u;
            goto label_496618;
        }
    }
    ctx->pc = 0x496614u;
    // 0x496614: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x496614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_496618:
    // 0x496618: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x496618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_49661c:
    // 0x49661c: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x49661cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x496620: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x496620u;
    {
        const bool branch_taken_0x496620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496620) {
            ctx->pc = 0x496648u;
            goto label_496648;
        }
    }
    ctx->pc = 0x496628u;
label_496628:
    // 0x496628: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x496628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x49662c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x49662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x496630: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x496630u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496634: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x496634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x496638: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x496638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x49663c: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x49663cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x496640: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x496640u;
    {
        const bool branch_taken_0x496640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x496644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496640u;
            // 0x496644: 0xfc640008  sd          $a0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496640) {
            ctx->pc = 0x496628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496628;
        }
    }
    ctx->pc = 0x496648u;
label_496648:
    // 0x496648: 0x5220007c  beql        $s1, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x496648u;
    {
        const bool branch_taken_0x496648 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x496648) {
            ctx->pc = 0x49664Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496648u;
            // 0x49664c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49683Cu;
            goto label_49683c;
        }
    }
    ctx->pc = 0x496650u;
label_496650:
    // 0x496650: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x496650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x496654: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x496654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x496658: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x496658u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49665c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x49665cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x496660: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x496660u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x496664: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x496664u;
    {
        const bool branch_taken_0x496664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x496668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496664u;
            // 0x496668: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496664) {
            ctx->pc = 0x496650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496650;
        }
    }
    ctx->pc = 0x49666Cu;
    // 0x49666c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x49666Cu;
    {
        const bool branch_taken_0x49666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49666c) {
            ctx->pc = 0x496838u;
            goto label_496838;
        }
    }
    ctx->pc = 0x496674u;
label_496674:
    // 0x496674: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x496674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x496678: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x496678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x49667c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x49667Cu;
    {
        const bool branch_taken_0x49667c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x496680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49667Cu;
            // 0x496680: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49667c) {
            ctx->pc = 0x49668Cu;
            goto label_49668c;
        }
    }
    ctx->pc = 0x496684u;
    // 0x496684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x496684u;
    {
        const bool branch_taken_0x496684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496684u;
            // 0x496688: 0x2a4082b  sltu        $at, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x496684) {
            ctx->pc = 0x496694u;
            goto label_496694;
        }
    }
    ctx->pc = 0x49668Cu;
label_49668c:
    // 0x49668c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x49668cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x496690: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x496690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_496694:
    // 0x496694: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x496694u;
    {
        const bool branch_taken_0x496694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496694) {
            ctx->pc = 0x4966D8u;
            goto label_4966d8;
        }
    }
    ctx->pc = 0x49669Cu;
    // 0x49669c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x49669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x4966a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4966a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4966a4: 0x3c0107ff  lui         $at, 0x7FF
    ctx->pc = 0x4966a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
label_4966a8:
    // 0x4966a8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x4966a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x4966ac: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x4966acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4966b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4966B0u;
    {
        const bool branch_taken_0x4966b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4966b0) {
            ctx->pc = 0x4966C0u;
            goto label_4966c0;
        }
    }
    ctx->pc = 0x4966B8u;
    // 0x4966b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4966B8u;
    {
        const bool branch_taken_0x4966b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4966BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4966B8u;
            // 0x4966bc: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4966b8) {
            ctx->pc = 0x4966C8u;
            goto label_4966c8;
        }
    }
    ctx->pc = 0x4966C0u;
label_4966c0:
    // 0x4966c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4966c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4966c4: 0x0  nop
    ctx->pc = 0x4966c4u;
    // NOP
label_4966c8:
    // 0x4966c8: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x4966c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4966cc: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x4966CCu;
    {
        const bool branch_taken_0x4966cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4966cc) {
            ctx->pc = 0x4966D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4966CCu;
            // 0x4966d0: 0x3c0107ff  lui         $at, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4966A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4966a8;
        }
    }
    ctx->pc = 0x4966D4u;
    // 0x4966d4: 0x0  nop
    ctx->pc = 0x4966d4u;
    // NOP
label_4966d8:
    // 0x4966d8: 0xc040180  jal         func_100600
    ctx->pc = 0x4966D8u;
    SET_GPR_U32(ctx, 31, 0x4966E0u);
    ctx->pc = 0x4966DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4966D8u;
            // 0x4966dc: 0x152100  sll         $a0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4966E0u; }
        if (ctx->pc != 0x4966E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4966E0u; }
        if (ctx->pc != 0x4966E0u) { return; }
    }
    ctx->pc = 0x4966E0u;
label_4966e0:
    // 0x4966e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4966e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4966e4: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4966E4u;
    {
        const bool branch_taken_0x4966e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4966e4) {
            ctx->pc = 0x4966E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4966E4u;
            // 0x4966e8: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496710u;
            goto label_496710;
        }
    }
    ctx->pc = 0x4966ECu;
    // 0x4966ec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4966ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4966f0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4966f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4966f4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4966f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4966f8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4966f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4966fc: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4966FCu;
    SET_GPR_U32(ctx, 31, 0x496704u);
    ctx->pc = 0x496700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4966FCu;
            // 0x496700: 0x24a50990  addiu       $a1, $a1, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496704u; }
        if (ctx->pc != 0x496704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496704u; }
        if (ctx->pc != 0x496704u) { return; }
    }
    ctx->pc = 0x496704u;
label_496704:
    // 0x496704: 0xc04981a  jal         func_126068
    ctx->pc = 0x496704u;
    SET_GPR_U32(ctx, 31, 0x49670Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49670Cu; }
        if (ctx->pc != 0x49670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49670Cu; }
        if (ctx->pc != 0x49670Cu) { return; }
    }
    ctx->pc = 0x49670Cu;
label_49670c:
    // 0x49670c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x49670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_496710:
    // 0x496710: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x496710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496714: 0xafb50070  sw          $s5, 0x70($sp)
    ctx->pc = 0x496714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
    // 0x496718: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x496718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x49671c: 0xafb40078  sw          $s4, 0x78($sp)
    ctx->pc = 0x49671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 20));
    // 0x496720: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x496720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x496724: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x496724u;
    {
        const bool branch_taken_0x496724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496724u;
            // 0x496728: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496724) {
            ctx->pc = 0x496768u;
            goto label_496768;
        }
    }
    ctx->pc = 0x49672Cu;
label_49672c:
    // 0x49672c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x49672Cu;
    {
        const bool branch_taken_0x49672c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x49672c) {
            ctx->pc = 0x496748u;
            goto label_496748;
        }
    }
    ctx->pc = 0x496734u;
    // 0x496734: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x496734u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x496738: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x496738u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x49673c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x49673cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x496740: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x496740u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x496744: 0x0  nop
    ctx->pc = 0x496744u;
    // NOP
label_496748:
    // 0x496748: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x496748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x49674c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x49674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x496750: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x496750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x496754: 0x72202b  sltu        $a0, $v1, $s2
    ctx->pc = 0x496754u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x496758: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x496758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49675c: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x49675Cu;
    {
        const bool branch_taken_0x49675c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x496760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49675Cu;
            // 0x496760: 0xafa50074  sw          $a1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49675c) {
            ctx->pc = 0x49672Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49672c;
        }
    }
    ctx->pc = 0x496764u;
    // 0x496764: 0x0  nop
    ctx->pc = 0x496764u;
    // NOP
label_496768:
    // 0x496768: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x496768u;
    {
        const bool branch_taken_0x496768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x496768) {
            ctx->pc = 0x4967A0u;
            goto label_4967a0;
        }
    }
    ctx->pc = 0x496770u;
label_496770:
    // 0x496770: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x496770u;
    {
        const bool branch_taken_0x496770 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x496770) {
            ctx->pc = 0x496788u;
            goto label_496788;
        }
    }
    ctx->pc = 0x496778u;
    // 0x496778: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x496778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49677c: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x49677cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x496780: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x496780u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x496784: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x496784u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
label_496788:
    // 0x496788: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x496788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x49678c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x49678cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x496790: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x496790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x496794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x496794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x496798: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x496798u;
    {
        const bool branch_taken_0x496798 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x49679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496798u;
            // 0x49679c: 0xafa40074  sw          $a0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496798) {
            ctx->pc = 0x496770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496770;
        }
    }
    ctx->pc = 0x4967A0u;
label_4967a0:
    // 0x4967a0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x4967a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4967a4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x4967A4u;
    {
        const bool branch_taken_0x4967a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4967a4) {
            ctx->pc = 0x4967E8u;
            goto label_4967e8;
        }
    }
    ctx->pc = 0x4967ACu;
label_4967ac:
    // 0x4967ac: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x4967ACu;
    {
        const bool branch_taken_0x4967ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4967ac) {
            ctx->pc = 0x4967C8u;
            goto label_4967c8;
        }
    }
    ctx->pc = 0x4967B4u;
    // 0x4967b4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x4967b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4967b8: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x4967b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4967bc: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x4967bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x4967c0: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x4967c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x4967c4: 0x0  nop
    ctx->pc = 0x4967c4u;
    // NOP
label_4967c8:
    // 0x4967c8: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x4967c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4967cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4967ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4967d0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x4967d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4967d4: 0x66202b  sltu        $a0, $v1, $a2
    ctx->pc = 0x4967d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4967d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4967d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4967dc: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4967DCu;
    {
        const bool branch_taken_0x4967dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4967E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4967DCu;
            // 0x4967e0: 0xafa50074  sw          $a1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4967dc) {
            ctx->pc = 0x4967ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4967ac;
        }
    }
    ctx->pc = 0x4967E4u;
    // 0x4967e4: 0x0  nop
    ctx->pc = 0x4967e4u;
    // NOP
label_4967e8:
    // 0x4967e8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x4967e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4967ec: 0x5073000e  beql        $v1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x4967ECu;
    {
        const bool branch_taken_0x4967ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x4967ec) {
            ctx->pc = 0x4967F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4967ECu;
            // 0x4967f0: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496828u;
            goto label_496828;
        }
    }
    ctx->pc = 0x4967F4u;
    // 0x4967f4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x4967f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4967f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4967f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4967fc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x4967fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x496800: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x496800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x496804: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x496804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x496808: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x496808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x49680c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x49680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x496810: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x496810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x496814: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x496814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x496818: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x496818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49681c: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x49681cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x496820: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x496820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x496824: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x496824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_496828:
    // 0x496828: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x496828u;
    {
        const bool branch_taken_0x496828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496828u;
            // 0x49682c: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496828) {
            ctx->pc = 0x496838u;
            goto label_496838;
        }
    }
    ctx->pc = 0x496830u;
    // 0x496830: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x496830u;
    SET_GPR_U32(ctx, 31, 0x496838u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496838u; }
        if (ctx->pc != 0x496838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496838u; }
        if (ctx->pc != 0x496838u) { return; }
    }
    ctx->pc = 0x496838u;
label_496838:
    // 0x496838: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x496838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_49683c:
    // 0x49683c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49683cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x496840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x496840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x496844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x496844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x496848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x496848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49684c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49684cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x496850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x496850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496854: 0x3e00008  jr          $ra
    ctx->pc = 0x496854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496854u;
            // 0x496858: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49685Cu;
    // 0x49685c: 0x0  nop
    ctx->pc = 0x49685cu;
    // NOP
}
