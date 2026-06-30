#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109F00
// Address: 0x109f00 - 0x109f78
void sub_00109F00_0x109f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109F00_0x109f00");
#endif

    switch (ctx->pc) {
        case 0x109f00u: goto label_109f00;
        case 0x109f04u: goto label_109f04;
        case 0x109f08u: goto label_109f08;
        case 0x109f0cu: goto label_109f0c;
        case 0x109f10u: goto label_109f10;
        case 0x109f14u: goto label_109f14;
        case 0x109f18u: goto label_109f18;
        case 0x109f1cu: goto label_109f1c;
        case 0x109f20u: goto label_109f20;
        case 0x109f24u: goto label_109f24;
        case 0x109f28u: goto label_109f28;
        case 0x109f2cu: goto label_109f2c;
        case 0x109f30u: goto label_109f30;
        case 0x109f34u: goto label_109f34;
        case 0x109f38u: goto label_109f38;
        case 0x109f3cu: goto label_109f3c;
        case 0x109f40u: goto label_109f40;
        case 0x109f44u: goto label_109f44;
        case 0x109f48u: goto label_109f48;
        case 0x109f4cu: goto label_109f4c;
        case 0x109f50u: goto label_109f50;
        case 0x109f54u: goto label_109f54;
        case 0x109f58u: goto label_109f58;
        case 0x109f5cu: goto label_109f5c;
        case 0x109f60u: goto label_109f60;
        case 0x109f64u: goto label_109f64;
        case 0x109f68u: goto label_109f68;
        case 0x109f6cu: goto label_109f6c;
        case 0x109f70u: goto label_109f70;
        case 0x109f74u: goto label_109f74;
        default: break;
    }

    ctx->pc = 0x109f00u;

label_109f00:
    // 0x109f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_109f04:
    // 0x109f04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109f08:
    // 0x109f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_109f0c:
    // 0x109f0c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_109f10:
    if (ctx->pc == 0x109F10u) {
        ctx->pc = 0x109F10u;
            // 0x109f10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x109F14u;
        goto label_109f14;
    }
    ctx->pc = 0x109F0Cu;
    {
        const bool branch_taken_0x109f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F0Cu;
            // 0x109f10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f0c) {
            ctx->pc = 0x109F64u;
            goto label_109f64;
        }
    }
    ctx->pc = 0x109F14u;
label_109f14:
    // 0x109f14: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x109f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_109f18:
    // 0x109f18: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_109f1c:
    if (ctx->pc == 0x109F1Cu) {
        ctx->pc = 0x109F1Cu;
            // 0x109f1c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x109F20u;
        goto label_109f20;
    }
    ctx->pc = 0x109F18u;
    {
        const bool branch_taken_0x109f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F18u;
            // 0x109f1c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f18) {
            ctx->pc = 0x109F64u;
            goto label_109f64;
        }
    }
    ctx->pc = 0x109F20u;
label_109f20:
    // 0x109f20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x109f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_109f24:
    // 0x109f24: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x109f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_109f28:
    // 0x109f28: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_109f2c:
    // 0x109f2c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x109f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_109f30:
    // 0x109f30: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_109f34:
    if (ctx->pc == 0x109F34u) {
        ctx->pc = 0x109F34u;
            // 0x109f34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x109F38u;
        goto label_109f38;
    }
    ctx->pc = 0x109F30u;
    {
        const bool branch_taken_0x109f30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F30u;
            // 0x109f34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f30) {
            ctx->pc = 0x109F68u;
            goto label_109f68;
        }
    }
    ctx->pc = 0x109F38u;
label_109f38:
    // 0x109f38: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_109f3c:
    // 0x109f3c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x109f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109f40:
    // 0x109f40: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x109f40u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109f44:
    // 0x109f44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x109f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_109f48:
    // 0x109f48: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x109f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_109f4c:
    // 0x109f4c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x109f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_109f50:
    // 0x109f50: 0xe0f809  jalr        $a3
label_109f54:
    if (ctx->pc == 0x109F54u) {
        ctx->pc = 0x109F54u;
            // 0x109f54: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x109F58u;
        goto label_109f58;
    }
    ctx->pc = 0x109F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x109F58u);
        ctx->pc = 0x109F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F50u;
            // 0x109f54: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x109F58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x109F58u; }
            if (ctx->pc != 0x109F58u) { return; }
        }
        }
    }
    ctx->pc = 0x109F58u;
label_109f58:
    // 0x109f58: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x109f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109f5c:
    // 0x109f5c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x109f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109f60:
    // 0x109f60: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x109f60u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109f64:
    // 0x109f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109f68:
    // 0x109f68: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x109f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_109f6c:
    // 0x109f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_109f70:
    // 0x109f70: 0x3e00008  jr          $ra
label_109f74:
    if (ctx->pc == 0x109F74u) {
        ctx->pc = 0x109F74u;
            // 0x109f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x109F78u;
        goto label_fallthrough_0x109f70;
    }
    ctx->pc = 0x109F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F70u;
            // 0x109f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x109f70:
    ctx->pc = 0x109F78u;
}
