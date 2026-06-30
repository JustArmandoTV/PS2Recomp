#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6ED8
// Address: 0x1b6ed8 - 0x1b6f70
void sub_001B6ED8_0x1b6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6ED8_0x1b6ed8");
#endif

    switch (ctx->pc) {
        case 0x1b6f1cu: goto label_1b6f1c;
        default: break;
    }

    ctx->pc = 0x1b6ed8u;

    // 0x1b6ed8: 0x24840d88  addiu       $a0, $a0, 0xD88
    ctx->pc = 0x1b6ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1b6edc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ee0: 0x8c83028c  lw          $v1, 0x28C($a0)
    ctx->pc = 0x1b6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x1b6ee4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b6ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b6ee8: 0x8c850290  lw          $a1, 0x290($a0)
    ctx->pc = 0x1b6ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x1b6eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EECu;
            // 0x1b6ef0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6EF4u;
    // 0x1b6ef4: 0x0  nop
    ctx->pc = 0x1b6ef4u;
    // NOP
    // 0x1b6ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6f08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b6f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6f10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6f14: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B6F14u;
    SET_GPR_U32(ctx, 31, 0x1B6F1Cu);
    ctx->pc = 0x1B6F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F14u;
            // 0x1b6f18: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F1Cu; }
        if (ctx->pc != 0x1B6F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F1Cu; }
        if (ctx->pc != 0x1B6F1Cu) { return; }
    }
    ctx->pc = 0x1B6F1Cu;
label_1b6f1c:
    // 0x1b6f1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b6f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6F28u;
    {
        const bool branch_taken_0x1b6f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F28u;
            // 0x1b6f2c: 0x34a50128  ori         $a1, $a1, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f28) {
            ctx->pc = 0x1B6F50u;
            goto label_1b6f50;
        }
    }
    ctx->pc = 0x1B6F30u;
    // 0x1b6f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6f40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6f44: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B6F44u;
    ctx->pc = 0x1B6F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F44u;
            // 0x1b6f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6F4Cu;
    // 0x1b6f4c: 0x0  nop
    ctx->pc = 0x1b6f4cu;
    // NOP
label_1b6f50:
    // 0x1b6f50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6f60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6f64: 0x806dbdc  j           func_1B6F70
    ctx->pc = 0x1B6F64u;
    ctx->pc = 0x1B6F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F64u;
            // 0x1b6f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F70u;
    if (runtime->hasFunction(0x1B6F70u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6F70_0x1b6f70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6F6Cu;
    // 0x1b6f6c: 0x0  nop
    ctx->pc = 0x1b6f6cu;
    // NOP
}
