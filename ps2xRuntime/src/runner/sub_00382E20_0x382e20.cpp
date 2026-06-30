#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00382E20
// Address: 0x382e20 - 0x382f20
void sub_00382E20_0x382e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382E20_0x382e20");
#endif

    switch (ctx->pc) {
        case 0x382e4cu: goto label_382e4c;
        case 0x382e90u: goto label_382e90;
        case 0x382f08u: goto label_382f08;
        default: break;
    }

    ctx->pc = 0x382e20u;

    // 0x382e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382e24: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x382e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x382e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x382e2c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x382e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x382e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382e34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x382e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x382e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382e3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x382e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e44: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x382E44u;
    SET_GPR_U32(ctx, 31, 0x382E4Cu);
    ctx->pc = 0x382E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382E44u;
            // 0x382e48: 0x34457a1a  ori         $a1, $v0, 0x7A1A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382E4Cu; }
        if (ctx->pc != 0x382E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382E4Cu; }
        if (ctx->pc != 0x382E4Cu) { return; }
    }
    ctx->pc = 0x382E4Cu;
label_382e4c:
    // 0x382e4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x382e50: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x382e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x382e54: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x382e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x382e58: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x382e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x382e5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x382e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x382e60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x382e64: 0x24427820  addiu       $v0, $v0, 0x7820
    ctx->pc = 0x382e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30752));
    // 0x382e68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x382e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x382e6c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x382e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x382e70: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x382e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x382e74: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x382e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x382e78: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x382e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x382e7c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x382e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x382e80: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x382e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x382e84: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x382e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x382e88: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x382E88u;
    SET_GPR_U32(ctx, 31, 0x382E90u);
    ctx->pc = 0x382E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382E88u;
            // 0x382e8c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382E90u; }
        if (ctx->pc != 0x382E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382E90u; }
        if (ctx->pc != 0x382E90u) { return; }
    }
    ctx->pc = 0x382E90u;
label_382e90:
    // 0x382e90: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x382e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x382e94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382e98: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x382e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x382e9c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x382e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x382ea0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x382ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382ea4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x382EA4u;
    {
        const bool branch_taken_0x382ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382ea4) {
            ctx->pc = 0x382EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382EA4u;
            // 0x382ea8: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382EB8u;
            goto label_382eb8;
        }
    }
    ctx->pc = 0x382EACu;
    // 0x382eac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382eb0: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x382eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x382eb4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x382eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_382eb8:
    // 0x382eb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382ebc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x382ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x382ec0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x382ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x382ec4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x382ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382ec8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x382EC8u;
    {
        const bool branch_taken_0x382ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382ec8) {
            ctx->pc = 0x382ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382EC8u;
            // 0x382ecc: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382EDCu;
            goto label_382edc;
        }
    }
    ctx->pc = 0x382ED0u;
    // 0x382ed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382ed4: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x382ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x382ed8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x382ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_382edc:
    // 0x382edc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382ee0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x382ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x382ee4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x382ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x382ee8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x382ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382eec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x382EECu;
    {
        const bool branch_taken_0x382eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382eec) {
            ctx->pc = 0x382EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382EECu;
            // 0x382ef0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382F00u;
            goto label_382f00;
        }
    }
    ctx->pc = 0x382EF4u;
    // 0x382ef4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382ef8: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x382ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x382efc: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x382efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_382f00:
    // 0x382f00: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x382F00u;
    SET_GPR_U32(ctx, 31, 0x382F08u);
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382F08u; }
        if (ctx->pc != 0x382F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382F08u; }
        if (ctx->pc != 0x382F08u) { return; }
    }
    ctx->pc = 0x382F08u;
label_382f08:
    // 0x382f08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x382f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x382f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382f18: 0x3e00008  jr          $ra
    ctx->pc = 0x382F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382F18u;
            // 0x382f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382F20u;
}
