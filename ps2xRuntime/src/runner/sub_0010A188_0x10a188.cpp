#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A188
// Address: 0x10a188 - 0x10a258
void sub_0010A188_0x10a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A188_0x10a188");
#endif

    switch (ctx->pc) {
        case 0x10a1c4u: goto label_10a1c4;
        case 0x10a224u: goto label_10a224;
        case 0x10a22cu: goto label_10a22c;
        default: break;
    }

    ctx->pc = 0x10a188u;

    // 0x10a188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a18c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a19c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a1a0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10a1a4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10A1A4u;
    {
        const bool branch_taken_0x10a1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1A4u;
            // 0x10a1a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1a4) {
            ctx->pc = 0x10A1D0u;
            goto label_10a1d0;
        }
    }
    ctx->pc = 0x10A1ACu;
    // 0x10a1ac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x10a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x10a1b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A1B0u;
    {
        const bool branch_taken_0x10a1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1B0u;
            // 0x10a1b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1b0) {
            ctx->pc = 0x10A1D0u;
            goto label_10a1d0;
        }
    }
    ctx->pc = 0x10A1B8u;
    // 0x10a1b8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x10a1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x10a1bc: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10A1BCu;
    SET_GPR_U32(ctx, 31, 0x10A1C4u);
    ctx->pc = 0x10A1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1BCu;
            // 0x10a1c0: 0x24a5ead8  addiu       $a1, $a1, -0x1528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A1C4u; }
        if (ctx->pc != 0x10A1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A1C4u; }
        if (ctx->pc != 0x10A1C4u) { return; }
    }
    ctx->pc = 0x10A1C4u;
label_10a1c4:
    // 0x10a1c4: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x10a1c8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10a1cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10a1d0:
    // 0x10a1d0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10A1D0u;
    {
        const bool branch_taken_0x10a1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1D0u;
            // 0x10a1d4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1d0) {
            ctx->pc = 0x10A20Cu;
            goto label_10a20c;
        }
    }
    ctx->pc = 0x10A1D8u;
    // 0x10a1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A1D8u;
    {
        const bool branch_taken_0x10a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1D8u;
            // 0x10a1dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1d8) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A1E0u;
    // 0x10a1e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A1E0u;
    {
        const bool branch_taken_0x10a1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1E0u;
            // 0x10a1e4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1e0) {
            ctx->pc = 0x10A204u;
            goto label_10a204;
        }
    }
    ctx->pc = 0x10A1E8u;
    // 0x10a1e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10A1E8u;
    {
        const bool branch_taken_0x10a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1E8u;
            // 0x10a1ec: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1e8) {
            ctx->pc = 0x10A218u;
            goto label_10a218;
        }
    }
    ctx->pc = 0x10A1F0u;
label_10a1f0:
    // 0x10a1f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a1f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A1F4u;
    {
        const bool branch_taken_0x10a1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1F4u;
            // 0x10a1f8: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1f4) {
            ctx->pc = 0x10A214u;
            goto label_10a214;
        }
    }
    ctx->pc = 0x10A1FCu;
    // 0x10a1fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10A1FCu;
    {
        const bool branch_taken_0x10a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1FCu;
            // 0x10a200: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1fc) {
            ctx->pc = 0x10A224u;
            goto label_10a224;
        }
    }
    ctx->pc = 0x10A204u;
label_10a204:
    // 0x10a204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A204u;
    {
        const bool branch_taken_0x10a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A204u;
            // 0x10a208: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a204) {
            ctx->pc = 0x10A224u;
            goto label_10a224;
        }
    }
    ctx->pc = 0x10A20Cu;
label_10a20c:
    // 0x10a20c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A20Cu;
    {
        const bool branch_taken_0x10a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A20Cu;
            // 0x10a210: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a20c) {
            ctx->pc = 0x10A224u;
            goto label_10a224;
        }
    }
    ctx->pc = 0x10A214u;
label_10a214:
    // 0x10a214: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x10a214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_10a218:
    // 0x10a218: 0x24a5eaf8  addiu       $a1, $a1, -0x1508
    ctx->pc = 0x10a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961912));
    // 0x10a21c: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10A21Cu;
    SET_GPR_U32(ctx, 31, 0x10A224u);
    ctx->pc = 0x10A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A21Cu;
            // 0x10a220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A224u; }
        if (ctx->pc != 0x10A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A224u; }
        if (ctx->pc != 0x10A224u) { return; }
    }
    ctx->pc = 0x10A224u;
label_10a224:
    // 0x10a224: 0xc0414d6  jal         func_105358
    ctx->pc = 0x10A224u;
    SET_GPR_U32(ctx, 31, 0x10A22Cu);
    ctx->pc = 0x10A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A224u;
            // 0x10a228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (runtime->hasFunction(0x105358u)) {
        auto targetFn = runtime->lookupFunction(0x105358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A22Cu; }
        if (ctx->pc != 0x10A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105358_0x105358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A22Cu; }
        if (ctx->pc != 0x10A22Cu) { return; }
    }
    ctx->pc = 0x10A22Cu;
label_10a22c:
    // 0x10a22c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a22cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a230: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A230u;
    {
        const bool branch_taken_0x10a230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A230u;
            // 0x10a234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a230) {
            ctx->pc = 0x10A23Cu;
            goto label_10a23c;
        }
    }
    ctx->pc = 0x10A238u;
    // 0x10a238: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x10a238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_10a23c:
    // 0x10a23c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a240: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10a240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a244: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a24c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A24Cu;
            // 0x10a250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A254u;
    // 0x10a254: 0x0  nop
    ctx->pc = 0x10a254u;
    // NOP
}
