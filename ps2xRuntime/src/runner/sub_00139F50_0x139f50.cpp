#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139F50
// Address: 0x139f50 - 0x13a000
void sub_00139F50_0x139f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139F50_0x139f50");
#endif

    switch (ctx->pc) {
        case 0x139f74u: goto label_139f74;
        case 0x139facu: goto label_139fac;
        default: break;
    }

    ctx->pc = 0x139f50u;

    // 0x139f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139f5c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x139f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x139f60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x139f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x139f64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x139F64u;
    {
        const bool branch_taken_0x139f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F64u;
            // 0x139f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f64) {
            ctx->pc = 0x139F94u;
            goto label_139f94;
        }
    }
    ctx->pc = 0x139F6Cu;
    // 0x139f6c: 0xc0568d4  jal         func_15A350
    ctx->pc = 0x139F6Cu;
    SET_GPR_U32(ctx, 31, 0x139F74u);
    ctx->pc = 0x15A350u;
    if (runtime->hasFunction(0x15A350u)) {
        auto targetFn = runtime->lookupFunction(0x15A350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139F74u; }
        if (ctx->pc != 0x139F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A350_0x15a350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139F74u; }
        if (ctx->pc != 0x139F74u) { return; }
    }
    ctx->pc = 0x139F74u;
label_139f74:
    // 0x139f74: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139F74u;
    {
        const bool branch_taken_0x139f74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x139f74) {
            ctx->pc = 0x139F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139F74u;
            // 0x139f78: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139F84u;
            goto label_139f84;
        }
    }
    ctx->pc = 0x139F7Cu;
    // 0x139f7c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x139F7Cu;
    {
        const bool branch_taken_0x139f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F7Cu;
            // 0x139f80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f7c) {
            ctx->pc = 0x139FECu;
            goto label_139fec;
        }
    }
    ctx->pc = 0x139F84u;
label_139f84:
    // 0x139f84: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x139f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139f88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139f8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x139F8Cu;
    {
        const bool branch_taken_0x139f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F8Cu;
            // 0x139f90: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f8c) {
            ctx->pc = 0x139FACu;
            goto label_139fac;
        }
    }
    ctx->pc = 0x139F94u;
label_139f94:
    // 0x139f94: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x139f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x139f98: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x139F98u;
    {
        const bool branch_taken_0x139f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139f98) {
            ctx->pc = 0x139F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139F98u;
            // 0x139f9c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139FB0u;
            goto label_139fb0;
        }
    }
    ctx->pc = 0x139FA0u;
    // 0x139fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fa4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x139FA4u;
    SET_GPR_U32(ctx, 31, 0x139FACu);
    ctx->pc = 0x139FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139FA4u;
            // 0x139fa8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139FACu; }
        if (ctx->pc != 0x139FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139FACu; }
        if (ctx->pc != 0x139FACu) { return; }
    }
    ctx->pc = 0x139FACu;
label_139fac:
    // 0x139fac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x139facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_139fb0:
    // 0x139fb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x139FB0u;
    {
        const bool branch_taken_0x139fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139fb0) {
            ctx->pc = 0x139FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139FB0u;
            // 0x139fb4: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139FD8u;
            goto label_139fd8;
        }
    }
    ctx->pc = 0x139FB8u;
    // 0x139fb8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x139fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x139fbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x139fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139fc0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x139fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x139fc4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x139fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x139fc8: 0xa6000048  sh          $zero, 0x48($s0)
    ctx->pc = 0x139fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x139fcc: 0xa600004a  sh          $zero, 0x4A($s0)
    ctx->pc = 0x139fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x139fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139FD0u;
    {
        const bool branch_taken_0x139fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139FD0u;
            // 0x139fd4: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139fd0) {
            ctx->pc = 0x139FE4u;
            goto label_139fe4;
        }
    }
    ctx->pc = 0x139FD8u;
label_139fd8:
    // 0x139fd8: 0x2402f8ff  addiu       $v0, $zero, -0x701
    ctx->pc = 0x139fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x139fdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139fe0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x139fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_139fe4:
    // 0x139fe4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x139fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x139fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139fec:
    // 0x139fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x139FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139FF4u;
            // 0x139ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139FFCu;
    // 0x139ffc: 0x0  nop
    ctx->pc = 0x139ffcu;
    // NOP
}
