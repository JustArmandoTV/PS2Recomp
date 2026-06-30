#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004019D0
// Address: 0x4019d0 - 0x401f40
void sub_004019D0_0x4019d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004019D0_0x4019d0");
#endif

    switch (ctx->pc) {
        case 0x401a58u: goto label_401a58;
        case 0x401a60u: goto label_401a60;
        case 0x401ac4u: goto label_401ac4;
        case 0x401af4u: goto label_401af4;
        case 0x401b24u: goto label_401b24;
        case 0x401b54u: goto label_401b54;
        case 0x401b94u: goto label_401b94;
        case 0x401bc4u: goto label_401bc4;
        case 0x401c2cu: goto label_401c2c;
        case 0x401c3cu: goto label_401c3c;
        case 0x401c50u: goto label_401c50;
        case 0x401c5cu: goto label_401c5c;
        case 0x401ca8u: goto label_401ca8;
        case 0x401ce8u: goto label_401ce8;
        case 0x401d0cu: goto label_401d0c;
        case 0x401d14u: goto label_401d14;
        case 0x401d3cu: goto label_401d3c;
        case 0x401d6cu: goto label_401d6c;
        case 0x401d98u: goto label_401d98;
        case 0x401dc8u: goto label_401dc8;
        case 0x401decu: goto label_401dec;
        case 0x401e1cu: goto label_401e1c;
        case 0x401ea4u: goto label_401ea4;
        case 0x401ed0u: goto label_401ed0;
        case 0x401edcu: goto label_401edc;
        case 0x401ee4u: goto label_401ee4;
        case 0x401f0cu: goto label_401f0c;
        default: break;
    }

    ctx->pc = 0x4019d0u;

    // 0x4019d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4019d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4019d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4019d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4019d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4019d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4019dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4019dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4019e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4019e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4019e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4019e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4019e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4019e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4019ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4019ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4019f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4019f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4019f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4019f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4019f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4019f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4019fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4019fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x401a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x401a04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x401a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401a08: 0x12600140  beqz        $s3, . + 4 + (0x140 << 2)
    ctx->pc = 0x401A08u;
    {
        const bool branch_taken_0x401a08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x401A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401A08u;
            // 0x401a0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401a08) {
            ctx->pc = 0x401F0Cu;
            goto label_401f0c;
        }
    }
    ctx->pc = 0x401A10u;
    // 0x401a10: 0x3c011555  lui         $at, 0x1555
    ctx->pc = 0x401a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
    // 0x401a14: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x401a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x401a18: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x401a18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x401a1c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x401A1Cu;
    {
        const bool branch_taken_0x401a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401a1c) {
            ctx->pc = 0x401A40u;
            goto label_401a40;
        }
    }
    ctx->pc = 0x401A24u;
    // 0x401a24: 0x3c031555  lui         $v1, 0x1555
    ctx->pc = 0x401a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5461 << 16));
    // 0x401a28: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x401a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x401a2c: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x401a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x401a30: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x401a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x401a34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x401a34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x401a38: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x401A38u;
    {
        const bool branch_taken_0x401a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401a38) {
            ctx->pc = 0x401A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401A38u;
            // 0x401a3c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401A64u;
            goto label_401a64;
        }
    }
    ctx->pc = 0x401A40u;
label_401a40:
    // 0x401a40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x401a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x401a44: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x401a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x401a48: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x401a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x401a4c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x401a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401a50: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401A50u;
    SET_GPR_U32(ctx, 31, 0x401A58u);
    ctx->pc = 0x401A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401A50u;
            // 0x401a54: 0x24a5b880  addiu       $a1, $a1, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401A58u; }
        if (ctx->pc != 0x401A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401A58u; }
        if (ctx->pc != 0x401A58u) { return; }
    }
    ctx->pc = 0x401A58u;
label_401a58:
    // 0x401a58: 0xc04981a  jal         func_126068
    ctx->pc = 0x401A58u;
    SET_GPR_U32(ctx, 31, 0x401A60u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401A60u; }
        if (ctx->pc != 0x401A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401A60u; }
        if (ctx->pc != 0x401A60u) { return; }
    }
    ctx->pc = 0x401A60u;
label_401a60:
    // 0x401a60: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x401a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_401a64:
    // 0x401a64: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x401a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x401a68: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x401a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x401a6c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x401a6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x401a70: 0x54200080  bnel        $at, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x401A70u;
    {
        const bool branch_taken_0x401a70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x401a70) {
            ctx->pc = 0x401A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401A70u;
            // 0x401a74: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401C74u;
            goto label_401c74;
        }
    }
    ctx->pc = 0x401A78u;
    // 0x401a78: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x401a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x401a7c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x401a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x401a80: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x401a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x401a84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x401a84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x401a88: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x401a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x401a8c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x401a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x401a90: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x401a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x401a94: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x401a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x401a98: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x401a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x401a9c: 0x1810  mfhi        $v1
    ctx->pc = 0x401a9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x401aa0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x401aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x401aa4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x401aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x401aa8: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x401aa8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x401aac: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x401aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x401ab0: 0x50200032  beql        $at, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x401AB0u;
    {
        const bool branch_taken_0x401ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401ab0) {
            ctx->pc = 0x401AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401AB0u;
            // 0x401ab4: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401B7Cu;
            goto label_401b7c;
        }
    }
    ctx->pc = 0x401AB8u;
    // 0x401ab8: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x401ab8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x401abc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x401ABCu;
    {
        const bool branch_taken_0x401abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401ABCu;
            // 0x401ac0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401abc) {
            ctx->pc = 0x401B18u;
            goto label_401b18;
        }
    }
    ctx->pc = 0x401AC4u;
label_401ac4:
    // 0x401ac4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x401AC4u;
    {
        const bool branch_taken_0x401ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x401ac4) {
            ctx->pc = 0x401AF8u;
            goto label_401af8;
        }
    }
    ctx->pc = 0x401ACCu;
    // 0x401acc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x401accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x401ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ad4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x401ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x401ad8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x401ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x401adc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x401adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x401ae0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x401ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x401ae4: 0x83a700cc  lb          $a3, 0xCC($sp)
    ctx->pc = 0x401ae4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x401ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401aec: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401AECu;
    SET_GPR_U32(ctx, 31, 0x401AF4u);
    ctx->pc = 0x401AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401AECu;
            // 0x401af0: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401AF4u; }
        if (ctx->pc != 0x401AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401AF4u; }
        if (ctx->pc != 0x401AF4u) { return; }
    }
    ctx->pc = 0x401AF4u;
label_401af4:
    // 0x401af4: 0x0  nop
    ctx->pc = 0x401af4u;
    // NOP
label_401af8:
    // 0x401af8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x401af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x401afc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x401afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x401b00: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x401b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x401b04: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x401b04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x401b08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x401b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x401b0c: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401B0Cu;
    {
        const bool branch_taken_0x401b0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x401B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401B0Cu;
            // 0x401b10: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401b0c) {
            ctx->pc = 0x401AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401ac4;
        }
    }
    ctx->pc = 0x401B14u;
    // 0x401b14: 0x0  nop
    ctx->pc = 0x401b14u;
    // NOP
label_401b18:
    // 0x401b18: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x401b18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x401b1c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x401B1Cu;
    {
        const bool branch_taken_0x401b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401B1Cu;
            // 0x401b20: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401b1c) {
            ctx->pc = 0x401C48u;
            goto label_401c48;
        }
    }
    ctx->pc = 0x401B24u;
label_401b24:
    // 0x401b24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x401B24u;
    {
        const bool branch_taken_0x401b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x401b24) {
            ctx->pc = 0x401B58u;
            goto label_401b58;
        }
    }
    ctx->pc = 0x401B2Cu;
    // 0x401b2c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x401b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x401b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401b34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x401b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x401b38: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x401b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x401b3c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x401b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x401b40: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x401b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x401b44: 0x83a700c8  lb          $a3, 0xC8($sp)
    ctx->pc = 0x401b44u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x401b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401b4c: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401B4Cu;
    SET_GPR_U32(ctx, 31, 0x401B54u);
    ctx->pc = 0x401B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401B4Cu;
            // 0x401b50: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401B54u; }
        if (ctx->pc != 0x401B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401B54u; }
        if (ctx->pc != 0x401B54u) { return; }
    }
    ctx->pc = 0x401B54u;
label_401b54:
    // 0x401b54: 0x0  nop
    ctx->pc = 0x401b54u;
    // NOP
label_401b58:
    // 0x401b58: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x401b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x401b5c: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x401b5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x401b60: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x401b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x401b64: 0x2d0182b  sltu        $v1, $s6, $s0
    ctx->pc = 0x401b64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x401b68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x401b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x401b6c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401B6Cu;
    {
        const bool branch_taken_0x401b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x401B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401B6Cu;
            // 0x401b70: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401b6c) {
            ctx->pc = 0x401B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401b24;
        }
    }
    ctx->pc = 0x401B74u;
    // 0x401b74: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x401B74u;
    {
        const bool branch_taken_0x401b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x401b74) {
            ctx->pc = 0x401C48u;
            goto label_401c48;
        }
    }
    ctx->pc = 0x401B7Cu;
label_401b7c:
    // 0x401b7c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x401b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x401b80: 0x3f080  sll         $fp, $v1, 2
    ctx->pc = 0x401b80u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x401b84: 0x21eb023  subu        $s6, $s0, $fp
    ctx->pc = 0x401b84u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x401b88: 0x2d0082b  sltu        $at, $s6, $s0
    ctx->pc = 0x401b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x401b8c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x401B8Cu;
    {
        const bool branch_taken_0x401b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401B8Cu;
            // 0x401b90: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401b8c) {
            ctx->pc = 0x401BE8u;
            goto label_401be8;
        }
    }
    ctx->pc = 0x401B94u;
label_401b94:
    // 0x401b94: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x401B94u;
    {
        const bool branch_taken_0x401b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x401b94) {
            ctx->pc = 0x401BC8u;
            goto label_401bc8;
        }
    }
    ctx->pc = 0x401B9Cu;
    // 0x401b9c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x401b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x401ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ba4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x401ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x401ba8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x401ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x401bac: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x401bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x401bb0: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x401bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x401bb4: 0x83a700c4  lb          $a3, 0xC4($sp)
    ctx->pc = 0x401bb4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x401bb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401bbc: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401BBCu;
    SET_GPR_U32(ctx, 31, 0x401BC4u);
    ctx->pc = 0x401BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401BBCu;
            // 0x401bc0: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401BC4u; }
        if (ctx->pc != 0x401BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401BC4u; }
        if (ctx->pc != 0x401BC4u) { return; }
    }
    ctx->pc = 0x401BC4u;
label_401bc4:
    // 0x401bc4: 0x0  nop
    ctx->pc = 0x401bc4u;
    // NOP
label_401bc8:
    // 0x401bc8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x401bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x401bcc: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x401bccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x401bd0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x401bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x401bd4: 0x2d0182b  sltu        $v1, $s6, $s0
    ctx->pc = 0x401bd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x401bd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x401bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x401bdc: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401BDCu;
    {
        const bool branch_taken_0x401bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x401BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401BDCu;
            // 0x401be0: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401bdc) {
            ctx->pc = 0x401B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401b94;
        }
    }
    ctx->pc = 0x401BE4u;
    // 0x401be4: 0x0  nop
    ctx->pc = 0x401be4u;
    // NOP
label_401be8:
    // 0x401be8: 0x2f32023  subu        $a0, $s7, $s3
    ctx->pc = 0x401be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x401bec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x401becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x401bf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x401bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x401bf4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x401bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x401bf8: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x401bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x401bfc: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x401bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x401c00: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x401C00u;
    {
        const bool branch_taken_0x401c00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x401c00) {
            ctx->pc = 0x401C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401C00u;
            // 0x401c04: 0x2848821  addu        $s1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401C1Cu;
            goto label_401c1c;
        }
    }
    ctx->pc = 0x401C08u;
    // 0x401c08: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x401c08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x401c0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x401C0Cu;
    {
        const bool branch_taken_0x401c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401c0c) {
            ctx->pc = 0x401C18u;
            goto label_401c18;
        }
    }
    ctx->pc = 0x401C14u;
    // 0x401c14: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x401c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_401c18:
    // 0x401c18: 0x2848821  addu        $s1, $s4, $a0
    ctx->pc = 0x401c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_401c1c:
    // 0x401c1c: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x401c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x401c20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x401C20u;
    {
        const bool branch_taken_0x401c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401c20) {
            ctx->pc = 0x401C48u;
            goto label_401c48;
        }
    }
    ctx->pc = 0x401C28u;
    // 0x401c28: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x401c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
label_401c2c:
    // 0x401c2c: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x401c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x401c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401c34: 0xc1007d8  jal         func_401F60
    ctx->pc = 0x401C34u;
    SET_GPR_U32(ctx, 31, 0x401C3Cu);
    ctx->pc = 0x401C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401C34u;
            // 0x401c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401F60u;
    if (runtime->hasFunction(0x401F60u)) {
        auto targetFn = runtime->lookupFunction(0x401F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401C3Cu; }
        if (ctx->pc != 0x401C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401F60_0x401f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401C3Cu; }
        if (ctx->pc != 0x401C3Cu) { return; }
    }
    ctx->pc = 0x401C3Cu;
label_401c3c:
    // 0x401c3c: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x401c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x401c40: 0x5420fffa  bnel        $at, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x401C40u;
    {
        const bool branch_taken_0x401c40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x401c40) {
            ctx->pc = 0x401C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401C40u;
            // 0x401c44: 0x2631fff4  addiu       $s1, $s1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401C2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401c2c;
        }
    }
    ctx->pc = 0x401C48u;
label_401c48:
    // 0x401c48: 0x526000b1  beql        $s3, $zero, . + 4 + (0xB1 << 2)
    ctx->pc = 0x401C48u;
    {
        const bool branch_taken_0x401c48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x401c48) {
            ctx->pc = 0x401C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401C48u;
            // 0x401c4c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401F10u;
            goto label_401f10;
        }
    }
    ctx->pc = 0x401C50u;
label_401c50:
    // 0x401c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401c54: 0xc1007d8  jal         func_401F60
    ctx->pc = 0x401C54u;
    SET_GPR_U32(ctx, 31, 0x401C5Cu);
    ctx->pc = 0x401C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401C54u;
            // 0x401c58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401F60u;
    if (runtime->hasFunction(0x401F60u)) {
        auto targetFn = runtime->lookupFunction(0x401F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401C5Cu; }
        if (ctx->pc != 0x401C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401F60_0x401f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401C5Cu; }
        if (ctx->pc != 0x401C5Cu) { return; }
    }
    ctx->pc = 0x401C5Cu;
label_401c5c:
    // 0x401c5c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x401c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x401c60: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x401c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x401c64: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x401C64u;
    {
        const bool branch_taken_0x401c64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x401c64) {
            ctx->pc = 0x401C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401c50;
        }
    }
    ctx->pc = 0x401C6Cu;
    // 0x401c6c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x401C6Cu;
    {
        const bool branch_taken_0x401c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x401c6c) {
            ctx->pc = 0x401F0Cu;
            goto label_401f0c;
        }
    }
    ctx->pc = 0x401C74u;
label_401c74:
    // 0x401c74: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x401c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x401c78: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x401c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x401c7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x401C7Cu;
    {
        const bool branch_taken_0x401c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x401C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401C7Cu;
            // 0x401c80: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401c7c) {
            ctx->pc = 0x401C8Cu;
            goto label_401c8c;
        }
    }
    ctx->pc = 0x401C84u;
    // 0x401c84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x401C84u;
    {
        const bool branch_taken_0x401c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401C84u;
            // 0x401c88: 0x204082b  sltu        $at, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x401c84) {
            ctx->pc = 0x401C94u;
            goto label_401c94;
        }
    }
    ctx->pc = 0x401C8Cu;
label_401c8c:
    // 0x401c8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x401c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x401c90: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x401c90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_401c94:
    // 0x401c94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x401C94u;
    {
        const bool branch_taken_0x401c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401c94) {
            ctx->pc = 0x401CD8u;
            goto label_401cd8;
        }
    }
    ctx->pc = 0x401C9Cu;
    // 0x401c9c: 0x3c021555  lui         $v0, 0x1555
    ctx->pc = 0x401c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5461 << 16));
    // 0x401ca0: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x401ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x401ca4: 0x3c010aaa  lui         $at, 0xAAA
    ctx->pc = 0x401ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
label_401ca8:
    // 0x401ca8: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x401ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x401cac: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x401cacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x401cb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x401CB0u;
    {
        const bool branch_taken_0x401cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401cb0) {
            ctx->pc = 0x401CC0u;
            goto label_401cc0;
        }
    }
    ctx->pc = 0x401CB8u;
    // 0x401cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x401CB8u;
    {
        const bool branch_taken_0x401cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401CB8u;
            // 0x401cbc: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401cb8) {
            ctx->pc = 0x401CC8u;
            goto label_401cc8;
        }
    }
    ctx->pc = 0x401CC0u;
label_401cc0:
    // 0x401cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x401cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401cc4: 0x0  nop
    ctx->pc = 0x401cc4u;
    // NOP
label_401cc8:
    // 0x401cc8: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x401cc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x401ccc: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x401CCCu;
    {
        const bool branch_taken_0x401ccc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x401ccc) {
            ctx->pc = 0x401CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401CCCu;
            // 0x401cd0: 0x3c010aaa  lui         $at, 0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401ca8;
        }
    }
    ctx->pc = 0x401CD4u;
    // 0x401cd4: 0x0  nop
    ctx->pc = 0x401cd4u;
    // NOP
label_401cd8:
    // 0x401cd8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x401cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x401cdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x401cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x401ce0: 0xc040180  jal         func_100600
    ctx->pc = 0x401CE0u;
    SET_GPR_U32(ctx, 31, 0x401CE8u);
    ctx->pc = 0x401CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401CE0u;
            // 0x401ce4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401CE8u; }
        if (ctx->pc != 0x401CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401CE8u; }
        if (ctx->pc != 0x401CE8u) { return; }
    }
    ctx->pc = 0x401CE8u;
label_401ce8:
    // 0x401ce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x401ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401cec: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x401CECu;
    {
        const bool branch_taken_0x401cec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x401cec) {
            ctx->pc = 0x401CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401CECu;
            // 0x401cf0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401D18u;
            goto label_401d18;
        }
    }
    ctx->pc = 0x401CF4u;
    // 0x401cf4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x401cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x401cf8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x401cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x401cfc: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x401cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x401d00: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x401d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401d04: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401D04u;
    SET_GPR_U32(ctx, 31, 0x401D0Cu);
    ctx->pc = 0x401D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401D04u;
            // 0x401d08: 0x24a5b940  addiu       $a1, $a1, -0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401D0Cu; }
        if (ctx->pc != 0x401D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401D0Cu; }
        if (ctx->pc != 0x401D0Cu) { return; }
    }
    ctx->pc = 0x401D0Cu;
label_401d0c:
    // 0x401d0c: 0xc04981a  jal         func_126068
    ctx->pc = 0x401D0Cu;
    SET_GPR_U32(ctx, 31, 0x401D14u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401D14u; }
        if (ctx->pc != 0x401D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401D14u; }
        if (ctx->pc != 0x401D14u) { return; }
    }
    ctx->pc = 0x401D14u;
label_401d14:
    // 0x401d14: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x401d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_401d18:
    // 0x401d18: 0xafb000a8  sw          $s0, 0xA8($sp)
    ctx->pc = 0x401d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
    // 0x401d1c: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x401d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x401d20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x401d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x401d24: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x401d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x401d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x401d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x401d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x401d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x401d30: 0x214082b  sltu        $at, $s0, $s4
    ctx->pc = 0x401d30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x401d34: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x401D34u;
    {
        const bool branch_taken_0x401d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401D34u;
            // 0x401d38: 0x203b021  addu        $s6, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d34) {
            ctx->pc = 0x401D90u;
            goto label_401d90;
        }
    }
    ctx->pc = 0x401D3Cu;
label_401d3c:
    // 0x401d3c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x401D3Cu;
    {
        const bool branch_taken_0x401d3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x401d3c) {
            ctx->pc = 0x401D70u;
            goto label_401d70;
        }
    }
    ctx->pc = 0x401D44u;
    // 0x401d44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x401d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x401d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401d4c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x401d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x401d50: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x401d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x401d54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x401d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x401d58: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x401d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x401d5c: 0x83a700c0  lb          $a3, 0xC0($sp)
    ctx->pc = 0x401d5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x401d60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401d64: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401D64u;
    SET_GPR_U32(ctx, 31, 0x401D6Cu);
    ctx->pc = 0x401D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401D64u;
            // 0x401d68: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401D6Cu; }
        if (ctx->pc != 0x401D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401D6Cu; }
        if (ctx->pc != 0x401D6Cu) { return; }
    }
    ctx->pc = 0x401D6Cu;
label_401d6c:
    // 0x401d6c: 0x0  nop
    ctx->pc = 0x401d6cu;
    // NOP
label_401d70:
    // 0x401d70: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x401d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x401d74: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x401d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x401d78: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x401d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x401d7c: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x401d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x401d80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x401d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x401d84: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401D84u;
    {
        const bool branch_taken_0x401d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x401D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401D84u;
            // 0x401d88: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d84) {
            ctx->pc = 0x401D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401d3c;
        }
    }
    ctx->pc = 0x401D8Cu;
    // 0x401d8c: 0x0  nop
    ctx->pc = 0x401d8cu;
    // NOP
label_401d90:
    // 0x401d90: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x401D90u;
    {
        const bool branch_taken_0x401d90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x401d90) {
            ctx->pc = 0x401DE0u;
            goto label_401de0;
        }
    }
    ctx->pc = 0x401D98u;
label_401d98:
    // 0x401d98: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x401D98u;
    {
        const bool branch_taken_0x401d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x401d98) {
            ctx->pc = 0x401DC8u;
            goto label_401dc8;
        }
    }
    ctx->pc = 0x401DA0u;
    // 0x401da0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x401da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x401da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401da8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x401da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x401dac: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x401dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x401db0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x401db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x401db4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x401db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x401db8: 0x83a700bc  lb          $a3, 0xBC($sp)
    ctx->pc = 0x401db8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x401dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401dc0: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401DC0u;
    SET_GPR_U32(ctx, 31, 0x401DC8u);
    ctx->pc = 0x401DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401DC0u;
            // 0x401dc4: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401DC8u; }
        if (ctx->pc != 0x401DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401DC8u; }
        if (ctx->pc != 0x401DC8u) { return; }
    }
    ctx->pc = 0x401DC8u;
label_401dc8:
    // 0x401dc8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x401dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x401dcc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x401dccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x401dd0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x401dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x401dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x401dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x401dd8: 0x1660ffef  bnez        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x401DD8u;
    {
        const bool branch_taken_0x401dd8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x401DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401DD8u;
            // 0x401ddc: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401dd8) {
            ctx->pc = 0x401D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401d98;
        }
    }
    ctx->pc = 0x401DE0u;
label_401de0:
    // 0x401de0: 0x216082b  sltu        $at, $s0, $s6
    ctx->pc = 0x401de0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x401de4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x401DE4u;
    {
        const bool branch_taken_0x401de4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401de4) {
            ctx->pc = 0x401E40u;
            goto label_401e40;
        }
    }
    ctx->pc = 0x401DECu;
label_401dec:
    // 0x401dec: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x401DECu;
    {
        const bool branch_taken_0x401dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x401dec) {
            ctx->pc = 0x401E20u;
            goto label_401e20;
        }
    }
    ctx->pc = 0x401DF4u;
    // 0x401df4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x401df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x401df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401dfc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x401dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x401e00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x401e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x401e04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x401e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x401e08: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x401e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x401e0c: 0x83a700b8  lb          $a3, 0xB8($sp)
    ctx->pc = 0x401e0cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x401e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401e14: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401E14u;
    SET_GPR_U32(ctx, 31, 0x401E1Cu);
    ctx->pc = 0x401E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401E14u;
            // 0x401e18: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401E1Cu; }
        if (ctx->pc != 0x401E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401E1Cu; }
        if (ctx->pc != 0x401E1Cu) { return; }
    }
    ctx->pc = 0x401E1Cu;
label_401e1c:
    // 0x401e1c: 0x0  nop
    ctx->pc = 0x401e1cu;
    // NOP
label_401e20:
    // 0x401e20: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x401e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x401e24: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x401e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x401e28: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x401e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x401e2c: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x401e2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x401e30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x401e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x401e34: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401E34u;
    {
        const bool branch_taken_0x401e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x401E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401E34u;
            // 0x401e38: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401e34) {
            ctx->pc = 0x401DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401dec;
        }
    }
    ctx->pc = 0x401E3Cu;
    // 0x401e3c: 0x0  nop
    ctx->pc = 0x401e3cu;
    // NOP
label_401e40:
    // 0x401e40: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x401e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x401e44: 0x5075000e  beql        $v1, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x401E44u;
    {
        const bool branch_taken_0x401e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x401e44) {
            ctx->pc = 0x401E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401E44u;
            // 0x401e48: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401E80u;
            goto label_401e80;
        }
    }
    ctx->pc = 0x401E4Cu;
    // 0x401e4c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x401e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x401e50: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x401e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x401e54: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x401e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x401e58: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x401e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x401e5c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x401e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x401e60: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x401e60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x401e64: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x401e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x401e68: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x401e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x401e6c: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x401e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    // 0x401e70: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x401e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x401e74: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x401e74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    // 0x401e78: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x401e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x401e7c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x401e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_401e80:
    // 0x401e80: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x401e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x401e84: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x401e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x401e88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x401e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x401e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x401e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x401e90: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x401e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x401e94: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x401e94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x401e98: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x401E98u;
    {
        const bool branch_taken_0x401e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x401e98) {
            ctx->pc = 0x401EF8u;
            goto label_401ef8;
        }
    }
    ctx->pc = 0x401EA0u;
    // 0x401ea0: 0x2652fff4  addiu       $s2, $s2, -0xC
    ctx->pc = 0x401ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
label_401ea4:
    // 0x401ea4: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x401EA4u;
    {
        const bool branch_taken_0x401ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x401ea4) {
            ctx->pc = 0x401EE8u;
            goto label_401ee8;
        }
    }
    ctx->pc = 0x401EACu;
    // 0x401eac: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x401EACu;
    {
        const bool branch_taken_0x401eac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x401eac) {
            ctx->pc = 0x401EE8u;
            goto label_401ee8;
        }
    }
    ctx->pc = 0x401EB4u;
    // 0x401eb4: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x401EB4u;
    {
        const bool branch_taken_0x401eb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x401eb4) {
            ctx->pc = 0x401EE8u;
            goto label_401ee8;
        }
    }
    ctx->pc = 0x401EBCu;
    // 0x401ebc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x401ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x401ec0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x401EC0u;
    {
        const bool branch_taken_0x401ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x401ec0) {
            ctx->pc = 0x401EE8u;
            goto label_401ee8;
        }
    }
    ctx->pc = 0x401EC8u;
    // 0x401ec8: 0xc1007d4  jal         func_401F50
    ctx->pc = 0x401EC8u;
    SET_GPR_U32(ctx, 31, 0x401ED0u);
    ctx->pc = 0x401ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401EC8u;
            // 0x401ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401F50u;
    if (runtime->hasFunction(0x401F50u)) {
        auto targetFn = runtime->lookupFunction(0x401F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401ED0u; }
        if (ctx->pc != 0x401ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401F50_0x401f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401ED0u; }
        if (ctx->pc != 0x401ED0u) { return; }
    }
    ctx->pc = 0x401ED0u;
label_401ed0:
    // 0x401ed0: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x401ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x401ed4: 0xc1007d0  jal         func_401F40
    ctx->pc = 0x401ED4u;
    SET_GPR_U32(ctx, 31, 0x401EDCu);
    ctx->pc = 0x401ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401ED4u;
            // 0x401ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401F40u;
    if (runtime->hasFunction(0x401F40u)) {
        auto targetFn = runtime->lookupFunction(0x401F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401EDCu; }
        if (ctx->pc != 0x401EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401F40_0x401f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401EDCu; }
        if (ctx->pc != 0x401EDCu) { return; }
    }
    ctx->pc = 0x401EDCu;
label_401edc:
    // 0x401edc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x401EDCu;
    SET_GPR_U32(ctx, 31, 0x401EE4u);
    ctx->pc = 0x401EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401EDCu;
            // 0x401ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401EE4u; }
        if (ctx->pc != 0x401EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401EE4u; }
        if (ctx->pc != 0x401EE4u) { return; }
    }
    ctx->pc = 0x401EE4u;
label_401ee4:
    // 0x401ee4: 0x0  nop
    ctx->pc = 0x401ee4u;
    // NOP
label_401ee8:
    // 0x401ee8: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x401ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x401eec: 0x5420ffed  bnel        $at, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401EECu;
    {
        const bool branch_taken_0x401eec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x401eec) {
            ctx->pc = 0x401EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401EECu;
            // 0x401ef0: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401ea4;
        }
    }
    ctx->pc = 0x401EF4u;
    // 0x401ef4: 0x0  nop
    ctx->pc = 0x401ef4u;
    // NOP
label_401ef8:
    // 0x401ef8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x401ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x401efc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x401EFCu;
    {
        const bool branch_taken_0x401efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x401F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401EFCu;
            // 0x401f00: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401efc) {
            ctx->pc = 0x401F0Cu;
            goto label_401f0c;
        }
    }
    ctx->pc = 0x401F04u;
    // 0x401f04: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x401F04u;
    SET_GPR_U32(ctx, 31, 0x401F0Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401F0Cu; }
        if (ctx->pc != 0x401F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401F0Cu; }
        if (ctx->pc != 0x401F0Cu) { return; }
    }
    ctx->pc = 0x401F0Cu;
label_401f0c:
    // 0x401f0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x401f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_401f10:
    // 0x401f10: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x401f10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x401f14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x401f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x401f18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x401f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x401f1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x401f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x401f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x401f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x401f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x401f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x401f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x401f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x401f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x401f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x401f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x401f34: 0x3e00008  jr          $ra
    ctx->pc = 0x401F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401F34u;
            // 0x401f38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401F3Cu;
    // 0x401f3c: 0x0  nop
    ctx->pc = 0x401f3cu;
    // NOP
}
