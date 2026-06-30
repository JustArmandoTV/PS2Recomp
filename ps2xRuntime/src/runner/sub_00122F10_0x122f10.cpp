#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122F10
// Address: 0x122f10 - 0x122f98
void sub_00122F10_0x122f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F10_0x122f10");
#endif

    switch (ctx->pc) {
        case 0x122f50u: goto label_122f50;
        case 0x122f5cu: goto label_122f5c;
        default: break;
    }

    ctx->pc = 0x122f10u;

    // 0x122f10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122f14: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122f18: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x122f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x122f1c: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x122f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x122f20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x122f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122f24: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x122f24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x122f28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x122f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122f2c: 0x399c3  sra         $s3, $v1, 7
    ctx->pc = 0x122f2cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 7));
    // 0x122f30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x122f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122f34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x122f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122f3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x122f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122f44: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x122F44u;
    {
        const bool branch_taken_0x122f44 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x122F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122F44u;
            // 0x122f48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f44) {
            ctx->pc = 0x122F74u;
            goto label_122f74;
        }
    }
    ctx->pc = 0x122F4Cu;
    // 0x122f4c: 0x0  nop
    ctx->pc = 0x122f4cu;
    // NOP
label_122f50:
    // 0x122f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f54: 0xc048b7e  jal         func_122DF8
    ctx->pc = 0x122F54u;
    SET_GPR_U32(ctx, 31, 0x122F5Cu);
    ctx->pc = 0x122F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122F54u;
            // 0x122f58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DF8u;
    if (runtime->hasFunction(0x122DF8u)) {
        auto targetFn = runtime->lookupFunction(0x122DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F5Cu; }
        if (ctx->pc != 0x122F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122DF8_0x122df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F5Cu; }
        if (ctx->pc != 0x122F5Cu) { return; }
    }
    ctx->pc = 0x122F5Cu;
label_122f5c:
    // 0x122f5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x122F5Cu;
    {
        const bool branch_taken_0x122f5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x122F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122F5Cu;
            // 0x122f60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f5c) {
            ctx->pc = 0x122F78u;
            goto label_122f78;
        }
    }
    ctx->pc = 0x122F64u;
    // 0x122f64: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x122f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x122f68: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x122f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x122f6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x122F6Cu;
    {
        const bool branch_taken_0x122f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122F6Cu;
            // 0x122f70: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f6c) {
            ctx->pc = 0x122F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122f50;
        }
    }
    ctx->pc = 0x122F74u;
label_122f74:
    // 0x122f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122f78:
    // 0x122f78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122f7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x122f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122f80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x122f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x122f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x122F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122F8Cu;
            // 0x122f90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122F94u;
    // 0x122f94: 0x0  nop
    ctx->pc = 0x122f94u;
    // NOP
}
