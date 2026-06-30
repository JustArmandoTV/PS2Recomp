#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108BC8
// Address: 0x108bc8 - 0x108d20
void sub_00108BC8_0x108bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108BC8_0x108bc8");
#endif

    switch (ctx->pc) {
        case 0x108c10u: goto label_108c10;
        case 0x108c24u: goto label_108c24;
        case 0x108c30u: goto label_108c30;
        case 0x108c38u: goto label_108c38;
        case 0x108c44u: goto label_108c44;
        case 0x108c60u: goto label_108c60;
        case 0x108ca4u: goto label_108ca4;
        case 0x108cb4u: goto label_108cb4;
        case 0x108cc4u: goto label_108cc4;
        case 0x108cdcu: goto label_108cdc;
        default: break;
    }

    ctx->pc = 0x108bc8u;

    // 0x108bc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x108bcc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x108bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x108bd0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x108bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x108bd4: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x108bd8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x108bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x108bdc: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x108bdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x108be0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x108be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x108be4: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x108be8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x108be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x108bec: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x108becu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x108bf0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x108bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x108bf4: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x108bf8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x108bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x108bfc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108c00: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x108c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x108c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c08: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x108c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x108c0c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x108c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_108c10:
    // 0x108c10: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x108C10u;
    {
        const bool branch_taken_0x108c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C10u;
            // 0x108c14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c10) {
            ctx->pc = 0x108CF0u;
            goto label_108cf0;
        }
    }
    ctx->pc = 0x108C18u;
    // 0x108c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c1c: 0xc04234a  jal         func_108D28
    ctx->pc = 0x108C1Cu;
    SET_GPR_U32(ctx, 31, 0x108C24u);
    ctx->pc = 0x108C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C1Cu;
            // 0x108c20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D28u;
    if (runtime->hasFunction(0x108D28u)) {
        auto targetFn = runtime->lookupFunction(0x108D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C24u; }
        if (ctx->pc != 0x108C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D28_0x108d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C24u; }
        if (ctx->pc != 0x108C24u) { return; }
    }
    ctx->pc = 0x108C24u;
label_108c24:
    // 0x108c24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x108C24u;
    {
        const bool branch_taken_0x108c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C24u;
            // 0x108c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c24) {
            ctx->pc = 0x108C3Cu;
            goto label_108c3c;
        }
    }
    ctx->pc = 0x108C2Cu;
    // 0x108c2c: 0x0  nop
    ctx->pc = 0x108c2cu;
    // NOP
label_108c30:
    // 0x108c30: 0xc0422f0  jal         func_108BC0
    ctx->pc = 0x108C30u;
    SET_GPR_U32(ctx, 31, 0x108C38u);
    ctx->pc = 0x108C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C30u;
            // 0x108c34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C38u; }
        if (ctx->pc != 0x108C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C38u; }
        if (ctx->pc != 0x108C38u) { return; }
    }
    ctx->pc = 0x108C38u;
label_108c38:
    // 0x108c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108c3c:
    // 0x108c3c: 0xc041a4c  jal         func_106930
    ctx->pc = 0x108C3Cu;
    SET_GPR_U32(ctx, 31, 0x108C44u);
    ctx->pc = 0x108C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C3Cu;
            // 0x108c40: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C44u; }
        if (ctx->pc != 0x108C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C44u; }
        if (ctx->pc != 0x108C44u) { return; }
    }
    ctx->pc = 0x108C44u;
label_108c44:
    // 0x108c44: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x108C44u;
    {
        const bool branch_taken_0x108c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x108C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C44u;
            // 0x108c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c44) {
            ctx->pc = 0x108C58u;
            goto label_108c58;
        }
    }
    ctx->pc = 0x108C4Cu;
    // 0x108c4c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x108c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x108c50: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x108C50u;
    {
        const bool branch_taken_0x108c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108c50) {
            ctx->pc = 0x108C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c30;
        }
    }
    ctx->pc = 0x108C58u;
label_108c58:
    // 0x108c58: 0xc041a12  jal         func_106848
    ctx->pc = 0x108C58u;
    SET_GPR_U32(ctx, 31, 0x108C60u);
    ctx->pc = 0x108C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C58u;
            // 0x108c5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C60u; }
        if (ctx->pc != 0x108C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C60u; }
        if (ctx->pc != 0x108C60u) { return; }
    }
    ctx->pc = 0x108C60u;
label_108c60:
    // 0x108c60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c64: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x108C64u;
    {
        const bool branch_taken_0x108c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x108C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C64u;
            // 0x108c68: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c64) {
            ctx->pc = 0x108C9Cu;
            goto label_108c9c;
        }
    }
    ctx->pc = 0x108C6Cu;
    // 0x108c6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108C6Cu;
    {
        const bool branch_taken_0x108c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108c6c) {
            ctx->pc = 0x108C84u;
            goto label_108c84;
        }
    }
    ctx->pc = 0x108C74u;
    // 0x108c74: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x108C74u;
    {
        const bool branch_taken_0x108c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x108c74) {
            ctx->pc = 0x108CBCu;
            goto label_108cbc;
        }
    }
    ctx->pc = 0x108C7Cu;
    // 0x108c7c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x108C7Cu;
    {
        const bool branch_taken_0x108c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C7Cu;
            // 0x108c80: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c7c) {
            ctx->pc = 0x108C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c10;
        }
    }
    ctx->pc = 0x108C84u;
label_108c84:
    // 0x108c84: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x108C84u;
    {
        const bool branch_taken_0x108c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x108C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C84u;
            // 0x108c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c84) {
            ctx->pc = 0x108CF0u;
            goto label_108cf0;
        }
    }
    ctx->pc = 0x108C8Cu;
    // 0x108c8c: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x108C8Cu;
    {
        const bool branch_taken_0x108c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x108c8c) {
            ctx->pc = 0x108CACu;
            goto label_108cac;
        }
    }
    ctx->pc = 0x108C94u;
    // 0x108c94: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x108C94u;
    {
        const bool branch_taken_0x108c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C94u;
            // 0x108c98: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c94) {
            ctx->pc = 0x108C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c10;
        }
    }
    ctx->pc = 0x108C9Cu;
label_108c9c:
    // 0x108c9c: 0xc042034  jal         func_1080D0
    ctx->pc = 0x108C9Cu;
    SET_GPR_U32(ctx, 31, 0x108CA4u);
    ctx->pc = 0x108CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C9Cu;
            // 0x108ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1080D0u;
    if (runtime->hasFunction(0x1080D0u)) {
        auto targetFn = runtime->lookupFunction(0x1080D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CA4u; }
        if (ctx->pc != 0x108CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001080D0_0x1080d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CA4u; }
        if (ctx->pc != 0x108CA4u) { return; }
    }
    ctx->pc = 0x108CA4u;
label_108ca4:
    // 0x108ca4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x108CA4u;
    {
        const bool branch_taken_0x108ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108CA4u;
            // 0x108ca8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ca4) {
            ctx->pc = 0x108C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c10;
        }
    }
    ctx->pc = 0x108CACu;
label_108cac:
    // 0x108cac: 0xc0420e0  jal         func_108380
    ctx->pc = 0x108CACu;
    SET_GPR_U32(ctx, 31, 0x108CB4u);
    ctx->pc = 0x108CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108CACu;
            // 0x108cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108380u;
    if (runtime->hasFunction(0x108380u)) {
        auto targetFn = runtime->lookupFunction(0x108380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CB4u; }
        if (ctx->pc != 0x108CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108380_0x108380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CB4u; }
        if (ctx->pc != 0x108CB4u) { return; }
    }
    ctx->pc = 0x108CB4u;
label_108cb4:
    // 0x108cb4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x108CB4u;
    {
        const bool branch_taken_0x108cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108CB4u;
            // 0x108cb8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cb4) {
            ctx->pc = 0x108C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c10;
        }
    }
    ctx->pc = 0x108CBCu;
label_108cbc:
    // 0x108cbc: 0xc042108  jal         func_108420
    ctx->pc = 0x108CBCu;
    SET_GPR_U32(ctx, 31, 0x108CC4u);
    ctx->pc = 0x108CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108CBCu;
            // 0x108cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108420u;
    if (runtime->hasFunction(0x108420u)) {
        auto targetFn = runtime->lookupFunction(0x108420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CC4u; }
        if (ctx->pc != 0x108CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108420_0x108420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CC4u; }
        if (ctx->pc != 0x108CC4u) { return; }
    }
    ctx->pc = 0x108CC4u;
label_108cc4:
    // 0x108cc4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x108cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x108cc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x108cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ccc: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x108cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x108cd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108cd4: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x108CD4u;
    SET_GPR_U32(ctx, 31, 0x108CDCu);
    ctx->pc = 0x108CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108CD4u;
            // 0x108cd8: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CDCu; }
        if (ctx->pc != 0x108CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CDCu; }
        if (ctx->pc != 0x108CDCu) { return; }
    }
    ctx->pc = 0x108CDCu;
label_108cdc:
    // 0x108cdc: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x108cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108ce0: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x108ce0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108ce4: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x108ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x108ce8: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x108ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x108cec: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x108cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_108cf0:
    // 0x108cf0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108cf4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x108cf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108cf8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x108cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108cfc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108d00: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x108d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108d04: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x108d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108d08: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108d0c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108d10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108d14: 0x3e00008  jr          $ra
    ctx->pc = 0x108D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D14u;
            // 0x108d18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108D1Cu;
    // 0x108d1c: 0x0  nop
    ctx->pc = 0x108d1cu;
    // NOP
}
