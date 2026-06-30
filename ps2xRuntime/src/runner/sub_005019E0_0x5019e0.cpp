#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005019E0
// Address: 0x5019e0 - 0x501ec0
void sub_005019E0_0x5019e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005019E0_0x5019e0");
#endif

    switch (ctx->pc) {
        case 0x501a08u: goto label_501a08;
        case 0x501a60u: goto label_501a60;
        case 0x501b4cu: goto label_501b4c;
        case 0x501b78u: goto label_501b78;
        case 0x501b98u: goto label_501b98;
        case 0x501c10u: goto label_501c10;
        case 0x501c20u: goto label_501c20;
        case 0x501c48u: goto label_501c48;
        case 0x501ce8u: goto label_501ce8;
        case 0x501d70u: goto label_501d70;
        case 0x501d80u: goto label_501d80;
        case 0x501da8u: goto label_501da8;
        case 0x501e60u: goto label_501e60;
        case 0x501e8cu: goto label_501e8c;
        default: break;
    }

    ctx->pc = 0x5019e0u;

label_5019e0:
    // 0x5019e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x5019e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x5019e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5019e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x5019e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5019e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x5019ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5019ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x5019f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5019f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x5019f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5019f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5019f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x5019f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5019fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5019fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x501a00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x501a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x501a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_501a08:
    // 0x501a08: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x501a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501a0c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x501a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501a10: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501a10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501a14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501a14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501a18: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x501a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x501a1c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x501A1Cu;
    {
        const bool branch_taken_0x501a1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x501A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501A1Cu;
            // 0x501a20: 0x34083  sra         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501a1c) {
            ctx->pc = 0x501A2Cu;
            goto label_501a2c;
        }
    }
    ctx->pc = 0x501A24u;
    // 0x501a24: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x501a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x501a28: 0x34083  sra         $t0, $v1, 2
    ctx->pc = 0x501a28u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 2));
label_501a2c:
    // 0x501a2c: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x501a2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x501a30: 0x14200119  bnez        $at, . + 4 + (0x119 << 2)
    ctx->pc = 0x501A30u;
    {
        const bool branch_taken_0x501a30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x501a30) {
            ctx->pc = 0x501E98u;
            goto label_501e98;
        }
    }
    ctx->pc = 0x501A38u;
    // 0x501a38: 0x29010015  slti        $at, $t0, 0x15
    ctx->pc = 0x501a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x501a3c: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x501A3Cu;
    {
        const bool branch_taken_0x501a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501a3c) {
            ctx->pc = 0x501A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x501A3Cu;
            // 0x501a40: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x501A68u;
            goto label_501a68;
        }
    }
    ctx->pc = 0x501A44u;
    // 0x501a44: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x501a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501a48: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x501a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501a4c: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x501a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x501a50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501a50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501a54: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501a54u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501a58: 0xc140888  jal         func_502220
    ctx->pc = 0x501A58u;
    SET_GPR_U32(ctx, 31, 0x501A60u);
    ctx->pc = 0x501A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501A58u;
            // 0x501a5c: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502220u;
    if (runtime->hasFunction(0x502220u)) {
        auto targetFn = runtime->lookupFunction(0x502220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501A60u; }
        if (ctx->pc != 0x501A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502220_0x502220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501A60u; }
        if (ctx->pc != 0x501A60u) { return; }
    }
    ctx->pc = 0x501A60u;
label_501a60:
    // 0x501a60: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x501A60u;
    {
        const bool branch_taken_0x501a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501a60) {
            ctx->pc = 0x501E98u;
            goto label_501e98;
        }
    }
    ctx->pc = 0x501A68u;
label_501a68:
    // 0x501a68: 0x83083  sra         $a2, $t0, 2
    ctx->pc = 0x501a68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 2));
    // 0x501a6c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x501A6Cu;
    {
        const bool branch_taken_0x501a6c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x501A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501A6Cu;
            // 0x501a70: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501a6c) {
            ctx->pc = 0x501A7Cu;
            goto label_501a7c;
        }
    }
    ctx->pc = 0x501A74u;
    // 0x501a74: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x501a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x501a78: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x501a78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_501a7c:
    // 0x501a7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x501a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x501a80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x501a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x501a84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501a84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501a88: 0x8c44cc80  lw          $a0, -0x3380($v0)
    ctx->pc = 0x501a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954112)));
    // 0x501a8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x501a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x501a90: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x501a90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501a94: 0x2810  mfhi        $a1
    ctx->pc = 0x501a94u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x501a98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x501a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x501a9c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x501a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x501aa0: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x501aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x501aa4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x501aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x501aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x501AA8u;
    {
        const bool branch_taken_0x501aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x501AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501AA8u;
            // 0x501aac: 0x653821  addu        $a3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501aa8) {
            ctx->pc = 0x501AB8u;
            goto label_501ab8;
        }
    }
    ctx->pc = 0x501AB0u;
    // 0x501ab0: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x501ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x501ab4: 0x0  nop
    ctx->pc = 0x501ab4u;
    // NOP
label_501ab8:
    // 0x501ab8: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x501ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x501abc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x501abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501ac0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x501ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x501ac4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501ac8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x501AC8u;
    {
        const bool branch_taken_0x501ac8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x501ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501AC8u;
            // 0x501acc: 0x33083  sra         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501ac8) {
            ctx->pc = 0x501AD8u;
            goto label_501ad8;
        }
    }
    ctx->pc = 0x501AD0u;
    // 0x501ad0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x501ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x501ad4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x501ad4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_501ad8:
    // 0x501ad8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x501ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x501adc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x501adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x501ae0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501ae0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501ae4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x501ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x501ae8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x501ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x501aec: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x501aecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501af0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501af0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501af4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x501af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x501af8: 0xac43cc80  sw          $v1, -0x3380($v0)
    ctx->pc = 0x501af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954112), GPR_U32(ctx, 3));
    // 0x501afc: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x501afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x501b00: 0x1810  mfhi        $v1
    ctx->pc = 0x501b00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x501b04: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x501b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x501b08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x501b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x501b0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x501B0Cu;
    {
        const bool branch_taken_0x501b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x501B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501B0Cu;
            // 0x501b10: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501b0c) {
            ctx->pc = 0x501B20u;
            goto label_501b20;
        }
    }
    ctx->pc = 0x501B14u;
    // 0x501b14: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x501b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x501b18: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x501b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x501b1c: 0xac44cc80  sw          $a0, -0x3380($v0)
    ctx->pc = 0x501b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954112), GPR_U32(ctx, 4));
label_501b20:
    // 0x501b20: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x501b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501b24: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x501b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x501b28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501b28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501b2c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x501b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x501b30: 0x2454fffc  addiu       $s4, $v0, -0x4
    ctx->pc = 0x501b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x501b34: 0x123e3c  dsll32      $a3, $s2, 24
    ctx->pc = 0x501b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 24));
    // 0x501b38: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501b38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501b3c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501b3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501b40: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x501b40u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x501b44: 0xc140850  jal         func_502140
    ctx->pc = 0x501B44u;
    SET_GPR_U32(ctx, 31, 0x501B4Cu);
    ctx->pc = 0x501B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501B44u;
            // 0x501b48: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502140u;
    if (runtime->hasFunction(0x502140u)) {
        auto targetFn = runtime->lookupFunction(0x502140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501B4Cu; }
        if (ctx->pc != 0x501B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502140_0x502140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501B4Cu; }
        if (ctx->pc != 0x501B4Cu) { return; }
    }
    ctx->pc = 0x501B4Cu;
label_501b4c:
    // 0x501b4c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x501b4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501b50: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x501b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501b54: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x501b54u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x501b58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501b58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501b5c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x501b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x501b60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x501b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x501b64: 0x80a701c0  lb          $a3, 0x1C0($a1)
    ctx->pc = 0x501b64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x501b68: 0x808601c0  lb          $a2, 0x1C0($a0)
    ctx->pc = 0x501b68u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x501b6c: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x501b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x501b70: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x501B70u;
    {
        const bool branch_taken_0x501b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501b70) {
            ctx->pc = 0x501B98u;
            goto label_501b98;
        }
    }
    ctx->pc = 0x501B78u;
label_501b78:
    // 0x501b78: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501b7c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501b7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501b80: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x501b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x501b84: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x501b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x501b88: 0x808601c0  lb          $a2, 0x1C0($a0)
    ctx->pc = 0x501b88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x501b8c: 0xc7302a  slt         $a2, $a2, $a3
    ctx->pc = 0x501b8cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x501b90: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x501B90u;
    {
        const bool branch_taken_0x501b90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x501b90) {
            ctx->pc = 0x501B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501b78;
        }
    }
    ctx->pc = 0x501B98u;
label_501b98:
    // 0x501b98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x501b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x501b9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501b9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501ba0: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x501ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501ba4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x501ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x501ba8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x501ba8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x501bac: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x501bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x501bb0: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x501bb0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x501bb4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x501bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x501bb8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x501BB8u;
    {
        const bool branch_taken_0x501bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x501bb8) {
            ctx->pc = 0x501BD8u;
            goto label_501bd8;
        }
    }
    ctx->pc = 0x501BC0u;
    // 0x501bc0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x501bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x501bc4: 0x80c601c0  lb          $a2, 0x1C0($a2)
    ctx->pc = 0x501bc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x501bc8: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x501bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x501bcc: 0x1020fff2  beqz        $at, . + 4 + (-0xE << 2)
    ctx->pc = 0x501BCCu;
    {
        const bool branch_taken_0x501bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501bcc) {
            ctx->pc = 0x501B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501b98;
        }
    }
    ctx->pc = 0x501BD4u;
    // 0x501bd4: 0x0  nop
    ctx->pc = 0x501bd4u;
    // NOP
label_501bd8:
    // 0x501bd8: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x501bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501bdc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x501bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x501be0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x501be0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x501be4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x501be4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x501be8: 0xe6082b  sltu        $at, $a3, $a2
    ctx->pc = 0x501be8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x501bec: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x501BECu;
    {
        const bool branch_taken_0x501bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501bec) {
            ctx->pc = 0x501C90u;
            goto label_501c90;
        }
    }
    ctx->pc = 0x501BF4u;
    // 0x501bf4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x501bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x501bf8: 0x14483c  dsll32      $t1, $s4, 0
    ctx->pc = 0x501bf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501bfc: 0x24f30004  addiu       $s3, $a3, 0x4
    ctx->pc = 0x501bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x501c00: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x501c00u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x501c04: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x501c04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x501c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x501C08u;
    {
        const bool branch_taken_0x501c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501C08u;
            // 0x501c0c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501c08) {
            ctx->pc = 0x501C20u;
            goto label_501c20;
        }
    }
    ctx->pc = 0x501C10u;
label_501c10:
    // 0x501c10: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501c14: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501c14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501c18: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x501c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x501c1c: 0x0  nop
    ctx->pc = 0x501c1cu;
    // NOP
label_501c20:
    // 0x501c20: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501c24: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501c24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501c28: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x501c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x501c2c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x501c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x501c30: 0x80a701c0  lb          $a3, 0x1C0($a1)
    ctx->pc = 0x501c30u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x501c34: 0x808601c0  lb          $a2, 0x1C0($a0)
    ctx->pc = 0x501c34u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x501c38: 0xc7302a  slt         $a2, $a2, $a3
    ctx->pc = 0x501c38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x501c3c: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x501C3Cu;
    {
        const bool branch_taken_0x501c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x501c3c) {
            ctx->pc = 0x501C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501c10;
        }
    }
    ctx->pc = 0x501C44u;
    // 0x501c44: 0x0  nop
    ctx->pc = 0x501c44u;
    // NOP
label_501c48:
    // 0x501c48: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x501c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x501c4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x501c4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x501c50: 0x8cc8fffc  lw          $t0, -0x4($a2)
    ctx->pc = 0x501c50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x501c54: 0x24c3fffc  addiu       $v1, $a2, -0x4
    ctx->pc = 0x501c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x501c58: 0x810601c0  lb          $a2, 0x1C0($t0)
    ctx->pc = 0x501c58u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 448)));
    // 0x501c5c: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x501c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x501c60: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x501C60u;
    {
        const bool branch_taken_0x501c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501c60) {
            ctx->pc = 0x501C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501c48;
        }
    }
    ctx->pc = 0x501C68u;
    // 0x501c68: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x501c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501c6c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x501c6cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x501c70: 0xe3302b  sltu        $a2, $a3, $v1
    ctx->pc = 0x501c70u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x501c74: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x501c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x501c78: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x501C78u;
    {
        const bool branch_taken_0x501c78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x501c78) {
            ctx->pc = 0x501C90u;
            goto label_501c90;
        }
    }
    ctx->pc = 0x501C80u;
    // 0x501c80: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x501c80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x501c84: 0x24f30004  addiu       $s3, $a3, 0x4
    ctx->pc = 0x501c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x501c88: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x501C88u;
    {
        const bool branch_taken_0x501c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501C88u;
            // 0x501c8c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501c88) {
            ctx->pc = 0x501C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501c20;
        }
    }
    ctx->pc = 0x501C90u;
label_501c90:
    // 0x501c90: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x501c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501c94: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x501c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501c98: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x501c98u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x501c9c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x501c9cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x501ca0: 0x14e60057  bne         $a3, $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x501CA0u;
    {
        const bool branch_taken_0x501ca0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x501ca0) {
            ctx->pc = 0x501E00u;
            goto label_501e00;
        }
    }
    ctx->pc = 0x501CA8u;
    // 0x501ca8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x501ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501cac: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x501cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x501cb0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501cb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501cb4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x501cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501cb8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x501cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x501cbc: 0x24f30004  addiu       $s3, $a3, 0x4
    ctx->pc = 0x501cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x501cc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x501cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x501cc4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501cc4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501cc8: 0x8ca7fffc  lw          $a3, -0x4($a1)
    ctx->pc = 0x501cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x501ccc: 0x806401c0  lb          $a0, 0x1C0($v1)
    ctx->pc = 0x501cccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x501cd0: 0x80e301c0  lb          $v1, 0x1C0($a3)
    ctx->pc = 0x501cd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 448)));
    // 0x501cd4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x501cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x501cd8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x501CD8u;
    {
        const bool branch_taken_0x501cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x501CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501CD8u;
            // 0x501cdc: 0x24a6fffc  addiu       $a2, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501cd8) {
            ctx->pc = 0x501D48u;
            goto label_501d48;
        }
    }
    ctx->pc = 0x501CE0u;
    // 0x501ce0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x501CE0u;
    {
        const bool branch_taken_0x501ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501ce0) {
            ctx->pc = 0x501CF8u;
            goto label_501cf8;
        }
    }
    ctx->pc = 0x501CE8u;
label_501ce8:
    // 0x501ce8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x501ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501cec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501cecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501cf0: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x501cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x501cf4: 0x0  nop
    ctx->pc = 0x501cf4u;
    // NOP
label_501cf8:
    // 0x501cf8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x501cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501cfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501d00: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x501D00u;
    {
        const bool branch_taken_0x501d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x501d00) {
            ctx->pc = 0x501D20u;
            goto label_501d20;
        }
    }
    ctx->pc = 0x501D08u;
    // 0x501d08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x501d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x501d0c: 0x806301c0  lb          $v1, 0x1C0($v1)
    ctx->pc = 0x501d0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x501d10: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x501d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x501d14: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x501D14u;
    {
        const bool branch_taken_0x501d14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501d14) {
            ctx->pc = 0x501CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501ce8;
        }
    }
    ctx->pc = 0x501D1Cu;
    // 0x501d1c: 0x0  nop
    ctx->pc = 0x501d1cu;
    // NOP
label_501d20:
    // 0x501d20: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x501d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501d24: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x501d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x501d28: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501d28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501d2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501d2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501d30: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x501d30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x501d34: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x501D34u;
    {
        const bool branch_taken_0x501d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501d34) {
            ctx->pc = 0x501D48u;
            goto label_501d48;
        }
    }
    ctx->pc = 0x501D3Cu;
    // 0x501d3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x501d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x501d40: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x501d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x501d44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x501d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_501d48:
    // 0x501d48: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501d4c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x501d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x501d50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501d50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501d54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501d58: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x501d58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x501d5c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x501D5Cu;
    {
        const bool branch_taken_0x501d5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501d5c) {
            ctx->pc = 0x501DF0u;
            goto label_501df0;
        }
    }
    ctx->pc = 0x501D64u;
    // 0x501d64: 0x10383c  dsll32      $a3, $s0, 0
    ctx->pc = 0x501d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501d68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x501D68u;
    {
        const bool branch_taken_0x501d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501D68u;
            // 0x501d6c: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501d68) {
            ctx->pc = 0x501D80u;
            goto label_501d80;
        }
    }
    ctx->pc = 0x501D70u;
label_501d70:
    // 0x501d70: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x501d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501d74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501d78: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x501d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x501d7c: 0x0  nop
    ctx->pc = 0x501d7cu;
    // NOP
label_501d80:
    // 0x501d80: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x501d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501d84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501d84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501d88: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x501d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x501d8c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x501d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x501d90: 0x808401c0  lb          $a0, 0x1C0($a0)
    ctx->pc = 0x501d90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x501d94: 0x810301c0  lb          $v1, 0x1C0($t0)
    ctx->pc = 0x501d94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 448)));
    // 0x501d98: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x501d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x501d9c: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x501D9Cu;
    {
        const bool branch_taken_0x501d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501d9c) {
            ctx->pc = 0x501D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501d70;
        }
    }
    ctx->pc = 0x501DA4u;
    // 0x501da4: 0x0  nop
    ctx->pc = 0x501da4u;
    // NOP
label_501da8:
    // 0x501da8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x501da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x501dac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501dacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501db0: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x501db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x501db4: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x501db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x501db8: 0x80a301c0  lb          $v1, 0x1C0($a1)
    ctx->pc = 0x501db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x501dbc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x501dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x501dc0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x501DC0u;
    {
        const bool branch_taken_0x501dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x501dc0) {
            ctx->pc = 0x501DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501da8;
        }
    }
    ctx->pc = 0x501DC8u;
    // 0x501dc8: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501dcc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501dccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501dd0: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x501dd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x501dd4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x501dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x501dd8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x501DD8u;
    {
        const bool branch_taken_0x501dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x501dd8) {
            ctx->pc = 0x501DF0u;
            goto label_501df0;
        }
    }
    ctx->pc = 0x501DE0u;
    // 0x501de0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x501de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x501de4: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x501de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x501de8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x501DE8u;
    {
        const bool branch_taken_0x501de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501DE8u;
            // 0x501dec: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501de8) {
            ctx->pc = 0x501D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501d80;
        }
    }
    ctx->pc = 0x501DF0u;
label_501df0:
    // 0x501df0: 0x13803c  dsll32      $s0, $s3, 0
    ctx->pc = 0x501df0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501df4: 0x1000ff04  b           . + 4 + (-0xFC << 2)
    ctx->pc = 0x501DF4u;
    {
        const bool branch_taken_0x501df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501DF4u;
            // 0x501df8: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501df4) {
            ctx->pc = 0x501A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501a08;
        }
    }
    ctx->pc = 0x501DFCu;
    // 0x501dfc: 0x0  nop
    ctx->pc = 0x501dfcu;
    // NOP
label_501e00:
    // 0x501e00: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x501e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x501e04: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x501E04u;
    {
        const bool branch_taken_0x501e04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x501E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501E04u;
            // 0x501e08: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501e04) {
            ctx->pc = 0x501E14u;
            goto label_501e14;
        }
    }
    ctx->pc = 0x501E0Cu;
    // 0x501e0c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x501e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x501e10: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x501e10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_501e14:
    // 0x501e14: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x501e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501e18: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x501e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501e1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501e24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x501e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x501e28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x501E28u;
    {
        const bool branch_taken_0x501e28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x501E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501E28u;
            // 0x501e2c: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501e28) {
            ctx->pc = 0x501E38u;
            goto label_501e38;
        }
    }
    ctx->pc = 0x501E30u;
    // 0x501e30: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x501e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x501e34: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x501e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_501e38:
    // 0x501e38: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x501e38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x501e3c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x501E3Cu;
    {
        const bool branch_taken_0x501e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501e3c) {
            ctx->pc = 0x501E70u;
            goto label_501e70;
        }
    }
    ctx->pc = 0x501E44u;
    // 0x501e44: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x501e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501e48: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x501e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501e4c: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x501e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x501e50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501e50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501e54: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501e54u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501e58: 0xc140678  jal         func_5019E0
    ctx->pc = 0x501E58u;
    SET_GPR_U32(ctx, 31, 0x501E60u);
    ctx->pc = 0x501E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501E58u;
            // 0x501e5c: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5019E0u;
    goto label_5019e0;
    ctx->pc = 0x501E60u;
label_501e60:
    // 0x501e60: 0x13803c  dsll32      $s0, $s3, 0
    ctx->pc = 0x501e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501e64: 0x1000fee8  b           . + 4 + (-0x118 << 2)
    ctx->pc = 0x501E64u;
    {
        const bool branch_taken_0x501e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501E64u;
            // 0x501e68: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501e64) {
            ctx->pc = 0x501A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501a08;
        }
    }
    ctx->pc = 0x501E6Cu;
    // 0x501e6c: 0x0  nop
    ctx->pc = 0x501e6cu;
    // NOP
label_501e70:
    // 0x501e70: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x501e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501e74: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501e78: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x501e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x501e7c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501e7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501e80: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501e80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501e84: 0xc140678  jal         func_5019E0
    ctx->pc = 0x501E84u;
    SET_GPR_U32(ctx, 31, 0x501E8Cu);
    ctx->pc = 0x501E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501E84u;
            // 0x501e88: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5019E0u;
    goto label_5019e0;
    ctx->pc = 0x501E8Cu;
label_501e8c:
    // 0x501e8c: 0x13883c  dsll32      $s1, $s3, 0
    ctx->pc = 0x501e8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501e90: 0x1000fedd  b           . + 4 + (-0x123 << 2)
    ctx->pc = 0x501E90u;
    {
        const bool branch_taken_0x501e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501E90u;
            // 0x501e94: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501e90) {
            ctx->pc = 0x501A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501a08;
        }
    }
    ctx->pc = 0x501E98u;
label_501e98:
    // 0x501e98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x501e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x501e9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x501e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x501ea0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x501ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x501ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x501ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x501ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x501ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x501eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x501eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x501EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501EB0u;
            // 0x501eb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x501EB8u;
    // 0x501eb8: 0x0  nop
    ctx->pc = 0x501eb8u;
    // NOP
    // 0x501ebc: 0x0  nop
    ctx->pc = 0x501ebcu;
    // NOP
}
