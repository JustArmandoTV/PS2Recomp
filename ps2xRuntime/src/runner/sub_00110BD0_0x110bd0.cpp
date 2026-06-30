#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110BD0
// Address: 0x110bd0 - 0x110c50
void sub_00110BD0_0x110bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110BD0_0x110bd0");
#endif

    switch (ctx->pc) {
        case 0x110becu: goto label_110bec;
        case 0x110bf4u: goto label_110bf4;
        case 0x110c10u: goto label_110c10;
        case 0x110c34u: goto label_110c34;
        default: break;
    }

    ctx->pc = 0x110bd0u;

    // 0x110bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110bd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110bdc: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x110bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x110be0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110be4: 0xc0442d8  jal         func_110B60
    ctx->pc = 0x110BE4u;
    SET_GPR_U32(ctx, 31, 0x110BECu);
    ctx->pc = 0x110BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110BE4u;
            // 0x110be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B60u;
    if (runtime->hasFunction(0x110B60u)) {
        auto targetFn = runtime->lookupFunction(0x110B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BECu; }
        if (ctx->pc != 0x110BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B60_0x110b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BECu; }
        if (ctx->pc != 0x110BECu) { return; }
    }
    ctx->pc = 0x110BECu;
label_110bec:
    // 0x110bec: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x110BECu;
    SET_GPR_U32(ctx, 31, 0x110BF4u);
    ctx->pc = 0x110BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110BECu;
            // 0x110bf0: 0x8e24e448  lw          $a0, -0x1BB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BF4u; }
        if (ctx->pc != 0x110BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BF4u; }
        if (ctx->pc != 0x110BF4u) { return; }
    }
    ctx->pc = 0x110BF4u;
label_110bf4:
    // 0x110bf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x110bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x110bf8: 0x2465c940  addiu       $a1, $v1, -0x36C0
    ctx->pc = 0x110bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953280));
    // 0x110bfc: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x110bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x110c00: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x110c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x110c04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x110C04u;
    {
        const bool branch_taken_0x110c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110C04u;
            // 0x110c08: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c04) {
            ctx->pc = 0x110C2Cu;
            goto label_110c2c;
        }
    }
    ctx->pc = 0x110C0Cu;
    // 0x110c0c: 0x0  nop
    ctx->pc = 0x110c0cu;
    // NOP
label_110c10:
    // 0x110c10: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x110c14: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x110c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x110c18: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x110c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x110c1c: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x110c1cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x110c20: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x110c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x110c24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x110C24u;
    {
        const bool branch_taken_0x110c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110c24) {
            ctx->pc = 0x110C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110c10;
        }
    }
    ctx->pc = 0x110C2Cu;
label_110c2c:
    // 0x110c2c: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x110C2Cu;
    SET_GPR_U32(ctx, 31, 0x110C34u);
    ctx->pc = 0x110C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C2Cu;
            // 0x110c30: 0x8e24e448  lw          $a0, -0x1BB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C34u; }
        if (ctx->pc != 0x110C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C34u; }
        if (ctx->pc != 0x110C34u) { return; }
    }
    ctx->pc = 0x110C34u;
label_110c34:
    // 0x110c34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x110c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110c3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c44: 0x3e00008  jr          $ra
    ctx->pc = 0x110C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110C44u;
            // 0x110c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110C4Cu;
    // 0x110c4c: 0x0  nop
    ctx->pc = 0x110c4cu;
    // NOP
}
