#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FDB70
// Address: 0x3fdb70 - 0x3fdd10
void sub_003FDB70_0x3fdb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDB70_0x3fdb70");
#endif

    switch (ctx->pc) {
        case 0x3fdb94u: goto label_3fdb94;
        case 0x3fdbc8u: goto label_3fdbc8;
        case 0x3fdc00u: goto label_3fdc00;
        case 0x3fdc40u: goto label_3fdc40;
        case 0x3fdc90u: goto label_3fdc90;
        case 0x3fdcc0u: goto label_3fdcc0;
        case 0x3fdcf0u: goto label_3fdcf0;
        default: break;
    }

    ctx->pc = 0x3fdb70u;

    // 0x3fdb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fdb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3fdb74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fdb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3fdb78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fdb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fdb7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fdb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3fdb80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fdb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdb84: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x3fdb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3fdb88: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3FDB88u;
    {
        const bool branch_taken_0x3fdb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDB88u;
            // 0x3fdb8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdb88) {
            ctx->pc = 0x3FDC58u;
            goto label_3fdc58;
        }
    }
    ctx->pc = 0x3FDB90u;
    // 0x3fdb90: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x3fdb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_3fdb94:
    // 0x3fdb94: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x3fdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fdb98: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x3fdb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x3fdb9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdba4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3fdba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3fdba8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3fdba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3fdbac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3fdbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3fdbb0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3fdbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fdbb4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3fdbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3fdbb8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdbbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdbc0: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDBC0u;
    SET_GPR_U32(ctx, 31, 0x3FDBC8u);
    ctx->pc = 0x3FDBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDBC0u;
            // 0x3fdbc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDBC8u; }
        if (ctx->pc != 0x3FDBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDBC8u; }
        if (ctx->pc != 0x3FDBC8u) { return; }
    }
    ctx->pc = 0x3FDBC8u;
label_3fdbc8:
    // 0x3fdbc8: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x3fdbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3fdbcc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x3fdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fdbd0: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x3fdbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x3fdbd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdbd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdbdc: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3fdbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3fdbe0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3fdbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3fdbe4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3fdbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3fdbe8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3fdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fdbec: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3fdbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3fdbf0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdbf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdbf8: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDBF8u;
    SET_GPR_U32(ctx, 31, 0x3FDC00u);
    ctx->pc = 0x3FDBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDBF8u;
            // 0x3fdbfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDC00u; }
        if (ctx->pc != 0x3FDC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDC00u; }
        if (ctx->pc != 0x3FDC00u) { return; }
    }
    ctx->pc = 0x3FDC00u;
label_3fdc00:
    // 0x3fdc00: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3FDC00u;
    {
        const bool branch_taken_0x3fdc00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fdc00) {
            ctx->pc = 0x3FDC40u;
            goto label_3fdc40;
        }
    }
    ctx->pc = 0x3FDC08u;
    // 0x3fdc08: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x3fdc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3fdc0c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x3fdc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fdc10: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x3fdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x3fdc14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdc18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdc1c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3fdc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3fdc20: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3fdc20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3fdc24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3fdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3fdc28: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3fdc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fdc2c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3fdc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3fdc30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdc34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdc38: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDC38u;
    SET_GPR_U32(ctx, 31, 0x3FDC40u);
    ctx->pc = 0x3FDC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDC38u;
            // 0x3fdc3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDC40u; }
        if (ctx->pc != 0x3FDC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDC40u; }
        if (ctx->pc != 0x3FDC40u) { return; }
    }
    ctx->pc = 0x3FDC40u;
label_3fdc40:
    // 0x3fdc40: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x3fdc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x3fdc44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3fdc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3fdc48: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3fdc48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3fdc4c: 0x5460ffd1  bnel        $v1, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3FDC4Cu;
    {
        const bool branch_taken_0x3fdc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fdc4c) {
            ctx->pc = 0x3FDC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDC4Cu;
            // 0x3fdc50: 0x8e2500fc  lw          $a1, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDB94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fdb94;
        }
    }
    ctx->pc = 0x3FDC54u;
    // 0x3fdc54: 0x0  nop
    ctx->pc = 0x3fdc54u;
    // NOP
label_3fdc58:
    // 0x3fdc58: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x3fdc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3fdc5c: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3FDC5Cu;
    {
        const bool branch_taken_0x3fdc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdc5c) {
            ctx->pc = 0x3FDC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDC5Cu;
            // 0x3fdc60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDCF4u;
            goto label_3fdcf4;
        }
    }
    ctx->pc = 0x3FDC64u;
    // 0x3fdc64: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x3fdc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x3fdc68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3fdc6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdc70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdc74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fdc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3fdc78: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x3fdc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3fdc7c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdc80: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdc84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdc88: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDC88u;
    SET_GPR_U32(ctx, 31, 0x3FDC90u);
    ctx->pc = 0x3FDC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDC88u;
            // 0x3fdc8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDC90u; }
        if (ctx->pc != 0x3FDC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDC90u; }
        if (ctx->pc != 0x3FDC90u) { return; }
    }
    ctx->pc = 0x3FDC90u;
label_3fdc90:
    // 0x3fdc90: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x3fdc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3fdc94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdc98: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x3fdc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x3fdc9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdca0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3fdca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3fdca8: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x3fdca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3fdcac: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdcacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdcb0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdcb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdcb8: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDCB8u;
    SET_GPR_U32(ctx, 31, 0x3FDCC0u);
    ctx->pc = 0x3FDCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDCB8u;
            // 0x3fdcbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDCC0u; }
        if (ctx->pc != 0x3FDCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDCC0u; }
        if (ctx->pc != 0x3FDCC0u) { return; }
    }
    ctx->pc = 0x3FDCC0u;
label_3fdcc0:
    // 0x3fdcc0: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x3fdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3fdcc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdcc8: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x3fdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x3fdccc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdcd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3fdcd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fdcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3fdcd8: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x3fdcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3fdcdc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdce0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdce4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdce8: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDCE8u;
    SET_GPR_U32(ctx, 31, 0x3FDCF0u);
    ctx->pc = 0x3FDCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDCE8u;
            // 0x3fdcec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDCF0u; }
        if (ctx->pc != 0x3FDCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDCF0u; }
        if (ctx->pc != 0x3FDCF0u) { return; }
    }
    ctx->pc = 0x3FDCF0u;
label_3fdcf0:
    // 0x3fdcf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fdcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3fdcf4:
    // 0x3fdcf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fdcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fdcf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fdcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3FDCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDCFCu;
            // 0x3fdd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FDD04u;
    // 0x3fdd04: 0x0  nop
    ctx->pc = 0x3fdd04u;
    // NOP
    // 0x3fdd08: 0x0  nop
    ctx->pc = 0x3fdd08u;
    // NOP
    // 0x3fdd0c: 0x0  nop
    ctx->pc = 0x3fdd0cu;
    // NOP
}
