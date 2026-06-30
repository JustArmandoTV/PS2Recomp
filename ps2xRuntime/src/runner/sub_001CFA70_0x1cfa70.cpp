#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFA70
// Address: 0x1cfa70 - 0x1d0d10
void sub_001CFA70_0x1cfa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA70_0x1cfa70");
#endif

    switch (ctx->pc) {
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfe4cu: goto label_1cfe4c;
        case 0x1cfedcu: goto label_1cfedc;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cffe8u: goto label_1cffe8;
        case 0x1d0aa0u: goto label_1d0aa0;
        case 0x1d0b18u: goto label_1d0b18;
        case 0x1d0b58u: goto label_1d0b58;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf4u: goto label_1d0cf4;
        default: break;
    }

    ctx->pc = 0x1cfa70u;

    // 0x1cfa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfa74: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cfa78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1cfa7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1cfa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cfa80: 0x24639760  addiu       $v1, $v1, -0x68A0
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940512));
    // 0x1cfa84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1cfa84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cfa88: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cfa8c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1cfa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1cfa90: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x1cfa90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1cfa94: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x1cfa94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cfa98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFA98u;
    {
        const bool branch_taken_0x1cfa98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA98u;
            // 0x1cfa9c: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa98) {
            ctx->pc = 0x1CFAA8u;
            goto label_1cfaa8;
        }
    }
    ctx->pc = 0x1CFAA0u;
    // 0x1cfaa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFAA0u;
    {
        const bool branch_taken_0x1cfaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAA0u;
            // 0x1cfaa4: 0x27a3000c  addiu       $v1, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaa0) {
            ctx->pc = 0x1CFAACu;
            goto label_1cfaac;
        }
    }
    ctx->pc = 0x1CFAA8u;
label_1cfaa8:
    // 0x1cfaa8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1cfaac:
    // 0x1cfaac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfab0: 0xa4830024  sh          $v1, 0x24($a0)
    ctx->pc = 0x1cfab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cfab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAB4u;
            // 0x1cfab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CFABCu;
    // 0x1cfabc: 0x0  nop
    ctx->pc = 0x1cfabcu;
    // NOP
label_1cfac0:
    // 0x1cfac0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1cfac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1cfac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfac8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cfac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cfacc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cfad0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1cfad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1cfad4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1cfad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1cfad8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1cfad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cfadc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cfadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cfae0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cfae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cfae4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cfae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cfae8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cfae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfaec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cfaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cfaf0: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x1cfaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1cfaf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfaf8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1CFAF8u;
    SET_GPR_U32(ctx, 31, 0x1CFB00u);
    ctx->pc = 0x1CFAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAF8u;
            // 0x1cfafc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB00u; }
        if (ctx->pc != 0x1CFB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB00u; }
        if (ctx->pc != 0x1CFB00u) { return; }
    }
    ctx->pc = 0x1CFB00u;
label_1cfb00:
    // 0x1cfb00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb08: 0x8c689920  lw          $t0, -0x66E0($v1)
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940960)));
    // 0x1cfb0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfb10: 0x8c479928  lw          $a3, -0x66D8($v0)
    ctx->pc = 0x1cfb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940968)));
    // 0x1cfb14: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1cfb18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cfb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb20: 0xac679920  sw          $a3, -0x66E0($v1)
    ctx->pc = 0x1cfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940960), GPR_U32(ctx, 7));
    // 0x1cfb24: 0xac489928  sw          $t0, -0x66D8($v0)
    ctx->pc = 0x1cfb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940968), GPR_U32(ctx, 8));
    // 0x1cfb28: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1cfb2c: 0xc07446c  jal         func_1D11B0
    ctx->pc = 0x1CFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFB34u);
    ctx->pc = 0x1CFB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB2Cu;
            // 0x1cfb30: 0x27a600b8  addiu       $a2, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D11B0u;
    if (runtime->hasFunction(0x1D11B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB34u; }
        if (ctx->pc != 0x1CFB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D11B0_0x1d11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB34u; }
        if (ctx->pc != 0x1CFB34u) { return; }
    }
    ctx->pc = 0x1CFB34u;
label_1cfb34:
    // 0x1cfb34: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1cfb38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cfb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb3c: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1cfb40: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1cfb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1cfb44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cfb48: 0xc07446c  jal         func_1D11B0
    ctx->pc = 0x1CFB48u;
    SET_GPR_U32(ctx, 31, 0x1CFB50u);
    ctx->pc = 0x1CFB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB48u;
            // 0x1cfb4c: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D11B0u;
    if (runtime->hasFunction(0x1D11B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB50u; }
        if (ctx->pc != 0x1CFB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D11B0_0x1d11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB50u; }
        if (ctx->pc != 0x1CFB50u) { return; }
    }
    ctx->pc = 0x1CFB50u;
label_1cfb50:
    // 0x1cfb50: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1cfb54: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1cfb58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1cfb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cfb5c: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x1cfb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
    // 0x1cfb60: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x1cfb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x1cfb64: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1cfb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1cfb68: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFB68u;
    {
        const bool branch_taken_0x1cfb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb68) {
            ctx->pc = 0x1CFB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB68u;
            // 0x1cfb6c: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CFB8Cu;
            goto label_1cfb8c;
        }
    }
    ctx->pc = 0x1CFB70u;
    // 0x1cfb70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb74: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb78: 0xa060981c  sb          $zero, -0x67E4($v1)
    ctx->pc = 0x1cfb78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940700), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb80: 0xa08097ec  sb          $zero, -0x6814($a0)
    ctx->pc = 0x1cfb80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294940652), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb84: 0xa06097bc  sb          $zero, -0x6844($v1)
    ctx->pc = 0x1cfb84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940604), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb88: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1cfb8c:
    // 0x1cfb8c: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x1cfb8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cfb90: 0x50200418  beql        $at, $zero, . + 4 + (0x418 << 2)
    ctx->pc = 0x1CFB90u;
    {
        const bool branch_taken_0x1cfb90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb90) {
            ctx->pc = 0x1CFB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB90u;
            // 0x1cfb94: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0BF4u;
            goto label_1d0bf4;
        }
    }
    ctx->pc = 0x1CFB98u;
    // 0x1cfb98: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
    // 0x1cfb9c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x1cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x1cfba0: 0x26739760  addiu       $s3, $s3, -0x68A0
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940512));
    // 0x1cfba4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1cfba4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfba8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1cfba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfbac: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1cfbb0:
    // 0x1cfbb0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1cfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1cfbb4: 0x2463c2f0  addiu       $v1, $v1, -0x3D10
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951664));
    // 0x1cfbb8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cfbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cfbbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cfbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cfbc0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1cfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1cfbc4: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x1cfbc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfbc8: 0x4c003fb  bltz        $a2, . + 4 + (0x3FB << 2)
    ctx->pc = 0x1CFBC8u;
    {
        const bool branch_taken_0x1cfbc8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1cfbc8) {
            ctx->pc = 0x1D0BB8u;
            goto label_1d0bb8;
        }
    }
    ctx->pc = 0x1CFBD0u;
    // 0x1cfbd0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1cfbd4: 0xa276001d  sb          $s6, 0x1D($s3)
    ctx->pc = 0x1cfbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 22));
    // 0x1cfbd8: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1cfbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1cfbdc: 0x2671002c  addiu       $s1, $s3, 0x2C
    ctx->pc = 0x1cfbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1cfbe0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cfbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1cfbe4: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cfbe8: 0x8c659920  lw          $a1, -0x66E0($v1)
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940960)));
    // 0x1cfbec: 0x169082  srl         $s2, $s6, 2
    ctx->pc = 0x1cfbecu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 22), 2));
    // 0x1cfbf0: 0x7e600000  sq          $zero, 0x0($s3)
    ctx->pc = 0x1cfbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 0));
    // 0x1cfbf4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1cfbf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cfbf8: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x1cfbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1cfbfc: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x1cfbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cfc00: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1cfc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1cfc04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFC04u;
    {
        const bool branch_taken_0x1cfc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC04u;
            // 0x1cfc08: 0x32d50003  andi        $s5, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc04) {
            ctx->pc = 0x1CFC18u;
            goto label_1cfc18;
        }
    }
    ctx->pc = 0x1CFC0Cu;
    // 0x1cfc0c: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CFC0Cu;
    {
        const bool branch_taken_0x1cfc0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc0c) {
            ctx->pc = 0x1CFC80u;
            goto label_1cfc80;
        }
    }
    ctx->pc = 0x1CFC14u;
    // 0x1cfc14: 0x0  nop
    ctx->pc = 0x1cfc14u;
    // NOP
label_1cfc18:
    // 0x1cfc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc1c: 0xc048160  jal         func_120580
    ctx->pc = 0x1CFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC24u);
    ctx->pc = 0x1CFC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC1Cu;
            // 0x1cfc20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120580u;
    if (runtime->hasFunction(0x120580u)) {
        auto targetFn = runtime->lookupFunction(0x120580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC24u; }
        if (ctx->pc != 0x1CFC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120580_0x120580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC24u; }
        if (ctx->pc != 0x1CFC24u) { return; }
    }
    ctx->pc = 0x1CFC24u;
label_1cfc24:
    // 0x1cfc24: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cfc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cfc28: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CFC28u;
    {
        const bool branch_taken_0x1cfc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfc28) {
            ctx->pc = 0x1CFCB0u;
            goto label_1cfcb0;
        }
    }
    ctx->pc = 0x1CFC30u;
    // 0x1cfc30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfc34: 0x1044001e  beq         $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CFC34u;
    {
        const bool branch_taken_0x1cfc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cfc34) {
            ctx->pc = 0x1CFCB0u;
            goto label_1cfcb0;
        }
    }
    ctx->pc = 0x1CFC3Cu;
    // 0x1cfc3c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFC3Cu;
    {
        const bool branch_taken_0x1cfc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc3c) {
            ctx->pc = 0x1CFC80u;
            goto label_1cfc80;
        }
    }
    ctx->pc = 0x1CFC44u;
    // 0x1cfc44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc48: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFC48u;
    {
        const bool branch_taken_0x1cfc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfc48) {
            ctx->pc = 0x1CFC70u;
            goto label_1cfc70;
        }
    }
    ctx->pc = 0x1CFC50u;
    // 0x1cfc50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfc54: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFC54u;
    {
        const bool branch_taken_0x1cfc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfc54) {
            ctx->pc = 0x1CFC68u;
            goto label_1cfc68;
        }
    }
    ctx->pc = 0x1CFC5Cu;
    // 0x1cfc5c: 0x100003d2  b           . + 4 + (0x3D2 << 2)
    ctx->pc = 0x1CFC5Cu;
    {
        const bool branch_taken_0x1cfc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc5c) {
            ctx->pc = 0x1D0BA8u;
            goto label_1d0ba8;
        }
    }
    ctx->pc = 0x1CFC64u;
    // 0x1cfc64: 0x0  nop
    ctx->pc = 0x1cfc64u;
    // NOP
label_1cfc68:
    // 0x1cfc68: 0x100003d1  b           . + 4 + (0x3D1 << 2)
    ctx->pc = 0x1CFC68u;
    {
        const bool branch_taken_0x1cfc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC68u;
            // 0x1cfc6c: 0xa264001e  sb          $a0, 0x1E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 30), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc68) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFC70u;
label_1cfc70:
    // 0x1cfc70: 0xa264001e  sb          $a0, 0x1E($s3)
    ctx->pc = 0x1cfc70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cfc74: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1cfc74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfc78: 0x100003cd  b           . + 4 + (0x3CD << 2)
    ctx->pc = 0x1CFC78u;
    {
        const bool branch_taken_0x1cfc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC78u;
            // 0x1cfc7c: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc78) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFC80u;
label_1cfc80:
    // 0x1cfc80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1cfc80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfc84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFC84u;
    {
        const bool branch_taken_0x1cfc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc84) {
            ctx->pc = 0x1CFCA8u;
            goto label_1cfca8;
        }
    }
    ctx->pc = 0x1CFC8Cu;
    // 0x1cfc8c: 0x7e600000  sq          $zero, 0x0($s3)
    ctx->pc = 0x1cfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 0));
    // 0x1cfc90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfc94: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1cfc94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x1cfc98: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1cfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x1cfc9c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1cfc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfca0: 0xa260002d  sb          $zero, 0x2D($s3)
    ctx->pc = 0x1cfca0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfca4: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1cfca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_1cfca8:
    // 0x1cfca8: 0x100003c1  b           . + 4 + (0x3C1 << 2)
    ctx->pc = 0x1CFCA8u;
    {
        const bool branch_taken_0x1cfca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCA8u;
            // 0x1cfcac: 0xa260001e  sb          $zero, 0x1E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfca8) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFCB0u;
label_1cfcb0:
    // 0x1cfcb0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1cfcb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfcb4: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1cfcb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cfcb8: 0x102003bd  beqz        $at, . + 4 + (0x3BD << 2)
    ctx->pc = 0x1CFCB8u;
    {
        const bool branch_taken_0x1cfcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcb8) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFCC0u;
    // 0x1cfcc0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1cfcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1cfcc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cfcc8: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x1cfccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cfcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cfcd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfcd4: 0x600008  jr          $v1
    ctx->pc = 0x1CFCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFCE0u: goto label_1cfce0;
            case 0x1CFD40u: goto label_1cfd40;
            case 0x1CFDC0u: goto label_1cfdc0;
            case 0x1CFE40u: goto label_1cfe40;
            case 0x1CFEC8u: goto label_1cfec8;
            case 0x1CFF28u: goto label_1cff28;
            case 0x1CFFB0u: goto label_1cffb0;
            case 0x1CFFC0u: goto label_1cffc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFCDCu;
    // 0x1cfcdc: 0x0  nop
    ctx->pc = 0x1cfcdcu;
    // NOP
label_1cfce0:
    // 0x1cfce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfce4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cfce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfce8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfcec: 0xc0482b8  jal         func_120AE0
    ctx->pc = 0x1CFCECu;
    SET_GPR_U32(ctx, 31, 0x1CFCF4u);
    ctx->pc = 0x1CFCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCECu;
            // 0x1cfcf0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120AE0u;
    if (runtime->hasFunction(0x120AE0u)) {
        auto targetFn = runtime->lookupFunction(0x120AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCF4u; }
        if (ctx->pc != 0x1CFCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120AE0_0x120ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCF4u; }
        if (ctx->pc != 0x1CFCF4u) { return; }
    }
    ctx->pc = 0x1CFCF4u;
label_1cfcf4:
    // 0x1cfcf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfcf8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFCF8u;
    {
        const bool branch_taken_0x1cfcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfcf8) {
            ctx->pc = 0x1CFD10u;
            goto label_1cfd10;
        }
    }
    ctx->pc = 0x1CFD00u;
    // 0x1cfd00: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfd00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfd04: 0x100003aa  b           . + 4 + (0x3AA << 2)
    ctx->pc = 0x1CFD04u;
    {
        const bool branch_taken_0x1cfd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD04u;
            // 0x1cfd08: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd04) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFD0Cu;
    // 0x1cfd0c: 0x0  nop
    ctx->pc = 0x1cfd0cu;
    // NOP
label_1cfd10:
    // 0x1cfd10: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1cfd10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x1cfd14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cfd18: 0xa263002d  sb          $v1, 0x2D($s3)
    ctx->pc = 0x1cfd18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfd1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cfd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cfd20: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1cfd20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1cfd24: 0x142003a2  bnez        $at, . + 4 + (0x3A2 << 2)
    ctx->pc = 0x1CFD24u;
    {
        const bool branch_taken_0x1cfd24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd24) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFD2Cu;
    // 0x1cfd2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfd30: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfd30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfd34: 0x1000039e  b           . + 4 + (0x39E << 2)
    ctx->pc = 0x1CFD34u;
    {
        const bool branch_taken_0x1cfd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD34u;
            // 0x1cfd38: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd34) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFD3Cu;
    // 0x1cfd3c: 0x0  nop
    ctx->pc = 0x1cfd3cu;
    // NOP
label_1cfd40:
    // 0x1cfd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd44: 0xc0481ba  jal         func_1206E8
    ctx->pc = 0x1CFD44u;
    SET_GPR_U32(ctx, 31, 0x1CFD4Cu);
    ctx->pc = 0x1CFD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD44u;
            // 0x1cfd48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1206E8u;
    if (runtime->hasFunction(0x1206E8u)) {
        auto targetFn = runtime->lookupFunction(0x1206E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD4Cu; }
        if (ctx->pc != 0x1CFD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001206E8_0x1206e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD4Cu; }
        if (ctx->pc != 0x1CFD4Cu) { return; }
    }
    ctx->pc = 0x1CFD4Cu;
label_1cfd4c:
    // 0x1cfd4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfd50: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFD50u;
    {
        const bool branch_taken_0x1cfd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfd50) {
            ctx->pc = 0x1CFD78u;
            goto label_1cfd78;
        }
    }
    ctx->pc = 0x1CFD58u;
    // 0x1cfd58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFD58u;
    {
        const bool branch_taken_0x1cfd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd58) {
            ctx->pc = 0x1CFD68u;
            goto label_1cfd68;
        }
    }
    ctx->pc = 0x1CFD60u;
    // 0x1cfd60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CFD60u;
    {
        const bool branch_taken_0x1cfd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd60) {
            ctx->pc = 0x1CFDB0u;
            goto label_1cfdb0;
        }
    }
    ctx->pc = 0x1CFD68u;
label_1cfd68:
    // 0x1cfd68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfd6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFD6Cu;
    {
        const bool branch_taken_0x1cfd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD6Cu;
            // 0x1cfd70: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd6c) {
            ctx->pc = 0x1CFDB0u;
            goto label_1cfdb0;
        }
    }
    ctx->pc = 0x1CFD74u;
    // 0x1cfd74: 0x0  nop
    ctx->pc = 0x1cfd74u;
    // NOP
label_1cfd78:
    // 0x1cfd78: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1cfd78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x1cfd7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cfd80: 0xa263002d  sb          $v1, 0x2D($s3)
    ctx->pc = 0x1cfd80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfd84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cfd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cfd88: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1cfd88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1cfd8c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFD8Cu;
    {
        const bool branch_taken_0x1cfd8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd8c) {
            ctx->pc = 0x1CFDA8u;
            goto label_1cfda8;
        }
    }
    ctx->pc = 0x1CFD94u;
    // 0x1cfd94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfd98: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfd98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfd9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFD9Cu;
    {
        const bool branch_taken_0x1cfd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD9Cu;
            // 0x1cfda0: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd9c) {
            ctx->pc = 0x1CFDB0u;
            goto label_1cfdb0;
        }
    }
    ctx->pc = 0x1CFDA4u;
    // 0x1cfda4: 0x0  nop
    ctx->pc = 0x1cfda4u;
    // NOP
label_1cfda8:
    // 0x1cfda8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1cfda8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfdac: 0xa260002d  sb          $zero, 0x2D($s3)
    ctx->pc = 0x1cfdacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
label_1cfdb0:
    // 0x1cfdb0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1cfdb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfdb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfdb8: 0x1483037d  bne         $a0, $v1, . + 4 + (0x37D << 2)
    ctx->pc = 0x1CFDB8u;
    {
        const bool branch_taken_0x1cfdb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfdb8) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFDC0u;
label_1cfdc0:
    // 0x1cfdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdc4: 0xc0483a6  jal         func_120E98
    ctx->pc = 0x1CFDC4u;
    SET_GPR_U32(ctx, 31, 0x1CFDCCu);
    ctx->pc = 0x1CFDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDC4u;
            // 0x1cfdc8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120E98u;
    if (runtime->hasFunction(0x120E98u)) {
        auto targetFn = runtime->lookupFunction(0x120E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDCCu; }
        if (ctx->pc != 0x1CFDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120E98_0x120e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDCCu; }
        if (ctx->pc != 0x1CFDCCu) { return; }
    }
    ctx->pc = 0x1CFDCCu;
label_1cfdcc:
    // 0x1cfdcc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CFDCCu;
    {
        const bool branch_taken_0x1cfdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfdcc) {
            ctx->pc = 0x1CFE30u;
            goto label_1cfe30;
        }
    }
    ctx->pc = 0x1CFDD4u;
    // 0x1cfdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdd8: 0xc0483c6  jal         func_120F18
    ctx->pc = 0x1CFDD8u;
    SET_GPR_U32(ctx, 31, 0x1CFDE0u);
    ctx->pc = 0x1CFDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDD8u;
            // 0x1cfddc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120F18u;
    if (runtime->hasFunction(0x120F18u)) {
        auto targetFn = runtime->lookupFunction(0x120F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDE0u; }
        if (ctx->pc != 0x1CFDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120F18_0x120f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDE0u; }
        if (ctx->pc != 0x1CFDE0u) { return; }
    }
    ctx->pc = 0x1CFDE0u;
label_1cfde0:
    // 0x1cfde0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfde4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFDE4u;
    {
        const bool branch_taken_0x1cfde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfde4) {
            ctx->pc = 0x1CFE00u;
            goto label_1cfe00;
        }
    }
    ctx->pc = 0x1CFDECu;
    // 0x1cfdec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cfdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfdf0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfdf4: 0x1000036e  b           . + 4 + (0x36E << 2)
    ctx->pc = 0x1CFDF4u;
    {
        const bool branch_taken_0x1cfdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDF4u;
            // 0x1cfdf8: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdf4) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFDFCu;
    // 0x1cfdfc: 0x0  nop
    ctx->pc = 0x1cfdfcu;
    // NOP
label_1cfe00:
    // 0x1cfe00: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1cfe00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x1cfe04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cfe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cfe08: 0xa263002d  sb          $v1, 0x2D($s3)
    ctx->pc = 0x1cfe08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfe0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cfe0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cfe10: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cfe10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cfe14: 0x14200366  bnez        $at, . + 4 + (0x366 << 2)
    ctx->pc = 0x1CFE14u;
    {
        const bool branch_taken_0x1cfe14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe14) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFE1Cu;
    // 0x1cfe1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfe20: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfe20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfe24: 0x10000362  b           . + 4 + (0x362 << 2)
    ctx->pc = 0x1CFE24u;
    {
        const bool branch_taken_0x1cfe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE24u;
            // 0x1cfe28: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe24) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFE2Cu;
    // 0x1cfe2c: 0x0  nop
    ctx->pc = 0x1cfe2cu;
    // NOP
label_1cfe30:
    // 0x1cfe30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfe34: 0x1000035e  b           . + 4 + (0x35E << 2)
    ctx->pc = 0x1CFE34u;
    {
        const bool branch_taken_0x1cfe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE34u;
            // 0x1cfe38: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe34) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFE3Cu;
    // 0x1cfe3c: 0x0  nop
    ctx->pc = 0x1cfe3cu;
    // NOP
label_1cfe40:
    // 0x1cfe40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe44: 0xc0481ba  jal         func_1206E8
    ctx->pc = 0x1CFE44u;
    SET_GPR_U32(ctx, 31, 0x1CFE4Cu);
    ctx->pc = 0x1CFE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE44u;
            // 0x1cfe48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1206E8u;
    if (runtime->hasFunction(0x1206E8u)) {
        auto targetFn = runtime->lookupFunction(0x1206E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE4Cu; }
        if (ctx->pc != 0x1CFE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001206E8_0x1206e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE4Cu; }
        if (ctx->pc != 0x1CFE4Cu) { return; }
    }
    ctx->pc = 0x1CFE4Cu;
label_1cfe4c:
    // 0x1cfe4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe50: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFE50u;
    {
        const bool branch_taken_0x1cfe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfe50) {
            ctx->pc = 0x1CFE78u;
            goto label_1cfe78;
        }
    }
    ctx->pc = 0x1CFE58u;
    // 0x1cfe58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFE58u;
    {
        const bool branch_taken_0x1cfe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe58) {
            ctx->pc = 0x1CFE68u;
            goto label_1cfe68;
        }
    }
    ctx->pc = 0x1CFE60u;
    // 0x1cfe60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CFE60u;
    {
        const bool branch_taken_0x1cfe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe60) {
            ctx->pc = 0x1CFEB8u;
            goto label_1cfeb8;
        }
    }
    ctx->pc = 0x1CFE68u;
label_1cfe68:
    // 0x1cfe68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfe6c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfe70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CFE70u;
    {
        const bool branch_taken_0x1cfe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE70u;
            // 0x1cfe74: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe70) {
            ctx->pc = 0x1CFEB8u;
            goto label_1cfeb8;
        }
    }
    ctx->pc = 0x1CFE78u;
label_1cfe78:
    // 0x1cfe78: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1cfe78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x1cfe7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cfe80: 0xa263002d  sb          $v1, 0x2D($s3)
    ctx->pc = 0x1cfe80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfe84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cfe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cfe88: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cfe88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cfe8c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFE8Cu;
    {
        const bool branch_taken_0x1cfe8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe8c) {
            ctx->pc = 0x1CFEA8u;
            goto label_1cfea8;
        }
    }
    ctx->pc = 0x1CFE94u;
    // 0x1cfe94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfe98: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfe98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfe9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFE9Cu;
    {
        const bool branch_taken_0x1cfe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE9Cu;
            // 0x1cfea0: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe9c) {
            ctx->pc = 0x1CFEB8u;
            goto label_1cfeb8;
        }
    }
    ctx->pc = 0x1CFEA4u;
    // 0x1cfea4: 0x0  nop
    ctx->pc = 0x1cfea4u;
    // NOP
label_1cfea8:
    // 0x1cfea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfeac: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfeacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfeb0: 0xa260002d  sb          $zero, 0x2D($s3)
    ctx->pc = 0x1cfeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfeb4: 0x0  nop
    ctx->pc = 0x1cfeb4u;
    // NOP
label_1cfeb8:
    // 0x1cfeb8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1cfeb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfebc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfec0: 0x1483033b  bne         $a0, $v1, . + 4 + (0x33B << 2)
    ctx->pc = 0x1CFEC0u;
    {
        const bool branch_taken_0x1cfec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfec0) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFEC8u;
label_1cfec8:
    // 0x1cfec8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1cfecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cfed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed4: 0xc048318  jal         func_120C60
    ctx->pc = 0x1CFED4u;
    SET_GPR_U32(ctx, 31, 0x1CFEDCu);
    ctx->pc = 0x1CFED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFED4u;
            // 0x1cfed8: 0x24c6c318  addiu       $a2, $a2, -0x3CE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120C60u;
    if (runtime->hasFunction(0x120C60u)) {
        auto targetFn = runtime->lookupFunction(0x120C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEDCu; }
        if (ctx->pc != 0x1CFEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120C60_0x120c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEDCu; }
        if (ctx->pc != 0x1CFEDCu) { return; }
    }
    ctx->pc = 0x1CFEDCu;
label_1cfedc:
    // 0x1cfedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfee0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFEE0u;
    {
        const bool branch_taken_0x1cfee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfee0) {
            ctx->pc = 0x1CFEF8u;
            goto label_1cfef8;
        }
    }
    ctx->pc = 0x1CFEE8u;
    // 0x1cfee8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfeec: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cfeecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfef0: 0x1000032f  b           . + 4 + (0x32F << 2)
    ctx->pc = 0x1CFEF0u;
    {
        const bool branch_taken_0x1cfef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEF0u;
            // 0x1cfef4: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfef0) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFEF8u;
label_1cfef8:
    // 0x1cfef8: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1cfef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x1cfefc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cff00: 0xa263002d  sb          $v1, 0x2D($s3)
    ctx->pc = 0x1cff00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cff04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cff08: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cff08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cff0c: 0x14200328  bnez        $at, . + 4 + (0x328 << 2)
    ctx->pc = 0x1CFF0Cu;
    {
        const bool branch_taken_0x1cff0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cff0c) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFF14u;
    // 0x1cff14: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cff18: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cff18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff1c: 0x10000324  b           . + 4 + (0x324 << 2)
    ctx->pc = 0x1CFF1Cu;
    {
        const bool branch_taken_0x1cff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF1Cu;
            // 0x1cff20: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff1c) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFF24u;
    // 0x1cff24: 0x0  nop
    ctx->pc = 0x1cff24u;
    // NOP
label_1cff28:
    // 0x1cff28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff2c: 0xc0481ba  jal         func_1206E8
    ctx->pc = 0x1CFF2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF34u);
    ctx->pc = 0x1CFF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF2Cu;
            // 0x1cff30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1206E8u;
    if (runtime->hasFunction(0x1206E8u)) {
        auto targetFn = runtime->lookupFunction(0x1206E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF34u; }
        if (ctx->pc != 0x1CFF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001206E8_0x1206e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF34u; }
        if (ctx->pc != 0x1CFF34u) { return; }
    }
    ctx->pc = 0x1CFF34u;
label_1cff34:
    // 0x1cff34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff38: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFF38u;
    {
        const bool branch_taken_0x1cff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cff38) {
            ctx->pc = 0x1CFF60u;
            goto label_1cff60;
        }
    }
    ctx->pc = 0x1CFF40u;
    // 0x1cff40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFF40u;
    {
        const bool branch_taken_0x1cff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff40) {
            ctx->pc = 0x1CFF50u;
            goto label_1cff50;
        }
    }
    ctx->pc = 0x1CFF48u;
    // 0x1cff48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CFF48u;
    {
        const bool branch_taken_0x1cff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff48) {
            ctx->pc = 0x1CFFA0u;
            goto label_1cffa0;
        }
    }
    ctx->pc = 0x1CFF50u;
label_1cff50:
    // 0x1cff50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cff54: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cff54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CFF58u;
    {
        const bool branch_taken_0x1cff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF58u;
            // 0x1cff5c: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff58) {
            ctx->pc = 0x1CFFA0u;
            goto label_1cffa0;
        }
    }
    ctx->pc = 0x1CFF60u;
label_1cff60:
    // 0x1cff60: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1cff60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x1cff64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cff68: 0xa263002d  sb          $v1, 0x2D($s3)
    ctx->pc = 0x1cff68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cff70: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cff70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cff74: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFF74u;
    {
        const bool branch_taken_0x1cff74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cff74) {
            ctx->pc = 0x1CFF90u;
            goto label_1cff90;
        }
    }
    ctx->pc = 0x1CFF7Cu;
    // 0x1cff7c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cff80: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cff80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFF84u;
    {
        const bool branch_taken_0x1cff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF84u;
            // 0x1cff88: 0xa260002d  sb          $zero, 0x2D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff84) {
            ctx->pc = 0x1CFFA0u;
            goto label_1cffa0;
        }
    }
    ctx->pc = 0x1CFF8Cu;
    // 0x1cff8c: 0x0  nop
    ctx->pc = 0x1cff8cu;
    // NOP
label_1cff90:
    // 0x1cff90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cff94: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1cff94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff98: 0xa260002d  sb          $zero, 0x2D($s3)
    ctx->pc = 0x1cff98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff9c: 0x0  nop
    ctx->pc = 0x1cff9cu;
    // NOP
label_1cffa0:
    // 0x1cffa0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1cffa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cffa4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cffa8: 0x14830301  bne         $a0, $v1, . + 4 + (0x301 << 2)
    ctx->pc = 0x1CFFA8u;
    {
        const bool branch_taken_0x1cffa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cffa8) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFFB0u;
label_1cffb0:
    // 0x1cffb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1cffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cffb4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1cffb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cffb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cffbc: 0xa262001e  sb          $v0, 0x1E($s3)
    ctx->pc = 0x1cffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 30), (uint8_t)GPR_U32(ctx, 2));
label_1cffc0:
    // 0x1cffc0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1cffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1cffc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1cffc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cffd4: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x1cffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
    // 0x1cffd8: 0x8c439920  lw          $v1, -0x66E0($v0)
    ctx->pc = 0x1cffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940960)));
    // 0x1cffdc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1cffdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cffe0: 0xc048142  jal         func_120508
    ctx->pc = 0x1CFFE0u;
    SET_GPR_U32(ctx, 31, 0x1CFFE8u);
    ctx->pc = 0x1CFFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFE0u;
            // 0x1cffe4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120508u;
    if (runtime->hasFunction(0x120508u)) {
        auto targetFn = runtime->lookupFunction(0x120508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFE8u; }
        if (ctx->pc != 0x1CFFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120508_0x120508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFE8u; }
        if (ctx->pc != 0x1CFFE8u) { return; }
    }
    ctx->pc = 0x1CFFE8u;
label_1cffe8:
    // 0x1cffe8: 0x184002f1  blez        $v0, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x1CFFE8u;
    {
        const bool branch_taken_0x1cffe8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cffe8) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1CFFF0u;
    // 0x1cfff0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cfff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1cfff4: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x1cfff4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1cfff8: 0x8c64a728  lw          $a0, -0x58D8($v1)
    ctx->pc = 0x1cfff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944552)));
    // 0x1cfffc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1cfffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0000: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1d0000u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1d0004: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x1d0004u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1d0008: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1d0008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d000c: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x1d0010: 0x30670020  andi        $a3, $v1, 0x20
    ctx->pc = 0x1d0010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d0014: 0x30650040  andi        $a1, $v1, 0x40
    ctx->pc = 0x1d0014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d0018: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x1d0018u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1d001c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d001cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0020: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1d0020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1d0024: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d0024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d0028: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1d0028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d002c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d002cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d0030: 0x30650010  andi        $a1, $v1, 0x10
    ctx->pc = 0x1d0030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d0034: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d0034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d0038: 0x5302b  sltu        $a2, $zero, $a1
    ctx->pc = 0x1d0038u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d003c: 0x30650080  andi        $a1, $v1, 0x80
    ctx->pc = 0x1d003cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1d0040: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1d0040u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1d0044: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d0044u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0048: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d0048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d004c: 0x52c40  sll         $a1, $a1, 17
    ctx->pc = 0x1d004cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x1d0050: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d0050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d0054: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1d0054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d0058: 0x30651000  andi        $a1, $v1, 0x1000
    ctx->pc = 0x1d0058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1d005c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d005cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d0060: 0x5302b  sltu        $a2, $zero, $a1
    ctx->pc = 0x1d0060u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0064: 0x30654000  andi        $a1, $v1, 0x4000
    ctx->pc = 0x1d0064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1d0068: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1d0068u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d006c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d006cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0070: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d0070u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d0074: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1d0074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d0078: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d0078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d007c: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1d007cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d0080: 0x30658000  andi        $a1, $v1, 0x8000
    ctx->pc = 0x1d0080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1d0084: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d0084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d0088: 0x5302b  sltu        $a2, $zero, $a1
    ctx->pc = 0x1d0088u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d008c: 0x30652000  andi        $a1, $v1, 0x2000
    ctx->pc = 0x1d008cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1d0090: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1d0090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1d0094: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d0094u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0098: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d0098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d009c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1d00a0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d00a4: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1d00a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d00a8: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x1d00a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1d00ac: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d00acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d00b0: 0x5302b  sltu        $a2, $zero, $a1
    ctx->pc = 0x1d00b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d00b4: 0x30650100  andi        $a1, $v1, 0x100
    ctx->pc = 0x1d00b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1d00b8: 0x63280  sll         $a2, $a2, 10
    ctx->pc = 0x1d00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x1d00bc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d00bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d00c0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d00c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d00c4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x1d00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1d00c8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d00cc: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1d00ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d00d0: 0x30650004  andi        $a1, $v1, 0x4
    ctx->pc = 0x1d00d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d00d4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d00d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d00d8: 0x5302b  sltu        $a2, $zero, $a1
    ctx->pc = 0x1d00d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d00dc: 0x30650008  andi        $a1, $v1, 0x8
    ctx->pc = 0x1d00dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d00e0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1d00e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1d00e4: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d00e4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d00e8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d00e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d00ec: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x1d00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1d00f0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d00f4: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1d00f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d00f8: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1d00f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d00fc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d0100: 0x5302b  sltu        $a2, $zero, $a1
    ctx->pc = 0x1d0100u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0104: 0x30650002  andi        $a1, $v1, 0x2
    ctx->pc = 0x1d0104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d0108: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x1d0108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x1d010c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d010cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d0110: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x1d0110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d0114: 0x52d40  sll         $a1, $a1, 21
    ctx->pc = 0x1d0114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 21));
    // 0x1d0118: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1d0118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1d011c: 0xe53025  or          $a2, $a3, $a1
    ctx->pc = 0x1d011cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x1d0120: 0x30650200  andi        $a1, $v1, 0x200
    ctx->pc = 0x1d0120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1d0124: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1d0124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1d0128: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1d0128u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d012c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1d012cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1d0130: 0x52d80  sll         $a1, $a1, 22
    ctx->pc = 0x1d0130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 22));
    // 0x1d0134: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d0134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d0138: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d0138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d013c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1d013cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1d0140: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1d0140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d0144: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1d0144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1d0148: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d0148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d014c: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1d014cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x1d0150: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1d0150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x1d0154: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1d0154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1d0158: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d0158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d015c: 0x148301f6  bne         $a0, $v1, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x1D015Cu;
    {
        const bool branch_taken_0x1d015c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d015c) {
            ctx->pc = 0x1D0938u;
            goto label_1d0938;
        }
    }
    ctx->pc = 0x1D0164u;
    // 0x1d0164: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x1d0164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d0168: 0x3c033fcb  lui         $v1, 0x3FCB
    ctx->pc = 0x1d0168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16331 << 16));
    // 0x1d016c: 0x34632cb3  ori         $v1, $v1, 0x2CB3
    ctx->pc = 0x1d016cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11443);
    // 0x1d0170: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d0170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0174: 0x24a4ff40  addiu       $a0, $a1, -0xC0
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x1d0178: 0x28a300c0  slti        $v1, $a1, 0xC0
    ctx->pc = 0x1d0178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1d017c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d017cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0180: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d0180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d0184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d0188: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d0188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d018c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d018cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d0190: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0194: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0198: 0x0  nop
    ctx->pc = 0x1d0198u;
    // NOP
    // 0x1d019c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d019cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d01a0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d01a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d01a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d01a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d01a8: 0xa2630020  sb          $v1, 0x20($s3)
    ctx->pc = 0x1d01a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d01ac: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x1d01acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d01b0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1d01b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1d01b4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d01b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1d01b8: 0x2485ffc1  addiu       $a1, $a0, -0x3F
    ctx->pc = 0x1d01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967233));
    // 0x1d01bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d01bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d01c0: 0x28840040  slti        $a0, $a0, 0x40
    ctx->pc = 0x1d01c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d01c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d01c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d01c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d01c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d01cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d01ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d01d0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d01d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d01d4: 0x0  nop
    ctx->pc = 0x1d01d4u;
    // NOP
    // 0x1d01d8: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x1d01d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1d01dc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1d01dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1d01e0: 0x70852018  mult1       $a0, $a0, $a1
    ctx->pc = 0x1d01e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d01e4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d01e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d01e8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d01e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d01ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d01f0: 0xa2630020  sb          $v1, 0x20($s3)
    ctx->pc = 0x1d01f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d01f4: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x1d01f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1d01f8: 0x2464ffc1  addiu       $a0, $v1, -0x3F
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967233));
    // 0x1d01fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d01fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0200: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x1d0200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d0204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d0208: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1d0208u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1d020c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d020cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d0210: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0214: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0218: 0x0  nop
    ctx->pc = 0x1d0218u;
    // NOP
    // 0x1d021c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d021cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d0220: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d0220u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d0224: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d0224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0228: 0xa2630021  sb          $v1, 0x21($s3)
    ctx->pc = 0x1d0228u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d022c: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x1d022cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1d0230: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1d0230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1d0234: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d0234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1d0238: 0x2485ff40  addiu       $a1, $a0, -0xC0
    ctx->pc = 0x1d0238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x1d023c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d023cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0240: 0x288400c0  slti        $a0, $a0, 0xC0
    ctx->pc = 0x1d0240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1d0244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d0248: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x1d0248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d024c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d024cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d0250: 0x42023  negu        $a0, $a0
    ctx->pc = 0x1d0250u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1d0254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d0254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d0258: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d025c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d025cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d0260: 0x0  nop
    ctx->pc = 0x1d0260u;
    // NOP
    // 0x1d0264: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x1d0264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1d0268: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1d0268u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1d026c: 0x70852018  mult1       $a0, $a0, $a1
    ctx->pc = 0x1d026cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d0270: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d0270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d0274: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d0274u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d0278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d027c: 0xa2630021  sb          $v1, 0x21($s3)
    ctx->pc = 0x1d027cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0280: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1d0280u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d0284: 0x2464ff40  addiu       $a0, $v1, -0xC0
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
    // 0x1d0288: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0288u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d028c: 0x286300c0  slti        $v1, $v1, 0xC0
    ctx->pc = 0x1d028cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1d0290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d0294: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d0294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d0298: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d0298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d029c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d029cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d02a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d02a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d02a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d02a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d02a8: 0x0  nop
    ctx->pc = 0x1d02a8u;
    // NOP
    // 0x1d02ac: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d02acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d02b0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d02b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d02b4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d02b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d02b8: 0xa2630022  sb          $v1, 0x22($s3)
    ctx->pc = 0x1d02b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d02bc: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1d02bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d02c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1d02c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1d02c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d02c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1d02c8: 0x2485ffc1  addiu       $a1, $a0, -0x3F
    ctx->pc = 0x1d02c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967233));
    // 0x1d02cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d02ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d02d0: 0x28840040  slti        $a0, $a0, 0x40
    ctx->pc = 0x1d02d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d02d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d02d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d02d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d02d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d02dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d02dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d02e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d02e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d02e4: 0x0  nop
    ctx->pc = 0x1d02e4u;
    // NOP
    // 0x1d02e8: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x1d02e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1d02ec: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1d02ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1d02f0: 0x70852018  mult1       $a0, $a0, $a1
    ctx->pc = 0x1d02f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d02f4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d02f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d02f8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d02f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d02fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d0300: 0xa2630022  sb          $v1, 0x22($s3)
    ctx->pc = 0x1d0300u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0304: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1d0304u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1d0308: 0x2464ffc1  addiu       $a0, $v1, -0x3F
    ctx->pc = 0x1d0308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967233));
    // 0x1d030c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d030cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0310: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x1d0310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d0314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d0318: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1d0318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1d031c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d031cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d0320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0324: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0328: 0x0  nop
    ctx->pc = 0x1d0328u;
    // NOP
    // 0x1d032c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d032cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d0330: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d0330u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d0334: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d0334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0338: 0xa2630023  sb          $v1, 0x23($s3)
    ctx->pc = 0x1d0338u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d033c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x1d033cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1d0340: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1d0340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1d0344: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d0344u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1d0348: 0x2485ff40  addiu       $a1, $a0, -0xC0
    ctx->pc = 0x1d0348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x1d034c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d034cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0350: 0x288400c0  slti        $a0, $a0, 0xC0
    ctx->pc = 0x1d0350u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1d0354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d0358: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x1d0358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d035c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d035cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d0360: 0x42023  negu        $a0, $a0
    ctx->pc = 0x1d0360u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1d0364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d0364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d0368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d036c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d036cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d0370: 0x0  nop
    ctx->pc = 0x1d0370u;
    // NOP
    // 0x1d0374: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x1d0374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1d0378: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1d0378u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1d037c: 0x70852018  mult1       $a0, $a0, $a1
    ctx->pc = 0x1d037cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d0380: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1d0380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1d0384: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d0384u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1d0388: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d038c: 0xa2630023  sb          $v1, 0x23($s3)
    ctx->pc = 0x1d038cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0390: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1d0390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0394: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0394u;
    {
        const bool branch_taken_0x1d0394 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d0394) {
            ctx->pc = 0x1D0398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0394u;
            // 0x1d0398: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D03A8u;
            goto label_1d03a8;
        }
    }
    ctx->pc = 0x1D039Cu;
    // 0x1d039c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d039cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d03a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D03A0u;
    {
        const bool branch_taken_0x1d03a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03A0u;
            // 0x1d03a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03a0) {
            ctx->pc = 0x1D03C0u;
            goto label_1d03c0;
        }
    }
    ctx->pc = 0x1D03A8u;
label_1d03a8:
    // 0x1d03a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d03a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d03ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d03acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d03b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d03b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d03b4: 0x0  nop
    ctx->pc = 0x1d03b4u;
    // NOP
    // 0x1d03b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d03b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d03bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d03bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d03c0:
    // 0x1d03c0: 0x3c043ec8  lui         $a0, 0x3EC8
    ctx->pc = 0x1d03c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16072 << 16));
    // 0x1d03c4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d03c8: 0x3484c8c9  ori         $a0, $a0, 0xC8C9
    ctx->pc = 0x1d03c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x1d03cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d03ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d03d0: 0x0  nop
    ctx->pc = 0x1d03d0u;
    // NOP
    // 0x1d03d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d03d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d03d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d03d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d03dc: 0x0  nop
    ctx->pc = 0x1d03dcu;
    // NOP
    // 0x1d03e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d03e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d03e4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D03E4u;
    {
        const bool branch_taken_0x1d03e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d03e4) {
            ctx->pc = 0x1D03E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03E4u;
            // 0x1d03e8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D03FCu;
            goto label_1d03fc;
        }
    }
    ctx->pc = 0x1D03ECu;
    // 0x1d03ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d03ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d03f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d03f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d03f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D03F4u;
    {
        const bool branch_taken_0x1d03f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03F4u;
            // 0x1d03f8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03f4) {
            ctx->pc = 0x1D0414u;
            goto label_1d0414;
        }
    }
    ctx->pc = 0x1D03FCu;
label_1d03fc:
    // 0x1d03fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0404: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0408: 0x0  nop
    ctx->pc = 0x1d0408u;
    // NOP
    // 0x1d040c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d040cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0410: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d0414:
    // 0x1d0414: 0xa2640028  sb          $a0, 0x28($s3)
    ctx->pc = 0x1d0414u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0418: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x1d0418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1d041c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D041Cu;
    {
        const bool branch_taken_0x1d041c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d041c) {
            ctx->pc = 0x1D0420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D041Cu;
            // 0x1d0420: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0430u;
            goto label_1d0430;
        }
    }
    ctx->pc = 0x1D0424u;
    // 0x1d0424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0428u;
    {
        const bool branch_taken_0x1d0428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0428u;
            // 0x1d042c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0428) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D0430u;
label_1d0430:
    // 0x1d0430: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d0430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d0434: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0438: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d043c: 0x0  nop
    ctx->pc = 0x1d043cu;
    // NOP
    // 0x1d0440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d0440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d0444: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d0444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d0448:
    // 0x1d0448: 0x3c043ec8  lui         $a0, 0x3EC8
    ctx->pc = 0x1d0448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16072 << 16));
    // 0x1d044c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d0450: 0x3484c8c9  ori         $a0, $a0, 0xC8C9
    ctx->pc = 0x1d0450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x1d0454: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0458: 0x0  nop
    ctx->pc = 0x1d0458u;
    // NOP
    // 0x1d045c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d045cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d0460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0464: 0x0  nop
    ctx->pc = 0x1d0464u;
    // NOP
    // 0x1d0468: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d046c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D046Cu;
    {
        const bool branch_taken_0x1d046c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d046c) {
            ctx->pc = 0x1D0470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D046Cu;
            // 0x1d0470: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0484u;
            goto label_1d0484;
        }
    }
    ctx->pc = 0x1D0474u;
    // 0x1d0474: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0478: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d047c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D047Cu;
    {
        const bool branch_taken_0x1d047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D047Cu;
            // 0x1d0480: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d047c) {
            ctx->pc = 0x1D049Cu;
            goto label_1d049c;
        }
    }
    ctx->pc = 0x1D0484u;
label_1d0484:
    // 0x1d0484: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d0484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0488: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d048c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d048cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0490: 0x0  nop
    ctx->pc = 0x1d0490u;
    // NOP
    // 0x1d0494: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0498: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d049c:
    // 0x1d049c: 0xa2640029  sb          $a0, 0x29($s3)
    ctx->pc = 0x1d049cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d04a0: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x1d04a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d04a4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D04A4u;
    {
        const bool branch_taken_0x1d04a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d04a4) {
            ctx->pc = 0x1D04A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04A4u;
            // 0x1d04a8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D04B8u;
            goto label_1d04b8;
        }
    }
    ctx->pc = 0x1D04ACu;
    // 0x1d04ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d04acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d04b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D04B0u;
    {
        const bool branch_taken_0x1d04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04B0u;
            // 0x1d04b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04b0) {
            ctx->pc = 0x1D04D0u;
            goto label_1d04d0;
        }
    }
    ctx->pc = 0x1D04B8u;
label_1d04b8:
    // 0x1d04b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d04b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d04bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d04bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d04c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d04c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d04c4: 0x0  nop
    ctx->pc = 0x1d04c4u;
    // NOP
    // 0x1d04c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d04c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d04cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d04ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d04d0:
    // 0x1d04d0: 0x3c043ec8  lui         $a0, 0x3EC8
    ctx->pc = 0x1d04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16072 << 16));
    // 0x1d04d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d04d8: 0x3484c8c9  ori         $a0, $a0, 0xC8C9
    ctx->pc = 0x1d04d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x1d04dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d04dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d04e0: 0x0  nop
    ctx->pc = 0x1d04e0u;
    // NOP
    // 0x1d04e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d04e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d04e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d04e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d04ec: 0x0  nop
    ctx->pc = 0x1d04ecu;
    // NOP
    // 0x1d04f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d04f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d04f4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D04F4u;
    {
        const bool branch_taken_0x1d04f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d04f4) {
            ctx->pc = 0x1D04F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04F4u;
            // 0x1d04f8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D050Cu;
            goto label_1d050c;
        }
    }
    ctx->pc = 0x1D04FCu;
    // 0x1d04fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d04fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0500: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0504: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0504u;
    {
        const bool branch_taken_0x1d0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0504u;
            // 0x1d0508: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0504) {
            ctx->pc = 0x1D0524u;
            goto label_1d0524;
        }
    }
    ctx->pc = 0x1D050Cu;
label_1d050c:
    // 0x1d050c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d050cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0510: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0514: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0518: 0x0  nop
    ctx->pc = 0x1d0518u;
    // NOP
    // 0x1d051c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d051cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0520: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d0524:
    // 0x1d0524: 0xa264002a  sb          $a0, 0x2A($s3)
    ctx->pc = 0x1d0524u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0528: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x1d0528u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x1d052c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D052Cu;
    {
        const bool branch_taken_0x1d052c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d052c) {
            ctx->pc = 0x1D0530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D052Cu;
            // 0x1d0530: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0540u;
            goto label_1d0540;
        }
    }
    ctx->pc = 0x1D0534u;
    // 0x1d0534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0538u;
    {
        const bool branch_taken_0x1d0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0538u;
            // 0x1d053c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0538) {
            ctx->pc = 0x1D0558u;
            goto label_1d0558;
        }
    }
    ctx->pc = 0x1D0540u;
label_1d0540:
    // 0x1d0540: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d0540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d0544: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0548: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d054c: 0x0  nop
    ctx->pc = 0x1d054cu;
    // NOP
    // 0x1d0550: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d0550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d0554: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d0554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d0558:
    // 0x1d0558: 0x3c043ec8  lui         $a0, 0x3EC8
    ctx->pc = 0x1d0558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16072 << 16));
    // 0x1d055c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d0560: 0x3484c8c9  ori         $a0, $a0, 0xC8C9
    ctx->pc = 0x1d0560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x1d0564: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0568: 0x0  nop
    ctx->pc = 0x1d0568u;
    // NOP
    // 0x1d056c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d056cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d0570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0574: 0x0  nop
    ctx->pc = 0x1d0574u;
    // NOP
    // 0x1d0578: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d057c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D057Cu;
    {
        const bool branch_taken_0x1d057c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d057c) {
            ctx->pc = 0x1D0580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D057Cu;
            // 0x1d0580: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0594u;
            goto label_1d0594;
        }
    }
    ctx->pc = 0x1D0584u;
    // 0x1d0584: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0588: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d058c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D058Cu;
    {
        const bool branch_taken_0x1d058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D058Cu;
            // 0x1d0590: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d058c) {
            ctx->pc = 0x1D05ACu;
            goto label_1d05ac;
        }
    }
    ctx->pc = 0x1D0594u;
label_1d0594:
    // 0x1d0594: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0598: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d059c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d059cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d05a0: 0x0  nop
    ctx->pc = 0x1d05a0u;
    // NOP
    // 0x1d05a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d05a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d05a8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d05a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d05ac:
    // 0x1d05ac: 0xa264002b  sb          $a0, 0x2B($s3)
    ctx->pc = 0x1d05acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d05b0: 0x92640028  lbu         $a0, 0x28($s3)
    ctx->pc = 0x1d05b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1d05b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d05b8: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x1d05b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x1d05bc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1d05bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1d05c0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1d05c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d05c4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1d05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1d05c8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d05c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d05cc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D05CCu;
    {
        const bool branch_taken_0x1d05cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d05cc) {
            ctx->pc = 0x1D05D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05CCu;
            // 0x1d05d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D05E0u;
            goto label_1d05e0;
        }
    }
    ctx->pc = 0x1D05D4u;
    // 0x1d05d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d05d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d05d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D05D8u;
    {
        const bool branch_taken_0x1d05d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05D8u;
            // 0x1d05dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05d8) {
            ctx->pc = 0x1D05F8u;
            goto label_1d05f8;
        }
    }
    ctx->pc = 0x1D05E0u;
label_1d05e0:
    // 0x1d05e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d05e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d05e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d05e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d05e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d05e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d05ec: 0x0  nop
    ctx->pc = 0x1d05ecu;
    // NOP
    // 0x1d05f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d05f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d05f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d05f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d05f8:
    // 0x1d05f8: 0x3c033ec8  lui         $v1, 0x3EC8
    ctx->pc = 0x1d05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16072 << 16));
    // 0x1d05fc: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1d05fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x1d0600: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x1d0600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x1d0604: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d0604u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0608: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x1d0608u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1d060c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d060cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d0610: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0610u;
    {
        const bool branch_taken_0x1d0610 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D0614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0610u;
            // 0x1d0614: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0610) {
            ctx->pc = 0x1D0624u;
            goto label_1d0624;
        }
    }
    ctx->pc = 0x1D0618u;
    // 0x1d0618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d061c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D061Cu;
    {
        const bool branch_taken_0x1d061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D061Cu;
            // 0x1d0620: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d061c) {
            ctx->pc = 0x1D0640u;
            goto label_1d0640;
        }
    }
    ctx->pc = 0x1D0624u;
label_1d0624:
    // 0x1d0624: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1d0624u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1d0628: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d0628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d062c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d062cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0630: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0634: 0x0  nop
    ctx->pc = 0x1d0634u;
    // NOP
    // 0x1d0638: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d0638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d063c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d063cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d0640:
    // 0x1d0640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0644: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d0648: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d0648u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d064c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1d064cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1d0650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0654: 0x0  nop
    ctx->pc = 0x1d0654u;
    // NOP
    // 0x1d0658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d065c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D065Cu;
    {
        const bool branch_taken_0x1d065c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d065c) {
            ctx->pc = 0x1D0660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D065Cu;
            // 0x1d0660: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0674u;
            goto label_1d0674;
        }
    }
    ctx->pc = 0x1D0664u;
    // 0x1d0664: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0668: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d066c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D066Cu;
    {
        const bool branch_taken_0x1d066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D066Cu;
            // 0x1d0670: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d066c) {
            ctx->pc = 0x1D068Cu;
            goto label_1d068c;
        }
    }
    ctx->pc = 0x1D0674u;
label_1d0674:
    // 0x1d0674: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0678: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d067c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d067cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0680: 0x0  nop
    ctx->pc = 0x1d0680u;
    // NOP
    // 0x1d0684: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0688: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d068c:
    // 0x1d068c: 0xa2640028  sb          $a0, 0x28($s3)
    ctx->pc = 0x1d068cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0690: 0x92640029  lbu         $a0, 0x29($s3)
    ctx->pc = 0x1d0690u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x1d0694: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d0694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0698: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x1d0698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x1d069c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1d069cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1d06a0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1d06a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d06a4: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x1d06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x1d06a8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d06a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d06ac: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D06ACu;
    {
        const bool branch_taken_0x1d06ac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d06ac) {
            ctx->pc = 0x1D06B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06ACu;
            // 0x1d06b0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D06C0u;
            goto label_1d06c0;
        }
    }
    ctx->pc = 0x1D06B4u;
    // 0x1d06b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d06b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d06b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D06B8u;
    {
        const bool branch_taken_0x1d06b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06B8u;
            // 0x1d06bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06b8) {
            ctx->pc = 0x1D06D8u;
            goto label_1d06d8;
        }
    }
    ctx->pc = 0x1D06C0u;
label_1d06c0:
    // 0x1d06c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d06c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d06c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d06c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d06c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d06c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d06cc: 0x0  nop
    ctx->pc = 0x1d06ccu;
    // NOP
    // 0x1d06d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d06d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d06d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d06d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d06d8:
    // 0x1d06d8: 0x3c033ec8  lui         $v1, 0x3EC8
    ctx->pc = 0x1d06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16072 << 16));
    // 0x1d06dc: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x1d06e0: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x1d06e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x1d06e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d06e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d06e8: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x1d06e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x1d06ec: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d06ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d06f0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D06F0u;
    {
        const bool branch_taken_0x1d06f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D06F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06F0u;
            // 0x1d06f4: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06f0) {
            ctx->pc = 0x1D0704u;
            goto label_1d0704;
        }
    }
    ctx->pc = 0x1D06F8u;
    // 0x1d06f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d06f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d06fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D06FCu;
    {
        const bool branch_taken_0x1d06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06FCu;
            // 0x1d0700: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06fc) {
            ctx->pc = 0x1D0720u;
            goto label_1d0720;
        }
    }
    ctx->pc = 0x1D0704u;
label_1d0704:
    // 0x1d0704: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1d0704u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1d0708: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d0708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d070c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d070cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0710: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0714: 0x0  nop
    ctx->pc = 0x1d0714u;
    // NOP
    // 0x1d0718: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d0718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d071c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d071cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d0720:
    // 0x1d0720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0724: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d0728: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d0728u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d072c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1d072cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1d0730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0734: 0x0  nop
    ctx->pc = 0x1d0734u;
    // NOP
    // 0x1d0738: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d073c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D073Cu;
    {
        const bool branch_taken_0x1d073c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d073c) {
            ctx->pc = 0x1D0740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D073Cu;
            // 0x1d0740: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0754u;
            goto label_1d0754;
        }
    }
    ctx->pc = 0x1D0744u;
    // 0x1d0744: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0748: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d074c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D074Cu;
    {
        const bool branch_taken_0x1d074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D074Cu;
            // 0x1d0750: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d074c) {
            ctx->pc = 0x1D076Cu;
            goto label_1d076c;
        }
    }
    ctx->pc = 0x1D0754u;
label_1d0754:
    // 0x1d0754: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d0754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0758: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d075c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d075cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0760: 0x0  nop
    ctx->pc = 0x1d0760u;
    // NOP
    // 0x1d0764: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0768: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d076c:
    // 0x1d076c: 0xa2640029  sb          $a0, 0x29($s3)
    ctx->pc = 0x1d076cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0770: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1d0770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1d0774: 0x9265002a  lbu         $a1, 0x2A($s3)
    ctx->pc = 0x1d0774u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x1d0778: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d0778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d077c: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x1d077cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x1d0780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d0780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d0784: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0784u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d0788: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x1d0788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x1d078c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d078cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0790: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0790u;
    {
        const bool branch_taken_0x1d0790 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d0790) {
            ctx->pc = 0x1D0794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0790u;
            // 0x1d0794: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D07A4u;
            goto label_1d07a4;
        }
    }
    ctx->pc = 0x1D0798u;
    // 0x1d0798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d079c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D079Cu;
    {
        const bool branch_taken_0x1d079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D079Cu;
            // 0x1d07a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d079c) {
            ctx->pc = 0x1D07BCu;
            goto label_1d07bc;
        }
    }
    ctx->pc = 0x1D07A4u;
label_1d07a4:
    // 0x1d07a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d07a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d07a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d07a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d07ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d07acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d07b0: 0x0  nop
    ctx->pc = 0x1d07b0u;
    // NOP
    // 0x1d07b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d07b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d07b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d07b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d07bc:
    // 0x1d07bc: 0x3c033ec8  lui         $v1, 0x3EC8
    ctx->pc = 0x1d07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16072 << 16));
    // 0x1d07c0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1d07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x1d07c4: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x1d07c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x1d07c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d07c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d07cc: 0x9263002a  lbu         $v1, 0x2A($s3)
    ctx->pc = 0x1d07ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x1d07d0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d07d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d07d4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D07D4u;
    {
        const bool branch_taken_0x1d07d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D07D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07D4u;
            // 0x1d07d8: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07d4) {
            ctx->pc = 0x1D07E8u;
            goto label_1d07e8;
        }
    }
    ctx->pc = 0x1D07DCu;
    // 0x1d07dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d07dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d07e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D07E0u;
    {
        const bool branch_taken_0x1d07e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07E0u;
            // 0x1d07e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07e0) {
            ctx->pc = 0x1D0804u;
            goto label_1d0804;
        }
    }
    ctx->pc = 0x1D07E8u;
label_1d07e8:
    // 0x1d07e8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1d07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1d07ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d07ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d07f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d07f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d07f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d07f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d07f8: 0x0  nop
    ctx->pc = 0x1d07f8u;
    // NOP
    // 0x1d07fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d07fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d0800: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d0800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d0804:
    // 0x1d0804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0808: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d0808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d080c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d080cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0810: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1d0810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1d0814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0818: 0x0  nop
    ctx->pc = 0x1d0818u;
    // NOP
    // 0x1d081c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d081cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0820: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0820u;
    {
        const bool branch_taken_0x1d0820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0820) {
            ctx->pc = 0x1D0824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0820u;
            // 0x1d0824: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0838u;
            goto label_1d0838;
        }
    }
    ctx->pc = 0x1D0828u;
    // 0x1d0828: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d082c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d082cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0830u;
    {
        const bool branch_taken_0x1d0830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0830u;
            // 0x1d0834: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0830) {
            ctx->pc = 0x1D0850u;
            goto label_1d0850;
        }
    }
    ctx->pc = 0x1D0838u;
label_1d0838:
    // 0x1d0838: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d0838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d083c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d083cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0840: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0844: 0x0  nop
    ctx->pc = 0x1d0844u;
    // NOP
    // 0x1d0848: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d084c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d084cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d0850:
    // 0x1d0850: 0xa264002a  sb          $a0, 0x2A($s3)
    ctx->pc = 0x1d0850u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0854: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d0854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1d0858: 0x9265002b  lbu         $a1, 0x2B($s3)
    ctx->pc = 0x1d0858u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 43)));
    // 0x1d085c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0860: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x1d0860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x1d0864: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d0864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d0868: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0868u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d086c: 0x31d42  srl         $v1, $v1, 21
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 21));
    // 0x1d0870: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d0870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0874: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0874u;
    {
        const bool branch_taken_0x1d0874 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d0874) {
            ctx->pc = 0x1D0878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0874u;
            // 0x1d0878: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0888u;
            goto label_1d0888;
        }
    }
    ctx->pc = 0x1D087Cu;
    // 0x1d087c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d087cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0880u;
    {
        const bool branch_taken_0x1d0880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0880u;
            // 0x1d0884: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0880) {
            ctx->pc = 0x1D08A0u;
            goto label_1d08a0;
        }
    }
    ctx->pc = 0x1D0888u;
label_1d0888:
    // 0x1d0888: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d0888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d088c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d088cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0890: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0890u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0894: 0x0  nop
    ctx->pc = 0x1d0894u;
    // NOP
    // 0x1d0898: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d0898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d089c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d089cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d08a0:
    // 0x1d08a0: 0x3c033ec8  lui         $v1, 0x3EC8
    ctx->pc = 0x1d08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16072 << 16));
    // 0x1d08a4: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x1d08a8: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x1d08a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x1d08ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d08acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d08b0: 0x9263002b  lbu         $v1, 0x2B($s3)
    ctx->pc = 0x1d08b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 43)));
    // 0x1d08b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d08b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d08b8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D08B8u;
    {
        const bool branch_taken_0x1d08b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08B8u;
            // 0x1d08bc: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08b8) {
            ctx->pc = 0x1D08CCu;
            goto label_1d08cc;
        }
    }
    ctx->pc = 0x1D08C0u;
    // 0x1d08c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d08c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d08c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D08C4u;
    {
        const bool branch_taken_0x1d08c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08C4u;
            // 0x1d08c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08c4) {
            ctx->pc = 0x1D08E8u;
            goto label_1d08e8;
        }
    }
    ctx->pc = 0x1D08CCu;
label_1d08cc:
    // 0x1d08cc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1d08d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d08d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d08d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d08d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d08d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d08d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d08dc: 0x0  nop
    ctx->pc = 0x1d08dcu;
    // NOP
    // 0x1d08e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d08e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d08e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d08e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d08e8:
    // 0x1d08e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d08e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d08ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1d08f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d08f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d08f4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1d08f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1d08f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d08f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d08fc: 0x0  nop
    ctx->pc = 0x1d08fcu;
    // NOP
    // 0x1d0900: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0904: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0904u;
    {
        const bool branch_taken_0x1d0904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0904) {
            ctx->pc = 0x1D0908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0904u;
            // 0x1d0908: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D091Cu;
            goto label_1d091c;
        }
    }
    ctx->pc = 0x1D090Cu;
    // 0x1d090c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d090cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0910: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0914u;
    {
        const bool branch_taken_0x1d0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0914u;
            // 0x1d0918: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0914) {
            ctx->pc = 0x1D0934u;
            goto label_1d0934;
        }
    }
    ctx->pc = 0x1D091Cu;
label_1d091c:
    // 0x1d091c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0920: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d0924: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d0928: 0x0  nop
    ctx->pc = 0x1d0928u;
    // NOP
    // 0x1d092c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d092cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0930: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d0934:
    // 0x1d0934: 0xa264002b  sb          $a0, 0x2B($s3)
    ctx->pc = 0x1d0934u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 4));
label_1d0938:
    // 0x1d0938: 0x82640021  lb          $a0, 0x21($s3)
    ctx->pc = 0x1d0938u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
    // 0x1d093c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0940: 0x2884000b  slti        $a0, $a0, 0xB
    ctx->pc = 0x1d0940u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d0944: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x1d0944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d0948: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d094c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1d0950: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d0950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d0954: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d0954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d0958: 0x82630021  lb          $v1, 0x21($s3)
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
    // 0x1d095c: 0x2863fff6  slti        $v1, $v1, -0xA
    ctx->pc = 0x1d095cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x1d0960: 0x31e40  sll         $v1, $v1, 25
    ctx->pc = 0x1d0960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 25));
    // 0x1d0964: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0968: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d0968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d096c: 0x82630020  lb          $v1, 0x20($s3)
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1d0970: 0x2863fff6  slti        $v1, $v1, -0xA
    ctx->pc = 0x1d0970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x1d0974: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x1d0974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x1d0978: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d097c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d097cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d0980: 0x82630020  lb          $v1, 0x20($s3)
    ctx->pc = 0x1d0980u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1d0984: 0x2863000b  slti        $v1, $v1, 0xB
    ctx->pc = 0x1d0984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d0988: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d0988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d098c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d0990: 0x31ec0  sll         $v1, $v1, 27
    ctx->pc = 0x1d0990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
    // 0x1d0994: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d0994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0998: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d0998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d099c: 0x82630023  lb          $v1, 0x23($s3)
    ctx->pc = 0x1d099cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x1d09a0: 0x2863000b  slti        $v1, $v1, 0xB
    ctx->pc = 0x1d09a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d09a4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d09a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d09a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d09a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d09ac: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x1d09acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x1d09b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d09b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d09b4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d09b8: 0x82630023  lb          $v1, 0x23($s3)
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x1d09bc: 0x2863fff6  slti        $v1, $v1, -0xA
    ctx->pc = 0x1d09bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x1d09c0: 0x31f40  sll         $v1, $v1, 29
    ctx->pc = 0x1d09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
    // 0x1d09c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d09c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d09c8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d09cc: 0x82630022  lb          $v1, 0x22($s3)
    ctx->pc = 0x1d09ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1d09d0: 0x2863fff6  slti        $v1, $v1, -0xA
    ctx->pc = 0x1d09d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x1d09d4: 0x31f80  sll         $v1, $v1, 30
    ctx->pc = 0x1d09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
    // 0x1d09d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d09d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d09dc: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d09dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d09e0: 0x82630022  lb          $v1, 0x22($s3)
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1d09e4: 0x2863000b  slti        $v1, $v1, 0xB
    ctx->pc = 0x1d09e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d09e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d09e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d09ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d09ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d09f0: 0x31fc0  sll         $v1, $v1, 31
    ctx->pc = 0x1d09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
    // 0x1d09f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d09f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d09f8: 0x14770015  bne         $v1, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D09F8u;
    {
        const bool branch_taken_0x1d09f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x1D09FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09F8u;
            // 0x1d09fc: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09f8) {
            ctx->pc = 0x1D0A50u;
            goto label_1d0a50;
        }
    }
    ctx->pc = 0x1D0A00u;
    // 0x1d0a00: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1d0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d0a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d0a08: 0x2c610015  sltiu       $at, $v1, 0x15
    ctx->pc = 0x1d0a08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1d0a0c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0A0Cu;
    {
        const bool branch_taken_0x1d0a0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A0Cu;
            // 0x1d0a10: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a0c) {
            ctx->pc = 0x1D0A38u;
            goto label_1d0a38;
        }
    }
    ctx->pc = 0x1D0A14u;
    // 0x1d0a14: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1d0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1d0a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d0a1c: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x1d0a1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d0a20: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1D0A20u;
    {
        const bool branch_taken_0x1d0a20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A20u;
            // 0x1d0a24: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a20) {
            ctx->pc = 0x1D0A58u;
            goto label_1d0a58;
        }
    }
    ctx->pc = 0x1D0A28u;
    // 0x1d0a28: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d0a2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D0A2Cu;
    {
        const bool branch_taken_0x1d0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A2Cu;
            // 0x1d0a30: 0xae77000c  sw          $s7, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a2c) {
            ctx->pc = 0x1D0A58u;
            goto label_1d0a58;
        }
    }
    ctx->pc = 0x1D0A34u;
    // 0x1d0a34: 0x0  nop
    ctx->pc = 0x1d0a34u;
    // NOP
label_1d0a38:
    // 0x1d0a38: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d0a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a40: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0A40u;
    {
        const bool branch_taken_0x1d0a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0a40) {
            ctx->pc = 0x1D0A58u;
            goto label_1d0a58;
        }
    }
    ctx->pc = 0x1D0A48u;
    // 0x1d0a48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A48u;
    {
        const bool branch_taken_0x1d0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A48u;
            // 0x1d0a4c: 0xae77000c  sw          $s7, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a48) {
            ctx->pc = 0x1D0A58u;
            goto label_1d0a58;
        }
    }
    ctx->pc = 0x1D0A50u;
label_1d0a50:
    // 0x1d0a50: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d0a54: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1d0a58:
    // 0x1d0a58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0a5c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0A5Cu;
    {
        const bool branch_taken_0x1d0a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a5c) {
            ctx->pc = 0x1D0AA8u;
            goto label_1d0aa8;
        }
    }
    ctx->pc = 0x1D0A64u;
    // 0x1d0a64: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1d0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1d0a68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d0a6c: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1d0a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x1d0a70: 0x2c630258  sltiu       $v1, $v1, 0x258
    ctx->pc = 0x1d0a70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
    // 0x1d0a74: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D0A74u;
    {
        const bool branch_taken_0x1d0a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a74) {
            ctx->pc = 0x1D0AB0u;
            goto label_1d0ab0;
        }
    }
    ctx->pc = 0x1D0A7Cu;
    // 0x1d0a7c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1d0a80: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x1d0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1d0a84: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0A84u;
    {
        const bool branch_taken_0x1d0a84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0a84) {
            ctx->pc = 0x1D0AA0u;
            goto label_1d0aa0;
        }
    }
    ctx->pc = 0x1D0A8Cu;
    // 0x1d0a8c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1d0a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a98: 0xc0482e6  jal         func_120B98
    ctx->pc = 0x1D0A98u;
    SET_GPR_U32(ctx, 31, 0x1D0AA0u);
    ctx->pc = 0x1D0A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A98u;
            // 0x1d0a9c: 0x24c6c310  addiu       $a2, $a2, -0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (runtime->hasFunction(0x120B98u)) {
        auto targetFn = runtime->lookupFunction(0x120B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AA0u; }
        if (ctx->pc != 0x1D0AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120B98_0x120b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AA0u; }
        if (ctx->pc != 0x1D0AA0u) { return; }
    }
    ctx->pc = 0x1D0AA0u;
label_1d0aa0:
    // 0x1d0aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0AA0u;
    {
        const bool branch_taken_0x1d0aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AA0u;
            // 0x1d0aa4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0aa0) {
            ctx->pc = 0x1D0AB0u;
            goto label_1d0ab0;
        }
    }
    ctx->pc = 0x1D0AA8u;
label_1d0aa8:
    // 0x1d0aa8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d0aac: 0x0  nop
    ctx->pc = 0x1d0aacu;
    // NOP
label_1d0ab0:
    // 0x1d0ab0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0ab4: 0x2e41826  xor         $v1, $s7, $a0
    ctx->pc = 0x1d0ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 4));
    // 0x1d0ab8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d0ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d0abc: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1d0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1d0ac0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0ac4: 0x2e31826  xor         $v1, $s7, $v1
    ctx->pc = 0x1d0ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x1d0ac8: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1d0ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x1d0acc: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1d0accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x1d0ad0: 0x9263002e  lbu         $v1, 0x2E($s3)
    ctx->pc = 0x1d0ad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x1d0ad4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D0AD4u;
    {
        const bool branch_taken_0x1d0ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ad4) {
            ctx->pc = 0x1D0B60u;
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0ADCu;
    // 0x1d0adc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1d0adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1d0ae0: 0x2c610258  sltiu       $at, $v1, 0x258
    ctx->pc = 0x1d0ae0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
    // 0x1d0ae4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D0AE4u;
    {
        const bool branch_taken_0x1d0ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ae4) {
            ctx->pc = 0x1D0B60u;
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0AECu;
    // 0x1d0aec: 0x96640024  lhu         $a0, 0x24($s3)
    ctx->pc = 0x1d0aecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d0af0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D0AF0u;
    {
        const bool branch_taken_0x1d0af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0af0) {
            ctx->pc = 0x1D0B60u;
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0AF8u;
    // 0x1d0af8: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x1d0af8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x1d0afc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0AFCu;
    {
        const bool branch_taken_0x1d0afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0afc) {
            ctx->pc = 0x1D0B28u;
            goto label_1d0b28;
        }
    }
    ctx->pc = 0x1D0B04u;
    // 0x1d0b04: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d0b04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1d0b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b10: 0xc0482e6  jal         func_120B98
    ctx->pc = 0x1D0B10u;
    SET_GPR_U32(ctx, 31, 0x1D0B18u);
    ctx->pc = 0x1D0B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B10u;
            // 0x1d0b14: 0x24c6c312  addiu       $a2, $a2, -0x3CEE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951698));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (runtime->hasFunction(0x120B98u)) {
        auto targetFn = runtime->lookupFunction(0x120B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B18u; }
        if (ctx->pc != 0x1D0B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120B98_0x120b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B18u; }
        if (ctx->pc != 0x1D0B18u) { return; }
    }
    ctx->pc = 0x1D0B18u;
label_1d0b18:
    // 0x1d0b18: 0x96630024  lhu         $v1, 0x24($s3)
    ctx->pc = 0x1d0b18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d0b1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0B1Cu;
    {
        const bool branch_taken_0x1d0b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B1Cu;
            // 0x1d0b20: 0xa6630026  sh          $v1, 0x26($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b1c) {
            ctx->pc = 0x1D0B60u;
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0B24u;
    // 0x1d0b24: 0x0  nop
    ctx->pc = 0x1d0b24u;
    // NOP
label_1d0b28:
    // 0x1d0b28: 0xa6640026  sh          $a0, 0x26($s3)
    ctx->pc = 0x1d0b28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d0b2c: 0x96630024  lhu         $v1, 0x24($s3)
    ctx->pc = 0x1d0b2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d0b30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d0b34: 0xa6630024  sh          $v1, 0x24($s3)
    ctx->pc = 0x1d0b34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d0b38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d0b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d0b3c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0B3Cu;
    {
        const bool branch_taken_0x1d0b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0b3c) {
            ctx->pc = 0x1D0B60u;
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0B44u;
    // 0x1d0b44: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d0b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1d0b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b50: 0xc0482e6  jal         func_120B98
    ctx->pc = 0x1D0B50u;
    SET_GPR_U32(ctx, 31, 0x1D0B58u);
    ctx->pc = 0x1D0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B50u;
            // 0x1d0b54: 0x24c6c310  addiu       $a2, $a2, -0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (runtime->hasFunction(0x120B98u)) {
        auto targetFn = runtime->lookupFunction(0x120B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B58u; }
        if (ctx->pc != 0x1D0B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120B98_0x120b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B58u; }
        if (ctx->pc != 0x1D0B58u) { return; }
    }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0xa6600026  sh          $zero, 0x26($s3)
    ctx->pc = 0x1d0b58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0b5c: 0x0  nop
    ctx->pc = 0x1d0b5cu;
    // NOP
label_1d0b60:
    // 0x1d0b60: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1d0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d0b64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0b68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0b6c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1d0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x1d0b70: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1d0b74: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1d0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d0b78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0b7c: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x1d0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x1d0b80: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1d0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1d0b84: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d0b88: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0b8c: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x1d0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x1d0b90: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1d0b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1d0b94: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1d0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d0b98: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d0b9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0B9Cu;
    {
        const bool branch_taken_0x1d0b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B9Cu;
            // 0x1d0ba0: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b9c) {
            ctx->pc = 0x1D0BB0u;
            goto label_1d0bb0;
        }
    }
    ctx->pc = 0x1D0BA4u;
    // 0x1d0ba4: 0x0  nop
    ctx->pc = 0x1d0ba4u;
    // NOP
label_1d0ba8:
    // 0x1d0ba8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1d0ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bac: 0xa260002d  sb          $zero, 0x2D($s3)
    ctx->pc = 0x1d0bacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 0));
label_1d0bb0:
    // 0x1d0bb0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d0bb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d0bb4: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x1d0bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1d0bb8:
    // 0x1d0bb8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d0bbc: 0x2ec30008  sltiu       $v1, $s6, 0x8
    ctx->pc = 0x1d0bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d0bc0: 0x5460fbfb  bnel        $v1, $zero, . + 4 + (-0x405 << 2)
    ctx->pc = 0x1D0BC0u;
    {
        const bool branch_taken_0x1d0bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0bc0) {
            ctx->pc = 0x1D0BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BC0u;
            // 0x1d0bc4: 0x8e840020  lw          $a0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CFBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfbb0;
        }
    }
    ctx->pc = 0x1D0BC8u;
    // 0x1d0bc8: 0x2fc10004  sltiu       $at, $fp, 0x4
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d0bcc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0BCCu;
    {
        const bool branch_taken_0x1d0bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0bcc) {
            ctx->pc = 0x1D0BF0u;
            goto label_1d0bf0;
        }
    }
    ctx->pc = 0x1D0BD4u;
label_1d0bd4:
    // 0x1d0bd4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d0bd8: 0xa260001e  sb          $zero, 0x1E($s3)
    ctx->pc = 0x1d0bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bdc: 0x2fc30004  sltiu       $v1, $fp, 0x4
    ctx->pc = 0x1d0bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d0be0: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x1d0be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1d0be4: 0x0  nop
    ctx->pc = 0x1d0be4u;
    // NOP
    // 0x1d0be8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0BE8u;
    {
        const bool branch_taken_0x1d0be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0be8) {
            ctx->pc = 0x1D0BD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0bd4;
        }
    }
    ctx->pc = 0x1D0BF0u;
label_1d0bf0:
    // 0x1d0bf0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d0bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d0bf4:
    // 0x1d0bf4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d0bf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0bf8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d0bf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0bfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d0bfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0c00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d0c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0c04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d0c04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0c08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C18u;
            // 0x1d0c1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0C20u;
label_1d0c20:
    // 0x1d0c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0c30: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x1d0c30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    // 0x1d0c34: 0x26319760  addiu       $s1, $s1, -0x68A0
    ctx->pc = 0x1d0c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940512));
    // 0x1d0c38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c3c:
    // 0x1d0c3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d0c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0c44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d0c48: 0xa224002e  sb          $a0, 0x2E($s1)
    ctx->pc = 0x1d0c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0c4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d0c50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d0c54: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
    // 0x1d0c58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0c5c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d0c60: 0x9062001e  lbu         $v0, 0x1E($v1)
    ctx->pc = 0x1d0c60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1d0c64: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0C64u;
    {
        const bool branch_taken_0x1d0c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d0c64) {
            ctx->pc = 0x1D0C88u;
            goto label_1d0c88;
        }
    }
    ctx->pc = 0x1D0C6Cu;
    // 0x1d0c6c: 0x9062001d  lbu         $v0, 0x1D($v1)
    ctx->pc = 0x1d0c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29)));
    // 0x1d0c70: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1d0c74: 0x24c6c310  addiu       $a2, $a2, -0x3CF0
    ctx->pc = 0x1d0c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951696));
    // 0x1d0c78: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1d0c7c: 0xc0482e6  jal         func_120B98
    ctx->pc = 0x1D0C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C84u);
    ctx->pc = 0x1D0C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C7Cu;
            // 0x1d0c80: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (runtime->hasFunction(0x120B98u)) {
        auto targetFn = runtime->lookupFunction(0x120B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C84u; }
        if (ctx->pc != 0x1D0C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120B98_0x120b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C84u; }
        if (ctx->pc != 0x1D0C84u) { return; }
    }
    ctx->pc = 0x1D0C84u;
label_1d0c84:
    // 0x1d0c84: 0x0  nop
    ctx->pc = 0x1d0c84u;
    // NOP
label_1d0c88:
    // 0x1d0c88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0c8c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1d0c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d0c90: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D0C90u;
    {
        const bool branch_taken_0x1d0c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C90u;
            // 0x1d0c94: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c90) {
            ctx->pc = 0x1D0C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0c3c;
        }
    }
    ctx->pc = 0x1D0C98u;
    // 0x1d0c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c9c: 0xc0480a8  jal         func_1202A0
    ctx->pc = 0x1D0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0CA4u);
    ctx->pc = 0x1D0CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C9Cu;
            // 0x1d0ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202A0u;
    if (runtime->hasFunction(0x1202A0u)) {
        auto targetFn = runtime->lookupFunction(0x1202A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CA4u; }
        if (ctx->pc != 0x1D0CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202A0_0x1202a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CA4u; }
        if (ctx->pc != 0x1D0CA4u) { return; }
    }
    ctx->pc = 0x1D0CA4u;
label_1d0ca4:
    // 0x1d0ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ca8: 0xc0480a8  jal         func_1202A0
    ctx->pc = 0x1D0CA8u;
    SET_GPR_U32(ctx, 31, 0x1D0CB0u);
    ctx->pc = 0x1D0CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CA8u;
            // 0x1d0cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202A0u;
    if (runtime->hasFunction(0x1202A0u)) {
        auto targetFn = runtime->lookupFunction(0x1202A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CB0u; }
        if (ctx->pc != 0x1D0CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202A0_0x1202a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CB0u; }
        if (ctx->pc != 0x1D0CB0u) { return; }
    }
    ctx->pc = 0x1D0CB0u;
label_1d0cb0:
    // 0x1d0cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cb4: 0xc0480a8  jal         func_1202A0
    ctx->pc = 0x1D0CB4u;
    SET_GPR_U32(ctx, 31, 0x1D0CBCu);
    ctx->pc = 0x1D0CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CB4u;
            // 0x1d0cb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202A0u;
    if (runtime->hasFunction(0x1202A0u)) {
        auto targetFn = runtime->lookupFunction(0x1202A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CBCu; }
        if (ctx->pc != 0x1D0CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202A0_0x1202a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CBCu; }
        if (ctx->pc != 0x1D0CBCu) { return; }
    }
    ctx->pc = 0x1D0CBCu;
label_1d0cbc:
    // 0x1d0cbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cc0: 0xc0480a8  jal         func_1202A0
    ctx->pc = 0x1D0CC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CC8u);
    ctx->pc = 0x1D0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CC0u;
            // 0x1d0cc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202A0u;
    if (runtime->hasFunction(0x1202A0u)) {
        auto targetFn = runtime->lookupFunction(0x1202A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CC8u; }
        if (ctx->pc != 0x1D0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202A0_0x1202a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CC8u; }
        if (ctx->pc != 0x1D0CC8u) { return; }
    }
    ctx->pc = 0x1D0CC8u;
label_1d0cc8:
    // 0x1d0cc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ccc: 0xc0480a8  jal         func_1202A0
    ctx->pc = 0x1D0CCCu;
    SET_GPR_U32(ctx, 31, 0x1D0CD4u);
    ctx->pc = 0x1D0CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CCCu;
            // 0x1d0cd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202A0u;
    if (runtime->hasFunction(0x1202A0u)) {
        auto targetFn = runtime->lookupFunction(0x1202A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CD4u; }
        if (ctx->pc != 0x1D0CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202A0_0x1202a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CD4u; }
        if (ctx->pc != 0x1D0CD4u) { return; }
    }
    ctx->pc = 0x1D0CD4u;
label_1d0cd4:
    // 0x1d0cd4: 0xc074450  jal         func_1D1140
    ctx->pc = 0x1D0CD4u;
    SET_GPR_U32(ctx, 31, 0x1D0CDCu);
    ctx->pc = 0x1D0CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CD4u;
            // 0x1d0cd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1140u;
    if (runtime->hasFunction(0x1D1140u)) {
        auto targetFn = runtime->lookupFunction(0x1D1140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CDCu; }
        if (ctx->pc != 0x1D0CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1140_0x1d1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CDCu; }
        if (ctx->pc != 0x1D0CDCu) { return; }
    }
    ctx->pc = 0x1D0CDCu;
label_1d0cdc:
    // 0x1d0cdc: 0xc074450  jal         func_1D1140
    ctx->pc = 0x1D0CDCu;
    SET_GPR_U32(ctx, 31, 0x1D0CE4u);
    ctx->pc = 0x1D0CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CDCu;
            // 0x1d0ce0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1140u;
    if (runtime->hasFunction(0x1D1140u)) {
        auto targetFn = runtime->lookupFunction(0x1D1140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CE4u; }
        if (ctx->pc != 0x1D0CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1140_0x1d1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CE4u; }
        if (ctx->pc != 0x1D0CE4u) { return; }
    }
    ctx->pc = 0x1D0CE4u;
label_1d0ce4:
    // 0x1d0ce4: 0xc047fbc  jal         func_11FEF0
    ctx->pc = 0x1D0CE4u;
    SET_GPR_U32(ctx, 31, 0x1D0CECu);
    ctx->pc = 0x11FEF0u;
    if (runtime->hasFunction(0x11FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x11FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CECu; }
        if (ctx->pc != 0x1D0CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FEF0_0x11fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CECu; }
        if (ctx->pc != 0x1D0CECu) { return; }
    }
    ctx->pc = 0x1D0CECu;
label_1d0cec:
    // 0x1d0cec: 0xc07442c  jal         func_1D10B0
    ctx->pc = 0x1D0CECu;
    SET_GPR_U32(ctx, 31, 0x1D0CF4u);
    ctx->pc = 0x1D10B0u;
    if (runtime->hasFunction(0x1D10B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D10B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CF4u; }
        if (ctx->pc != 0x1D0CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D10B0_0x1d10b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CF4u; }
        if (ctx->pc != 0x1D0CF4u) { return; }
    }
    ctx->pc = 0x1D0CF4u;
label_1d0cf4:
    // 0x1d0cf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D00u;
            // 0x1d0d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0D08u;
    // 0x1d0d08: 0x0  nop
    ctx->pc = 0x1d0d08u;
    // NOP
    // 0x1d0d0c: 0x0  nop
    ctx->pc = 0x1d0d0cu;
    // NOP
}
