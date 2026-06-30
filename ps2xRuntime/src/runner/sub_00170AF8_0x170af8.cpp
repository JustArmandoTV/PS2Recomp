#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170AF8
// Address: 0x170af8 - 0x170b68
void sub_00170AF8_0x170af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170AF8_0x170af8");
#endif

    switch (ctx->pc) {
        case 0x170b0cu: goto label_170b0c;
        case 0x170b14u: goto label_170b14;
        case 0x170b20u: goto label_170b20;
        case 0x170b28u: goto label_170b28;
        case 0x170b48u: goto label_170b48;
        default: break;
    }

    ctx->pc = 0x170af8u;

    // 0x170af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170b00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170b04: 0xc05c396  jal         func_170E58
    ctx->pc = 0x170B04u;
    SET_GPR_U32(ctx, 31, 0x170B0Cu);
    ctx->pc = 0x170B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B04u;
            // 0x170b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B0Cu; }
        if (ctx->pc != 0x170B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B0Cu; }
        if (ctx->pc != 0x170B0Cu) { return; }
    }
    ctx->pc = 0x170B0Cu;
label_170b0c:
    // 0x170b0c: 0xc05c296  jal         func_170A58
    ctx->pc = 0x170B0Cu;
    SET_GPR_U32(ctx, 31, 0x170B14u);
    ctx->pc = 0x170B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B0Cu;
            // 0x170b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B14u; }
        if (ctx->pc != 0x170B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A58_0x170a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B14u; }
        if (ctx->pc != 0x170B14u) { return; }
    }
    ctx->pc = 0x170B14u;
label_170b14:
    // 0x170b14: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x170b18: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x170B18u;
    {
        const bool branch_taken_0x170b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170b18) {
            ctx->pc = 0x170B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170B18u;
            // 0x170b1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170B38u;
            goto label_170b38;
        }
    }
    ctx->pc = 0x170B20u;
label_170b20:
    // 0x170b20: 0xc05adda  jal         func_16B768
    ctx->pc = 0x170B20u;
    SET_GPR_U32(ctx, 31, 0x170B28u);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B28u; }
        if (ctx->pc != 0x170B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B28u; }
        if (ctx->pc != 0x170B28u) { return; }
    }
    ctx->pc = 0x170B28u;
label_170b28:
    // 0x170b28: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x170b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x170b2c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x170B2Cu;
    {
        const bool branch_taken_0x170b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b2c) {
            ctx->pc = 0x170B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170b20;
        }
    }
    ctx->pc = 0x170B34u;
    // 0x170b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170b38:
    // 0x170b38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x170B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B3Cu;
            // 0x170b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170B44u;
    // 0x170b44: 0x0  nop
    ctx->pc = 0x170b44u;
    // NOP
label_170b48:
    // 0x170b48: 0x80830049  lb          $v1, 0x49($a0)
    ctx->pc = 0x170b48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x170b4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170B4Cu;
    {
        const bool branch_taken_0x170b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B4Cu;
            // 0x170b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b4c) {
            ctx->pc = 0x170B5Cu;
            goto label_170b5c;
        }
    }
    ctx->pc = 0x170B54u;
    // 0x170b54: 0x8082004d  lb          $v0, 0x4D($a0)
    ctx->pc = 0x170b54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x170b58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170b5c:
    // 0x170b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x170B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170B64u;
    // 0x170b64: 0x0  nop
    ctx->pc = 0x170b64u;
    // NOP
}
