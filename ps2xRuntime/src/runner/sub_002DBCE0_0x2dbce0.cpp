#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBCE0
// Address: 0x2dbce0 - 0x2dbda0
void sub_002DBCE0_0x2dbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBCE0_0x2dbce0");
#endif

    switch (ctx->pc) {
        case 0x2dbd24u: goto label_2dbd24;
        case 0x2dbd30u: goto label_2dbd30;
        case 0x2dbd3cu: goto label_2dbd3c;
        case 0x2dbd48u: goto label_2dbd48;
        case 0x2dbd54u: goto label_2dbd54;
        case 0x2dbd6cu: goto label_2dbd6c;
        case 0x2dbd84u: goto label_2dbd84;
        default: break;
    }

    ctx->pc = 0x2dbce0u;

    // 0x2dbce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dbce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbcec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dbcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dbcf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dbcf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcf4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DBCF4u;
    {
        const bool branch_taken_0x2dbcf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCF4u;
            // 0x2dbcf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcf4) {
            ctx->pc = 0x2DBD84u;
            goto label_2dbd84;
        }
    }
    ctx->pc = 0x2DBCFCu;
    // 0x2dbcfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2dbd00: 0x2442a078  addiu       $v0, $v0, -0x5F88
    ctx->pc = 0x2dbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942840));
    // 0x2dbd04: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBD04u;
    {
        const bool branch_taken_0x2dbd04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD04u;
            // 0x2dbd08: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd04) {
            ctx->pc = 0x2DBD6Cu;
            goto label_2dbd6c;
        }
    }
    ctx->pc = 0x2DBD0Cu;
    // 0x2dbd0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dbd10: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x2dbd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2dbd14: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x2dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x2dbd18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dbd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbd1c: 0xc0b6f08  jal         func_2DBC20
    ctx->pc = 0x2DBD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD24u);
    ctx->pc = 0x2DBD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD1Cu;
            // 0x2dbd20: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC20u;
    if (runtime->hasFunction(0x2DBC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD24u; }
        if (ctx->pc != 0x2DBD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBC20_0x2dbc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD24u; }
        if (ctx->pc != 0x2DBD24u) { return; }
    }
    ctx->pc = 0x2DBD24u;
label_2dbd24:
    // 0x2dbd24: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x2dbd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2dbd28: 0xc0a55fc  jal         func_2957F0
    ctx->pc = 0x2DBD28u;
    SET_GPR_U32(ctx, 31, 0x2DBD30u);
    ctx->pc = 0x2DBD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD28u;
            // 0x2dbd2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2957F0u;
    if (runtime->hasFunction(0x2957F0u)) {
        auto targetFn = runtime->lookupFunction(0x2957F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD30u; }
        if (ctx->pc != 0x2DBD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002957F0_0x2957f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD30u; }
        if (ctx->pc != 0x2DBD30u) { return; }
    }
    ctx->pc = 0x2DBD30u;
label_2dbd30:
    // 0x2dbd30: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2dbd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dbd34: 0xc0b6f08  jal         func_2DBC20
    ctx->pc = 0x2DBD34u;
    SET_GPR_U32(ctx, 31, 0x2DBD3Cu);
    ctx->pc = 0x2DBD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD34u;
            // 0x2dbd38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC20u;
    if (runtime->hasFunction(0x2DBC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD3Cu; }
        if (ctx->pc != 0x2DBD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBC20_0x2dbc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD3Cu; }
        if (ctx->pc != 0x2DBD3Cu) { return; }
    }
    ctx->pc = 0x2DBD3Cu;
label_2dbd3c:
    // 0x2dbd3c: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2dbd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2dbd40: 0xc0a55fc  jal         func_2957F0
    ctx->pc = 0x2DBD40u;
    SET_GPR_U32(ctx, 31, 0x2DBD48u);
    ctx->pc = 0x2DBD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD40u;
            // 0x2dbd44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2957F0u;
    if (runtime->hasFunction(0x2957F0u)) {
        auto targetFn = runtime->lookupFunction(0x2957F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD48u; }
        if (ctx->pc != 0x2DBD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002957F0_0x2957f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD48u; }
        if (ctx->pc != 0x2DBD48u) { return; }
    }
    ctx->pc = 0x2DBD48u;
label_2dbd48:
    // 0x2dbd48: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2dbd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2dbd4c: 0xc0b6f08  jal         func_2DBC20
    ctx->pc = 0x2DBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD54u);
    ctx->pc = 0x2DBD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD4Cu;
            // 0x2dbd50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC20u;
    if (runtime->hasFunction(0x2DBC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD54u; }
        if (ctx->pc != 0x2DBD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBC20_0x2dbc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD54u; }
        if (ctx->pc != 0x2DBD54u) { return; }
    }
    ctx->pc = 0x2DBD54u;
label_2dbd54:
    // 0x2dbd54: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2dbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2dbd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd5c: 0x24a5bc20  addiu       $a1, $a1, -0x43E0
    ctx->pc = 0x2dbd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949920));
    // 0x2dbd60: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2dbd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dbd64: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2DBD64u;
    SET_GPR_U32(ctx, 31, 0x2DBD6Cu);
    ctx->pc = 0x2DBD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD64u;
            // 0x2dbd68: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD6Cu; }
        if (ctx->pc != 0x2DBD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD6Cu; }
        if (ctx->pc != 0x2DBD6Cu) { return; }
    }
    ctx->pc = 0x2DBD6Cu;
label_2dbd6c:
    // 0x2dbd6c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dbd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dbd70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dbd70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dbd74: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBD74u;
    {
        const bool branch_taken_0x2dbd74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dbd74) {
            ctx->pc = 0x2DBD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD74u;
            // 0x2dbd78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD88u;
            goto label_2dbd88;
        }
    }
    ctx->pc = 0x2DBD7Cu;
    // 0x2dbd7c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2DBD7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD84u);
    ctx->pc = 0x2DBD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD7Cu;
            // 0x2dbd80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD84u; }
        if (ctx->pc != 0x2DBD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD84u; }
        if (ctx->pc != 0x2DBD84u) { return; }
    }
    ctx->pc = 0x2DBD84u;
label_2dbd84:
    // 0x2dbd84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd88:
    // 0x2dbd88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dbd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbd8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbd94: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD94u;
            // 0x2dbd98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBD9Cu;
    // 0x2dbd9c: 0x0  nop
    ctx->pc = 0x2dbd9cu;
    // NOP
}
