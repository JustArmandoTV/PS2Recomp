#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4230
// Address: 0x4e4230 - 0x4e4290
void sub_004E4230_0x4e4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4230_0x4e4230");
#endif

    switch (ctx->pc) {
        case 0x4e4270u: goto label_4e4270;
        default: break;
    }

    ctx->pc = 0x4e4230u;

    // 0x4e4230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e4234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e4234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e4238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e423c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e423cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4240: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4E4240u;
    {
        const bool branch_taken_0x4e4240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4240) {
            ctx->pc = 0x4E4244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4240u;
            // 0x4e4244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4274u;
            goto label_4e4274;
        }
    }
    ctx->pc = 0x4E4248u;
    // 0x4e4248: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e4248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e424c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4e424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4e4250: 0x24423880  addiu       $v0, $v0, 0x3880
    ctx->pc = 0x4e4250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14464));
    // 0x4e4254: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e4254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4e4258: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e4258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e425c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e425cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4e4260: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E4260u;
    {
        const bool branch_taken_0x4e4260 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4E4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4260u;
            // 0x4e4264: 0xac40aa98  sw          $zero, -0x5568($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4260) {
            ctx->pc = 0x4E4270u;
            goto label_4e4270;
        }
    }
    ctx->pc = 0x4E4268u;
    // 0x4e4268: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E4268u;
    SET_GPR_U32(ctx, 31, 0x4E4270u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4270u; }
        if (ctx->pc != 0x4E4270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4270u; }
        if (ctx->pc != 0x4E4270u) { return; }
    }
    ctx->pc = 0x4E4270u;
label_4e4270:
    // 0x4e4270: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e4270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4274:
    // 0x4e4274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e4274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e427c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E427Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E427Cu;
            // 0x4e4280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4284u;
    // 0x4e4284: 0x0  nop
    ctx->pc = 0x4e4284u;
    // NOP
    // 0x4e4288: 0x0  nop
    ctx->pc = 0x4e4288u;
    // NOP
    // 0x4e428c: 0x0  nop
    ctx->pc = 0x4e428cu;
    // NOP
}
