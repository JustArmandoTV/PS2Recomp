#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304F20
// Address: 0x304f20 - 0x304f90
void sub_00304F20_0x304f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304F20_0x304f20");
#endif

    switch (ctx->pc) {
        case 0x304f78u: goto label_304f78;
        default: break;
    }

    ctx->pc = 0x304f20u;

    // 0x304f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304f28: 0x8c830d60  lw          $v1, 0xD60($a0)
    ctx->pc = 0x304f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x304f2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x304f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304f30: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x304f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x304f34: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x304F34u;
    {
        const bool branch_taken_0x304f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304f34) {
            ctx->pc = 0x304F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304F34u;
            // 0x304f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304F7Cu;
            goto label_304f7c;
        }
    }
    ctx->pc = 0x304F3Cu;
    // 0x304f3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x304f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x304f40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x304f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x304f44: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x304f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x304f48: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x304f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x304f4c: 0x54650008  bnel        $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x304F4Cu;
    {
        const bool branch_taken_0x304f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x304f4c) {
            ctx->pc = 0x304F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304F4Cu;
            // 0x304f50: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304F70u;
            goto label_304f70;
        }
    }
    ctx->pc = 0x304F54u;
    // 0x304f54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x304f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x304f58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x304f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x304f5c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x304f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x304f60: 0x90630ce4  lbu         $v1, 0xCE4($v1)
    ctx->pc = 0x304f60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3300)));
    // 0x304f64: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x304F64u;
    {
        const bool branch_taken_0x304f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x304f64) {
            ctx->pc = 0x304F78u;
            goto label_304f78;
        }
    }
    ctx->pc = 0x304F6Cu;
    // 0x304f6c: 0x8c840d70  lw          $a0, 0xD70($a0)
    ctx->pc = 0x304f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_304f70:
    // 0x304f70: 0xc0be0a0  jal         func_2F8280
    ctx->pc = 0x304F70u;
    SET_GPR_U32(ctx, 31, 0x304F78u);
    ctx->pc = 0x2F8280u;
    if (runtime->hasFunction(0x2F8280u)) {
        auto targetFn = runtime->lookupFunction(0x2F8280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F78u; }
        if (ctx->pc != 0x304F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8280_0x2f8280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F78u; }
        if (ctx->pc != 0x304F78u) { return; }
    }
    ctx->pc = 0x304F78u;
label_304f78:
    // 0x304f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304f7c:
    // 0x304f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x304F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304F7Cu;
            // 0x304f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304F84u;
    // 0x304f84: 0x0  nop
    ctx->pc = 0x304f84u;
    // NOP
    // 0x304f88: 0x0  nop
    ctx->pc = 0x304f88u;
    // NOP
    // 0x304f8c: 0x0  nop
    ctx->pc = 0x304f8cu;
    // NOP
}
