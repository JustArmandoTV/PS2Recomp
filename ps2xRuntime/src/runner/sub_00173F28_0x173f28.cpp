#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173F28
// Address: 0x173f28 - 0x173fe8
void sub_00173F28_0x173f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173F28_0x173f28");
#endif

    switch (ctx->pc) {
        case 0x173f8cu: goto label_173f8c;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fc4u: goto label_173fc4;
        case 0x173fccu: goto label_173fcc;
        case 0x173fd4u: goto label_173fd4;
        default: break;
    }

    ctx->pc = 0x173f28u;

    // 0x173f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173f2c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173F2Cu;
    {
        const bool branch_taken_0x173f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F2Cu;
            // 0x173f30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f2c) {
            ctx->pc = 0x173F48u;
            goto label_173f48;
        }
    }
    ctx->pc = 0x173F34u;
    // 0x173f34: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f3c: 0x24844398  addiu       $a0, $a0, 0x4398
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17304));
    // 0x173f40: 0x8059f4e  j           func_167D38
    ctx->pc = 0x173F40u;
    ctx->pc = 0x173F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F40u;
            // 0x173f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173F48u;
label_173f48:
    // 0x173f48: 0x28a2fff1  slti        $v0, $a1, -0xF
    ctx->pc = 0x173f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x173f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173F4Cu;
    {
        const bool branch_taken_0x173f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F4Cu;
            // 0x173f50: 0x28a20010  slti        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f4c) {
            ctx->pc = 0x173F60u;
            goto label_173f60;
        }
    }
    ctx->pc = 0x173F54u;
    // 0x173f54: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x173f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x173f58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173F58u;
    {
        const bool branch_taken_0x173f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F58u;
            // 0x173f5c: 0xa4820046  sh          $v0, 0x46($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f58) {
            ctx->pc = 0x173F70u;
            goto label_173f70;
        }
    }
    ctx->pc = 0x173F60u;
label_173f60:
    // 0x173f60: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173F60u;
    {
        const bool branch_taken_0x173f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f60) {
            ctx->pc = 0x173F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173F60u;
            // 0x173f64: 0xa4850046  sh          $a1, 0x46($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173F70u;
            goto label_173f70;
        }
    }
    ctx->pc = 0x173F68u;
    // 0x173f68: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x173f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x173f6c: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x173f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
label_173f70:
    // 0x173f70: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x173f74: 0x8c439d80  lw          $v1, -0x6280($v0)
    ctx->pc = 0x173f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942080)));
    // 0x173f78: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x173F78u;
    {
        const bool branch_taken_0x173f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f78) {
            ctx->pc = 0x173F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173F78u;
            // 0x173f7c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173F98u;
            goto label_173f98;
        }
    }
    ctx->pc = 0x173F80u;
    // 0x173f80: 0x84850046  lh          $a1, 0x46($a0)
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x173f84: 0xc05bac0  jal         func_16EB00
    ctx->pc = 0x173F84u;
    SET_GPR_U32(ctx, 31, 0x173F8Cu);
    ctx->pc = 0x173F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F84u;
            // 0x173f88: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EB00u;
    if (runtime->hasFunction(0x16EB00u)) {
        auto targetFn = runtime->lookupFunction(0x16EB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F8Cu; }
        if (ctx->pc != 0x173F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EB00_0x16eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F8Cu; }
        if (ctx->pc != 0x173F8Cu) { return; }
    }
    ctx->pc = 0x173F8Cu;
label_173f8c:
    // 0x173f8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173F8Cu;
    {
        const bool branch_taken_0x173f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F8Cu;
            // 0x173f90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f8c) {
            ctx->pc = 0x173FA4u;
            goto label_173fa4;
        }
    }
    ctx->pc = 0x173F94u;
    // 0x173f94: 0x0  nop
    ctx->pc = 0x173f94u;
    // NOP
label_173f98:
    // 0x173f98: 0xc05bac0  jal         func_16EB00
    ctx->pc = 0x173F98u;
    SET_GPR_U32(ctx, 31, 0x173FA0u);
    ctx->pc = 0x173F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F98u;
            // 0x173f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EB00u;
    if (runtime->hasFunction(0x16EB00u)) {
        auto targetFn = runtime->lookupFunction(0x16EB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FA0u; }
        if (ctx->pc != 0x173FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EB00_0x16eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FA0u; }
        if (ctx->pc != 0x173FA0u) { return; }
    }
    ctx->pc = 0x173FA0u;
label_173fa0:
    // 0x173fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173fa4:
    // 0x173fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x173FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FA4u;
            // 0x173fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173FACu;
    // 0x173fac: 0x0  nop
    ctx->pc = 0x173facu;
    // NOP
    // 0x173fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173fb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173fbc: 0xc0599de  jal         func_166778
    ctx->pc = 0x173FBCu;
    SET_GPR_U32(ctx, 31, 0x173FC4u);
    ctx->pc = 0x173FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FBCu;
            // 0x173fc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FC4u; }
        if (ctx->pc != 0x173FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FC4u; }
        if (ctx->pc != 0x173FC4u) { return; }
    }
    ctx->pc = 0x173FC4u;
label_173fc4:
    // 0x173fc4: 0xc05cffa  jal         func_173FE8
    ctx->pc = 0x173FC4u;
    SET_GPR_U32(ctx, 31, 0x173FCCu);
    ctx->pc = 0x173FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FC4u;
            // 0x173fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173FE8u;
    if (runtime->hasFunction(0x173FE8u)) {
        auto targetFn = runtime->lookupFunction(0x173FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FCCu; }
        if (ctx->pc != 0x173FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173FE8_0x173fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FCCu; }
        if (ctx->pc != 0x173FCCu) { return; }
    }
    ctx->pc = 0x173FCCu;
label_173fcc:
    // 0x173fcc: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173FCCu;
    SET_GPR_U32(ctx, 31, 0x173FD4u);
    ctx->pc = 0x173FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FCCu;
            // 0x173fd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD4u; }
        if (ctx->pc != 0x173FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD4u; }
        if (ctx->pc != 0x173FD4u) { return; }
    }
    ctx->pc = 0x173FD4u;
label_173fd4:
    // 0x173fd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173fd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x173FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FE0u;
            // 0x173fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173FE8u;
}
