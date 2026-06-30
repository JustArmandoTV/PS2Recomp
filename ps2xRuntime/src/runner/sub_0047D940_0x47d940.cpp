#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047D940
// Address: 0x47d940 - 0x47da60
void sub_0047D940_0x47d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D940_0x47d940");
#endif

    switch (ctx->pc) {
        case 0x47d9a0u: goto label_47d9a0;
        case 0x47d9b8u: goto label_47d9b8;
        case 0x47d9d0u: goto label_47d9d0;
        case 0x47da28u: goto label_47da28;
        case 0x47da40u: goto label_47da40;
        default: break;
    }

    ctx->pc = 0x47d940u;

    // 0x47d940: 0xa0850012  sb          $a1, 0x12($a0)
    ctx->pc = 0x47d940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 5));
    // 0x47d944: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47d944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d948: 0x2ca50006  sltiu       $a1, $a1, 0x6
    ctx->pc = 0x47d948u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x47d94c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x47d94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x47d950: 0xa0850011  sb          $a1, 0x11($a0)
    ctx->pc = 0x47d950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x47d954: 0x3e00008  jr          $ra
    ctx->pc = 0x47D954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D954u;
            // 0x47d958: 0xa0830013  sb          $v1, 0x13($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47D95Cu;
    // 0x47d95c: 0x0  nop
    ctx->pc = 0x47d95cu;
    // NOP
    // 0x47d960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47d964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47d968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47d96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47d970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47d970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d974: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x47D974u;
    {
        const bool branch_taken_0x47d974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D974u;
            // 0x47d978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d974) {
            ctx->pc = 0x47D9B8u;
            goto label_47d9b8;
        }
    }
    ctx->pc = 0x47D97Cu;
    // 0x47d97c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47d980: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x47d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x47d984: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D984u;
    {
        const bool branch_taken_0x47d984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D984u;
            // 0x47d988: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d984) {
            ctx->pc = 0x47D9A0u;
            goto label_47d9a0;
        }
    }
    ctx->pc = 0x47D98Cu;
    // 0x47d98c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x47d990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d994: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x47d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x47d998: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x47D998u;
    SET_GPR_U32(ctx, 31, 0x47D9A0u);
    ctx->pc = 0x47D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D998u;
            // 0x47d99c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D9A0u; }
        if (ctx->pc != 0x47D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D9A0u; }
        if (ctx->pc != 0x47D9A0u) { return; }
    }
    ctx->pc = 0x47D9A0u;
label_47d9a0:
    // 0x47d9a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47d9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x47d9a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47d9a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47d9a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47D9A8u;
    {
        const bool branch_taken_0x47d9a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47d9a8) {
            ctx->pc = 0x47D9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D9A8u;
            // 0x47d9ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D9BCu;
            goto label_47d9bc;
        }
    }
    ctx->pc = 0x47D9B0u;
    // 0x47d9b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47D9B0u;
    SET_GPR_U32(ctx, 31, 0x47D9B8u);
    ctx->pc = 0x47D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D9B0u;
            // 0x47d9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D9B8u; }
        if (ctx->pc != 0x47D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D9B8u; }
        if (ctx->pc != 0x47D9B8u) { return; }
    }
    ctx->pc = 0x47D9B8u;
label_47d9b8:
    // 0x47d9b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47d9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47d9bc:
    // 0x47d9bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47d9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47d9c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47d9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47d9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47d9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x47D9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D9C8u;
            // 0x47d9cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47D9D0u;
label_47d9d0:
    // 0x47d9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47d9d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47d9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47d9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47d9e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47d9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d9e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x47D9E4u;
    {
        const bool branch_taken_0x47d9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D9E4u;
            // 0x47d9e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d9e4) {
            ctx->pc = 0x47DA40u;
            goto label_47da40;
        }
    }
    ctx->pc = 0x47D9ECu;
    // 0x47d9ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x47d9f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47d9f4: 0x2463ed10  addiu       $v1, $v1, -0x12F0
    ctx->pc = 0x47d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962448));
    // 0x47d9f8: 0x2442ed48  addiu       $v0, $v0, -0x12B8
    ctx->pc = 0x47d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962504));
    // 0x47d9fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47da00: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x47DA00u;
    {
        const bool branch_taken_0x47da00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA00u;
            // 0x47da04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da00) {
            ctx->pc = 0x47DA28u;
            goto label_47da28;
        }
    }
    ctx->pc = 0x47DA08u;
    // 0x47da08: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47da08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x47da0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47da10: 0x2463ee60  addiu       $v1, $v1, -0x11A0
    ctx->pc = 0x47da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962784));
    // 0x47da14: 0x2442ee98  addiu       $v0, $v0, -0x1168
    ctx->pc = 0x47da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962840));
    // 0x47da18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47da18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47da1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47da20: 0xc11f698  jal         func_47DA60
    ctx->pc = 0x47DA20u;
    SET_GPR_U32(ctx, 31, 0x47DA28u);
    ctx->pc = 0x47DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA20u;
            // 0x47da24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47DA60u;
    if (runtime->hasFunction(0x47DA60u)) {
        auto targetFn = runtime->lookupFunction(0x47DA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DA28u; }
        if (ctx->pc != 0x47DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047DA60_0x47da60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DA28u; }
        if (ctx->pc != 0x47DA28u) { return; }
    }
    ctx->pc = 0x47DA28u;
label_47da28:
    // 0x47da28: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x47da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x47da2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47da2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47da30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47DA30u;
    {
        const bool branch_taken_0x47da30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47da30) {
            ctx->pc = 0x47DA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA30u;
            // 0x47da34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DA44u;
            goto label_47da44;
        }
    }
    ctx->pc = 0x47DA38u;
    // 0x47da38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47DA38u;
    SET_GPR_U32(ctx, 31, 0x47DA40u);
    ctx->pc = 0x47DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA38u;
            // 0x47da3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DA40u; }
        if (ctx->pc != 0x47DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DA40u; }
        if (ctx->pc != 0x47DA40u) { return; }
    }
    ctx->pc = 0x47DA40u;
label_47da40:
    // 0x47da40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47da40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47da44:
    // 0x47da44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47da44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47da48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47da48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47da4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47da4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47da50: 0x3e00008  jr          $ra
    ctx->pc = 0x47DA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA50u;
            // 0x47da54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DA58u;
    // 0x47da58: 0x0  nop
    ctx->pc = 0x47da58u;
    // NOP
    // 0x47da5c: 0x0  nop
    ctx->pc = 0x47da5cu;
    // NOP
}
