#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197B18
// Address: 0x197b18 - 0x197c20
void sub_00197B18_0x197b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197B18_0x197b18");
#endif

    switch (ctx->pc) {
        case 0x197bd0u: goto label_197bd0;
        case 0x197be0u: goto label_197be0;
        default: break;
    }

    ctx->pc = 0x197b18u;

    // 0x197b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197b1c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x197b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x197b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x197b24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x197b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x197b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x197b2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x197b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197b34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x197b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x197b3c: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x197b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x197b40: 0x350840d0  ori         $t0, $t0, 0x40D0
    ctx->pc = 0x197b40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16592);
    // 0x197b44: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x197b48: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x197b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x197b4c: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x197b50: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x197b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x197b54: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x197b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x197b58: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x197b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x197b5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x197b60: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x197b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x197b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197b68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x197b6c: 0x24452840  addiu       $a1, $v0, 0x2840
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x197b70: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x197B70u;
    {
        const bool branch_taken_0x197b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B70u;
            // 0x197b74: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b70) {
            ctx->pc = 0x197BC8u;
            goto label_197bc8;
        }
    }
    ctx->pc = 0x197B78u;
    // 0x197b78: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x197b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x197b7c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x197B7Cu;
    {
        const bool branch_taken_0x197b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b7c) {
            ctx->pc = 0x197B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197B7Cu;
            // 0x197b80: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197BB8u;
            goto label_197bb8;
        }
    }
    ctx->pc = 0x197B84u;
    // 0x197b84: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x197b88: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x197b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x197b8c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x197B8Cu;
    {
        const bool branch_taken_0x197b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b8c) {
            ctx->pc = 0x197B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197B8Cu;
            // 0x197b90: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197BB8u;
            goto label_197bb8;
        }
    }
    ctx->pc = 0x197B94u;
    // 0x197b94: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x197b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x197b98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x197B98u;
    {
        const bool branch_taken_0x197b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b98) {
            ctx->pc = 0x197B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197B98u;
            // 0x197b9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197BB8u;
            goto label_197bb8;
        }
    }
    ctx->pc = 0x197BA0u;
    // 0x197ba0: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x197ba4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x197ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x197ba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x197ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197bac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x197bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x197bb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197BB0u;
    {
        const bool branch_taken_0x197bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BB0u;
            // 0x197bb4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bb0) {
            ctx->pc = 0x197BE4u;
            goto label_197be4;
        }
    }
    ctx->pc = 0x197BB8u;
label_197bb8:
    // 0x197bb8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x197bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197bbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x197BBCu;
    {
        const bool branch_taken_0x197bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BBCu;
            // 0x197bc0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bbc) {
            ctx->pc = 0x197BE4u;
            goto label_197be4;
        }
    }
    ctx->pc = 0x197BC4u;
    // 0x197bc4: 0x0  nop
    ctx->pc = 0x197bc4u;
    // NOP
label_197bc8:
    // 0x197bc8: 0xc066502  jal         func_199408
    ctx->pc = 0x197BC8u;
    SET_GPR_U32(ctx, 31, 0x197BD0u);
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197BD0u; }
        if (ctx->pc != 0x197BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197BD0u; }
        if (ctx->pc != 0x197BD0u) { return; }
    }
    ctx->pc = 0x197BD0u;
label_197bd0:
    // 0x197bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x197bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x197bd8: 0xc066502  jal         func_199408
    ctx->pc = 0x197BD8u;
    SET_GPR_U32(ctx, 31, 0x197BE0u);
    ctx->pc = 0x197BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197BD8u;
            // 0x197bdc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197BE0u; }
        if (ctx->pc != 0x197BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197BE0u; }
        if (ctx->pc != 0x197BE0u) { return; }
    }
    ctx->pc = 0x197BE0u;
label_197be0:
    // 0x197be0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x197be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_197be4:
    // 0x197be4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197be8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x197BE8u;
    {
        const bool branch_taken_0x197be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197be8) {
            ctx->pc = 0x197BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197BE8u;
            // 0x197bec: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197C00u;
            goto label_197c00;
        }
    }
    ctx->pc = 0x197BF0u;
    // 0x197bf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197BF4u;
    {
        const bool branch_taken_0x197bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BF4u;
            // 0x197bf8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf4) {
            ctx->pc = 0x197C04u;
            goto label_197c04;
        }
    }
    ctx->pc = 0x197BFCu;
    // 0x197bfc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x197bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_197c00:
    // 0x197c00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x197c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197c04:
    // 0x197c04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x197c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197c08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x197c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197c0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x197c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197c10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x197c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197c14: 0x3e00008  jr          $ra
    ctx->pc = 0x197C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C14u;
            // 0x197c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197C1Cu;
    // 0x197c1c: 0x0  nop
    ctx->pc = 0x197c1cu;
    // NOP
}
