#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106A98
// Address: 0x106a98 - 0x106d08
void sub_00106A98_0x106a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A98_0x106a98");
#endif

    switch (ctx->pc) {
        case 0x106b2cu: goto label_106b2c;
        case 0x106b58u: goto label_106b58;
        case 0x106b68u: goto label_106b68;
        case 0x106c48u: goto label_106c48;
        case 0x106c58u: goto label_106c58;
        default: break;
    }

    ctx->pc = 0x106a98u;

    // 0x106a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106a9c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x106a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106aa4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x106aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106aac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x106aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ab0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x106ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106ab4: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x106ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x106ab8: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x106ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x106abc: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x106ac0: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x106ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x106ac4: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x106ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x106ac8: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x106ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x106acc: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106ACCu;
    {
        const bool branch_taken_0x106acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x106acc) {
            ctx->pc = 0x106AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106ACCu;
            // 0x106ad0: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106AE8u;
            goto label_106ae8;
        }
    }
    ctx->pc = 0x106AD4u;
    // 0x106ad4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x106ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x106ad8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x106ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x106adc: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x106adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x106ae0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x106ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x106ae4: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x106ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_106ae8:
    // 0x106ae8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106aec: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106AECu;
    {
        const bool branch_taken_0x106aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106aec) {
            ctx->pc = 0x106AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106AECu;
            // 0x106af0: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106AFCu;
            goto label_106afc;
        }
    }
    ctx->pc = 0x106AF4u;
    // 0x106af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106AF4u;
    {
        const bool branch_taken_0x106af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AF4u;
            // 0x106af8: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106af4) {
            ctx->pc = 0x106B10u;
            goto label_106b10;
        }
    }
    ctx->pc = 0x106AFCu;
label_106afc:
    // 0x106afc: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x106afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x106b00: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x106b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106b04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106b08: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x106b08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x106b0c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x106b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_106b10:
    // 0x106b10: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x106b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x106b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106b18: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106B18u;
    {
        const bool branch_taken_0x106b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106b18) {
            ctx->pc = 0x106B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106B18u;
            // 0x106b1c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106B34u;
            goto label_106b34;
        }
    }
    ctx->pc = 0x106B20u;
    // 0x106b20: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x106b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x106b24: 0xc042e16  jal         func_10B858
    ctx->pc = 0x106B24u;
    SET_GPR_U32(ctx, 31, 0x106B2Cu);
    ctx->pc = 0x106B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106B24u;
            // 0x106b28: 0x24a5e710  addiu       $a1, $a1, -0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106B2Cu; }
        if (ctx->pc != 0x106B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106B2Cu; }
        if (ctx->pc != 0x106B2Cu) { return; }
    }
    ctx->pc = 0x106B2Cu;
label_106b2c:
    // 0x106b2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106b2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x106b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106b34:
    // 0x106b34: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x106b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x106b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b3c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x106b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x106b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x106b44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x106b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x106b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x106B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B4Cu;
            // 0x106b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106B54u;
    // 0x106b54: 0x0  nop
    ctx->pc = 0x106b54u;
    // NOP
label_106b58:
    // 0x106b58: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x106b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x106b5c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x106b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x106b60: 0x254a6cf0  addiu       $t2, $t2, 0x6CF0
    ctx->pc = 0x106b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27888));
    // 0x106b64: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x106b64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_106b68:
    // 0x106b68: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x106b68u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106b6c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x106b6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x106b70: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x106b70u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x106b74: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x106b74u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x106b78: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x106b78u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x106b7c: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x106b7cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x106b80: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x106b80u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x106b84: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x106b84u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x106b88: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x106b88u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x106b8c: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x106b8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106b90: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x106b90u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x106b94: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x106b94u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x106b98: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x106b98u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x106b9c: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x106b9cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x106ba0: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x106ba0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x106ba4: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x106ba4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x106ba8: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x106ba8u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x106bac: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x106bacu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x106bb0: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x106bb0u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x106bb4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x106bb4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x106bb8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x106bb8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x106bbc: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x106bbcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x106bc0: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x106bc0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x106bc4: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x106bc4u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x106bc8: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x106bc8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x106bcc: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x106bccu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x106bd0: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x106bd0u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x106bd4: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x106bd4u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x106bd8: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x106bd8u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x106bdc: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x106bdcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x106be0: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x106be0u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x106be4: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x106be4u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x106be8: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x106be8u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x106bec: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x106becu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x106bf0: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x106bf0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x106bf4: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x106bf4u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x106bf8: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x106bf8u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x106bfc: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x106bfcu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x106c00: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x106c00u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x106c04: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x106c04u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x106c08: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x106c08u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x106c0c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x106c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x106c10: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x106c10u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x106c14: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x106c14u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x106c18: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x106c18u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x106c1c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x106c1cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x106c20: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x106c20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x106c24: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x106c24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x106c28: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x106c28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x106c2c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x106c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x106c30: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x106c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x106c34: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x106C34u;
    {
        const bool branch_taken_0x106c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106C34u;
            // 0x106c38: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c34) {
            ctx->pc = 0x106B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106b68;
        }
    }
    ctx->pc = 0x106C3Cu;
    // 0x106c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x106C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106C44u;
    // 0x106c44: 0x0  nop
    ctx->pc = 0x106c44u;
    // NOP
label_106c48:
    // 0x106c48: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x106c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x106c4c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x106c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x106c50: 0x254a6cf0  addiu       $t2, $t2, 0x6CF0
    ctx->pc = 0x106c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27888));
    // 0x106c54: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x106c54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_106c58:
    // 0x106c58: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x106c58u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106c5c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x106c5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x106c60: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x106c60u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c64: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x106c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x106c68: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x106c68u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x106c6c: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x106c6cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x106c70: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x106c70u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x106c74: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x106c74u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x106c78: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x106c78u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x106c7c: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x106c7cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x106c80: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x106c80u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x106c84: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x106c84u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x106c88: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x106c88u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x106c8c: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x106c8cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x106c90: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x106c90u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x106c94: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x106c94u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x106c98: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x106c98u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x106c9c: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x106c9cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x106ca0: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x106ca0u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x106ca4: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x106ca4u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x106ca8: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x106ca8u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x106cac: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x106cacu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x106cb0: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x106cb0u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x106cb4: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x106cb4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x106cb8: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x106cb8u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x106cbc: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x106cbcu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x106cc0: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x106cc0u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x106cc4: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x106cc4u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x106cc8: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x106cc8u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x106ccc: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x106cccu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x106cd0: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x106cd0u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x106cd4: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x106cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x106cd8: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x106cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x106cdc: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x106cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x106ce0: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x106ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x106ce4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x106CE4u;
    {
        const bool branch_taken_0x106ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106CE4u;
            // 0x106ce8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ce4) {
            ctx->pc = 0x106C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106c58;
        }
    }
    ctx->pc = 0x106CECu;
    // 0x106cec: 0x0  nop
    ctx->pc = 0x106cecu;
    // NOP
    // 0x106cf0: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x106cf0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x106cf4: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x106cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x106cf8: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x106cf8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x106cfc: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x106cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x106d00: 0x3e00008  jr          $ra
    ctx->pc = 0x106D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106D08u;
}
