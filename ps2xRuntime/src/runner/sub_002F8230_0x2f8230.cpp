#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8230
// Address: 0x2f8230 - 0x2f8280
void sub_002F8230_0x2f8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8230_0x2f8230");
#endif

    switch (ctx->pc) {
        case 0x2f8274u: goto label_2f8274;
        default: break;
    }

    ctx->pc = 0x2f8230u;

    // 0x2f8230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f8230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f8234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f8238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f823c: 0x8c8600cc  lw          $a2, 0xCC($a0)
    ctx->pc = 0x2f823cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x2f8240: 0x54c3000d  bnel        $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F8240u;
    {
        const bool branch_taken_0x2f8240 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8240) {
            ctx->pc = 0x2F8244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8240u;
            // 0x2f8244: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8278u;
            goto label_2f8278;
        }
    }
    ctx->pc = 0x2F8248u;
    // 0x2f8248: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x2f8248u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2f824c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2f824cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f8250: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2f8250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f8254: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8254u;
    {
        const bool branch_taken_0x2f8254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8254) {
            ctx->pc = 0x2F8274u;
            goto label_2f8274;
        }
    }
    ctx->pc = 0x2F825Cu;
    // 0x2f825c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2f825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f8260: 0x90630018  lbu         $v1, 0x18($v1)
    ctx->pc = 0x2f8260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f8264: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8264u;
    {
        const bool branch_taken_0x2f8264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8264) {
            ctx->pc = 0x2F8274u;
            goto label_2f8274;
        }
    }
    ctx->pc = 0x2F826Cu;
    // 0x2f826c: 0xc0be10c  jal         func_2F8430
    ctx->pc = 0x2F826Cu;
    SET_GPR_U32(ctx, 31, 0x2F8274u);
    ctx->pc = 0x2F8430u;
    if (runtime->hasFunction(0x2F8430u)) {
        auto targetFn = runtime->lookupFunction(0x2F8430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8274u; }
        if (ctx->pc != 0x2F8274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8430_0x2f8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8274u; }
        if (ctx->pc != 0x2F8274u) { return; }
    }
    ctx->pc = 0x2F8274u;
label_2f8274:
    // 0x2f8274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f8274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8278:
    // 0x2f8278: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8278u;
            // 0x2f827c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8280u;
}
