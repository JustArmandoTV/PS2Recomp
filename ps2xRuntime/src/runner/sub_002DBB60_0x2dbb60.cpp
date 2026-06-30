#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBB60
// Address: 0x2dbb60 - 0x2dbc20
void sub_002DBB60_0x2dbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBB60_0x2dbb60");
#endif

    switch (ctx->pc) {
        case 0x2dbba4u: goto label_2dbba4;
        case 0x2dbbb0u: goto label_2dbbb0;
        case 0x2dbbbcu: goto label_2dbbbc;
        case 0x2dbbc8u: goto label_2dbbc8;
        case 0x2dbbd4u: goto label_2dbbd4;
        case 0x2dbbecu: goto label_2dbbec;
        case 0x2dbc04u: goto label_2dbc04;
        default: break;
    }

    ctx->pc = 0x2dbb60u;

    // 0x2dbb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbb64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dbb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dbb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbb6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dbb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dbb70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dbb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb74: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DBB74u;
    {
        const bool branch_taken_0x2dbb74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB74u;
            // 0x2dbb78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb74) {
            ctx->pc = 0x2DBC04u;
            goto label_2dbc04;
        }
    }
    ctx->pc = 0x2DBB7Cu;
    // 0x2dbb7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2dbb80: 0x2442a088  addiu       $v0, $v0, -0x5F78
    ctx->pc = 0x2dbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942856));
    // 0x2dbb84: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBB84u;
    {
        const bool branch_taken_0x2dbb84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB84u;
            // 0x2dbb88: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb84) {
            ctx->pc = 0x2DBBECu;
            goto label_2dbbec;
        }
    }
    ctx->pc = 0x2DBB8Cu;
    // 0x2dbb8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dbb90: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x2dbb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2dbb94: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x2dbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x2dbb98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dbb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbb9c: 0xc0b6f08  jal         func_2DBC20
    ctx->pc = 0x2DBB9Cu;
    SET_GPR_U32(ctx, 31, 0x2DBBA4u);
    ctx->pc = 0x2DBBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB9Cu;
            // 0x2dbba0: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC20u;
    if (runtime->hasFunction(0x2DBC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBA4u; }
        if (ctx->pc != 0x2DBBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBC20_0x2dbc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBA4u; }
        if (ctx->pc != 0x2DBBA4u) { return; }
    }
    ctx->pc = 0x2DBBA4u;
label_2dbba4:
    // 0x2dbba4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x2dbba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2dbba8: 0xc0a55fc  jal         func_2957F0
    ctx->pc = 0x2DBBA8u;
    SET_GPR_U32(ctx, 31, 0x2DBBB0u);
    ctx->pc = 0x2DBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBA8u;
            // 0x2dbbac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2957F0u;
    if (runtime->hasFunction(0x2957F0u)) {
        auto targetFn = runtime->lookupFunction(0x2957F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB0u; }
        if (ctx->pc != 0x2DBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002957F0_0x2957f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB0u; }
        if (ctx->pc != 0x2DBBB0u) { return; }
    }
    ctx->pc = 0x2DBBB0u;
label_2dbbb0:
    // 0x2dbbb0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2dbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dbbb4: 0xc0b6f08  jal         func_2DBC20
    ctx->pc = 0x2DBBB4u;
    SET_GPR_U32(ctx, 31, 0x2DBBBCu);
    ctx->pc = 0x2DBBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBB4u;
            // 0x2dbbb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC20u;
    if (runtime->hasFunction(0x2DBC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBBCu; }
        if (ctx->pc != 0x2DBBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBC20_0x2dbc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBBCu; }
        if (ctx->pc != 0x2DBBBCu) { return; }
    }
    ctx->pc = 0x2DBBBCu;
label_2dbbbc:
    // 0x2dbbbc: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2dbbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2dbbc0: 0xc0a55fc  jal         func_2957F0
    ctx->pc = 0x2DBBC0u;
    SET_GPR_U32(ctx, 31, 0x2DBBC8u);
    ctx->pc = 0x2DBBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBC0u;
            // 0x2dbbc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2957F0u;
    if (runtime->hasFunction(0x2957F0u)) {
        auto targetFn = runtime->lookupFunction(0x2957F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBC8u; }
        if (ctx->pc != 0x2DBBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002957F0_0x2957f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBC8u; }
        if (ctx->pc != 0x2DBBC8u) { return; }
    }
    ctx->pc = 0x2DBBC8u;
label_2dbbc8:
    // 0x2dbbc8: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2dbbcc: 0xc0b6f08  jal         func_2DBC20
    ctx->pc = 0x2DBBCCu;
    SET_GPR_U32(ctx, 31, 0x2DBBD4u);
    ctx->pc = 0x2DBBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBCCu;
            // 0x2dbbd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC20u;
    if (runtime->hasFunction(0x2DBC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBD4u; }
        if (ctx->pc != 0x2DBBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBC20_0x2dbc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBD4u; }
        if (ctx->pc != 0x2DBBD4u) { return; }
    }
    ctx->pc = 0x2DBBD4u;
label_2dbbd4:
    // 0x2dbbd4: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2dbbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2dbbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbdc: 0x24a5bc20  addiu       $a1, $a1, -0x43E0
    ctx->pc = 0x2dbbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949920));
    // 0x2dbbe0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2dbbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dbbe4: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2DBBE4u;
    SET_GPR_U32(ctx, 31, 0x2DBBECu);
    ctx->pc = 0x2DBBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBE4u;
            // 0x2dbbe8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBECu; }
        if (ctx->pc != 0x2DBBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBECu; }
        if (ctx->pc != 0x2DBBECu) { return; }
    }
    ctx->pc = 0x2DBBECu;
label_2dbbec:
    // 0x2dbbec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dbbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dbbf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dbbf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dbbf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBBF4u;
    {
        const bool branch_taken_0x2dbbf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dbbf4) {
            ctx->pc = 0x2DBBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBF4u;
            // 0x2dbbf8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC08u;
            goto label_2dbc08;
        }
    }
    ctx->pc = 0x2DBBFCu;
    // 0x2dbbfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2DBBFCu;
    SET_GPR_U32(ctx, 31, 0x2DBC04u);
    ctx->pc = 0x2DBC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBFCu;
            // 0x2dbc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC04u; }
        if (ctx->pc != 0x2DBC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC04u; }
        if (ctx->pc != 0x2DBC04u) { return; }
    }
    ctx->pc = 0x2DBC04u;
label_2dbc04:
    // 0x2dbc04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc08:
    // 0x2dbc08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dbc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbc0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbc10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbc14: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC14u;
            // 0x2dbc18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBC1Cu;
    // 0x2dbc1c: 0x0  nop
    ctx->pc = 0x2dbc1cu;
    // NOP
}
