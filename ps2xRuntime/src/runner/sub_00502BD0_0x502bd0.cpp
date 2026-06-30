#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502BD0
// Address: 0x502bd0 - 0x502c30
void sub_00502BD0_0x502bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502BD0_0x502bd0");
#endif

    switch (ctx->pc) {
        case 0x502c18u: goto label_502c18;
        default: break;
    }

    ctx->pc = 0x502bd0u;

    // 0x502bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x502bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x502bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x502bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x502bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x502bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x502bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502be0: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x502BE0u;
    {
        const bool branch_taken_0x502be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x502be0) {
            ctx->pc = 0x502BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502BE0u;
            // 0x502be4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502C1Cu;
            goto label_502c1c;
        }
    }
    ctx->pc = 0x502BE8u;
    // 0x502be8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x502be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x502bec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x502BECu;
    {
        const bool branch_taken_0x502bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502bec) {
            ctx->pc = 0x502BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502BECu;
            // 0x502bf0: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502C04u;
            goto label_502c04;
        }
    }
    ctx->pc = 0x502BF4u;
    // 0x502bf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x502bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x502bf8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x502bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x502bfc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x502bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x502c00: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x502c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_502c04:
    // 0x502c04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x502c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x502c08: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x502C08u;
    {
        const bool branch_taken_0x502c08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x502c08) {
            ctx->pc = 0x502C18u;
            goto label_502c18;
        }
    }
    ctx->pc = 0x502C10u;
    // 0x502c10: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x502C10u;
    SET_GPR_U32(ctx, 31, 0x502C18u);
    ctx->pc = 0x502C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502C10u;
            // 0x502c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502C18u; }
        if (ctx->pc != 0x502C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502C18u; }
        if (ctx->pc != 0x502C18u) { return; }
    }
    ctx->pc = 0x502C18u;
label_502c18:
    // 0x502c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x502c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_502c1c:
    // 0x502c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x502c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x502c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x502c24: 0x3e00008  jr          $ra
    ctx->pc = 0x502C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502C24u;
            // 0x502c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502C2Cu;
    // 0x502c2c: 0x0  nop
    ctx->pc = 0x502c2cu;
    // NOP
}
