#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCC40
// Address: 0x2dcc40 - 0x2dcf40
void sub_002DCC40_0x2dcc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCC40_0x2dcc40");
#endif

    switch (ctx->pc) {
        case 0x2dcc78u: goto label_2dcc78;
        case 0x2dccc8u: goto label_2dccc8;
        case 0x2dcce0u: goto label_2dcce0;
        case 0x2dcd38u: goto label_2dcd38;
        case 0x2dcdb8u: goto label_2dcdb8;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dce08u: goto label_2dce08;
        case 0x2dce14u: goto label_2dce14;
        case 0x2dce3cu: goto label_2dce3c;
        case 0x2dce58u: goto label_2dce58;
        case 0x2dce64u: goto label_2dce64;
        case 0x2dce80u: goto label_2dce80;
        case 0x2dce9cu: goto label_2dce9c;
        case 0x2dcf10u: goto label_2dcf10;
        case 0x2dcf28u: goto label_2dcf28;
        default: break;
    }

    ctx->pc = 0x2dcc40u;

    // 0x2dcc40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dcc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dcc44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2dcc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2dcc48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dcc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2dcc4c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2dcc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dcc50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dcc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dcc54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2dcc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dcc58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dcc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dcc5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dcc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dcc60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dcc60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dcc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcc6c: 0x344586a0  ori         $a1, $v0, 0x86A0
    ctx->pc = 0x2dcc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x2dcc70: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2DCC70u;
    SET_GPR_U32(ctx, 31, 0x2DCC78u);
    ctx->pc = 0x2DCC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC70u;
            // 0x2dcc74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC78u; }
        if (ctx->pc != 0x2DCC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC78u; }
        if (ctx->pc != 0x2DCC78u) { return; }
    }
    ctx->pc = 0x2DCC78u;
label_2dcc78:
    // 0x2dcc78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dcc7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2dcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2dcc80: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2dcc84: 0x24632e80  addiu       $v1, $v1, 0x2E80
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11904));
    // 0x2dcc88: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2dcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2dcc8c: 0x26640074  addiu       $a0, $s3, 0x74
    ctx->pc = 0x2dcc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    // 0x2dcc90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2dcc90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2dcc94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dcc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dcc98: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x2dcc98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
    // 0x2dcc9c: 0x24422a40  addiu       $v0, $v0, 0x2A40
    ctx->pc = 0x2dcc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
    // 0x2dcca0: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x2dcca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
    // 0x2dcca4: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2dcca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2dcca8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2dcca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2dccac: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x2dccacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    // 0x2dccb0: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2dccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2dccb4: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2dccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2dccb8: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2dccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2dccbc: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x2dccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    // 0x2dccc0: 0xc0bd690  jal         func_2F5A40
    ctx->pc = 0x2DCCC0u;
    SET_GPR_U32(ctx, 31, 0x2DCCC8u);
    ctx->pc = 0x2DCCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCC0u;
            // 0x2dccc4: 0xae600078  sw          $zero, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5A40u;
    if (runtime->hasFunction(0x2F5A40u)) {
        auto targetFn = runtime->lookupFunction(0x2F5A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCC8u; }
        if (ctx->pc != 0x2DCCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5A40_0x2f5a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCC8u; }
        if (ctx->pc != 0x2DCCC8u) { return; }
    }
    ctx->pc = 0x2DCCC8u;
label_2dccc8:
    // 0x2dccc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dcccc: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x2dccccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x2dccd0: 0x24422a40  addiu       $v0, $v0, 0x2A40
    ctx->pc = 0x2dccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
    // 0x2dccd4: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x2dccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
    // 0x2dccd8: 0xc0bd690  jal         func_2F5A40
    ctx->pc = 0x2DCCD8u;
    SET_GPR_U32(ctx, 31, 0x2DCCE0u);
    ctx->pc = 0x2DCCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCD8u;
            // 0x2dccdc: 0xae6000d4  sw          $zero, 0xD4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5A40u;
    if (runtime->hasFunction(0x2F5A40u)) {
        auto targetFn = runtime->lookupFunction(0x2F5A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCE0u; }
        if (ctx->pc != 0x2DCCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5A40_0x2f5a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCE0u; }
        if (ctx->pc != 0x2DCCE0u) { return; }
    }
    ctx->pc = 0x2DCCE0u;
label_2dcce0:
    // 0x2dcce0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dcce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dcce4: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x2dcce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
    // 0x2dcce8: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x2dccec: 0xae620130  sw          $v0, 0x130($s3)
    ctx->pc = 0x2dccecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 2));
    // 0x2dccf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dccf4: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x2dccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
    // 0x2dccf8: 0xae620130  sw          $v0, 0x130($s3)
    ctx->pc = 0x2dccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 2));
    // 0x2dccfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dcd00: 0xae600138  sw          $zero, 0x138($s3)
    ctx->pc = 0x2dcd00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 0));
    // 0x2dcd04: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x2dcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x2dcd08: 0xae60013c  sw          $zero, 0x13C($s3)
    ctx->pc = 0x2dcd08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 316), GPR_U32(ctx, 0));
    // 0x2dcd0c: 0xae620130  sw          $v0, 0x130($s3)
    ctx->pc = 0x2dcd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 2));
    // 0x2dcd10: 0xae600140  sw          $zero, 0x140($s3)
    ctx->pc = 0x2dcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 0));
    // 0x2dcd14: 0xae600144  sw          $zero, 0x144($s3)
    ctx->pc = 0x2dcd14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 0));
    // 0x2dcd18: 0xae600148  sw          $zero, 0x148($s3)
    ctx->pc = 0x2dcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 0));
    // 0x2dcd1c: 0xae600150  sw          $zero, 0x150($s3)
    ctx->pc = 0x2dcd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 0));
    // 0x2dcd20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2dcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dcd24: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DCD24u;
    {
        const bool branch_taken_0x2dcd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd24) {
            ctx->pc = 0x2DCDE0u;
            goto label_2dcde0;
        }
    }
    ctx->pc = 0x2DCD2Cu;
    // 0x2dcd2c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x2dcd30: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x2DCD30u;
    SET_GPR_U32(ctx, 31, 0x2DCD38u);
    ctx->pc = 0x2DCD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD30u;
            // 0x2dcd34: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD38u; }
        if (ctx->pc != 0x2DCD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD38u; }
        if (ctx->pc != 0x2DCD38u) { return; }
    }
    ctx->pc = 0x2DCD38u;
label_2dcd38:
    // 0x2dcd38: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2dcd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2dcd3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcd40: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x2dcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x2dcd44: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2dcd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2dcd48: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2dcd48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2dcd4c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD4Cu;
    {
        const bool branch_taken_0x2dcd4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd4c) {
            ctx->pc = 0x2DCD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD4Cu;
            // 0x2dcd50: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD60u;
            goto label_2dcd60;
        }
    }
    ctx->pc = 0x2DCD54u;
    // 0x2dcd54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcd58: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x2dcd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x2dcd5c: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2dcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2dcd60:
    // 0x2dcd60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcd64: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x2dcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x2dcd68: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2dcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2dcd6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2dcd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2dcd70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD70u;
    {
        const bool branch_taken_0x2dcd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd70) {
            ctx->pc = 0x2DCD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD70u;
            // 0x2dcd74: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD84u;
            goto label_2dcd84;
        }
    }
    ctx->pc = 0x2DCD78u;
    // 0x2dcd78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcd7c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x2dcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x2dcd80: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2dcd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2dcd84:
    // 0x2dcd84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcd88: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x2dcd8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2dcd90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2dcd90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2dcd94: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD94u;
    {
        const bool branch_taken_0x2dcd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd94) {
            ctx->pc = 0x2DCD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD94u;
            // 0x2dcd98: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCDA8u;
            goto label_2dcda8;
        }
    }
    ctx->pc = 0x2DCD9Cu;
    // 0x2dcd9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcda0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x2dcda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x2dcda4: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2dcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2dcda8:
    // 0x2dcda8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dcda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcdac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2dcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2dcdb0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dcdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcdb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dcdb8:
    // 0x2dcdb8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x2dcdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2dcdbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2dcdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dcdc0: 0x8c64e3a8  lw          $a0, -0x1C58($v1)
    ctx->pc = 0x2dcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960040)));
    // 0x2dcdc4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2dcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dcdc8: 0xac44e3a8  sw          $a0, -0x1C58($v0)
    ctx->pc = 0x2dcdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960040), GPR_U32(ctx, 4));
    // 0x2dcdcc: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x2dcdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2dcdd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dcdd4: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x2dcdd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dcdd8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DCDD8u;
    {
        const bool branch_taken_0x2dcdd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCDD8u;
            // 0x2dcddc: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdd8) {
            ctx->pc = 0x2DCDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dcdb8;
        }
    }
    ctx->pc = 0x2DCDE0u;
label_2dcde0:
    // 0x2dcde0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dcde4: 0x8c51e410  lw          $s1, -0x1BF0($v0)
    ctx->pc = 0x2dcde4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
    // 0x2dcde8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2dcde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dcdec:
    // 0x2dcdec: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2dcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dcdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dcdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcdf4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2dcdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2dcdf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcdfc: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2dcdfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dce00: 0xc0d18e8  jal         func_3463A0
    ctx->pc = 0x2DCE00u;
    SET_GPR_U32(ctx, 31, 0x2DCE08u);
    ctx->pc = 0x2DCE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE00u;
            // 0x2dce04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3463A0u;
    if (runtime->hasFunction(0x3463A0u)) {
        auto targetFn = runtime->lookupFunction(0x3463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE08u; }
        if (ctx->pc != 0x2DCE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003463A0_0x3463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE08u; }
        if (ctx->pc != 0x2DCE08u) { return; }
    }
    ctx->pc = 0x2DCE08u;
label_2dce08:
    // 0x2dce08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce0c: 0xc0d183c  jal         func_3460F0
    ctx->pc = 0x2DCE0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE14u);
    ctx->pc = 0x2DCE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE0Cu;
            // 0x2dce10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3460F0u;
    if (runtime->hasFunction(0x3460F0u)) {
        auto targetFn = runtime->lookupFunction(0x3460F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE14u; }
        if (ctx->pc != 0x2DCE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003460F0_0x3460f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE14u; }
        if (ctx->pc != 0x2DCE14u) { return; }
    }
    ctx->pc = 0x2DCE14u;
label_2dce14:
    // 0x2dce14: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2dce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dce18: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2dce18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2dce1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2dce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2dce20: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2dce20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x2dce24: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2dce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2dce28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dce2c: 0x1e00ffef  bgtz        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DCE2Cu;
    {
        const bool branch_taken_0x2dce2c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2DCE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE2Cu;
            // 0x2dce30: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce2c) {
            ctx->pc = 0x2DCDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dcdec;
        }
    }
    ctx->pc = 0x2DCE34u;
    // 0x2dce34: 0xc040180  jal         func_100600
    ctx->pc = 0x2DCE34u;
    SET_GPR_U32(ctx, 31, 0x2DCE3Cu);
    ctx->pc = 0x2DCE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE34u;
            // 0x2dce38: 0x240402e4  addiu       $a0, $zero, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE3Cu; }
        if (ctx->pc != 0x2DCE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE3Cu; }
        if (ctx->pc != 0x2DCE3Cu) { return; }
    }
    ctx->pc = 0x2DCE3Cu;
label_2dce3c:
    // 0x2dce3c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCE3Cu;
    {
        const bool branch_taken_0x2dce3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce3c) {
            ctx->pc = 0x2DCE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE3Cu;
            // 0x2dce40: 0xae620144  sw          $v0, 0x144($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCE5Cu;
            goto label_2dce5c;
        }
    }
    ctx->pc = 0x2DCE44u;
    // 0x2dce44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dce44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2dce48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dce4c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2dce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x2dce50: 0xc0fba90  jal         func_3EEA40
    ctx->pc = 0x2DCE50u;
    SET_GPR_U32(ctx, 31, 0x2DCE58u);
    ctx->pc = 0x2DCE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE50u;
            // 0x2dce54: 0x34452825  ori         $a1, $v0, 0x2825 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10277);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (runtime->hasFunction(0x3EEA40u)) {
        auto targetFn = runtime->lookupFunction(0x3EEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE58u; }
        if (ctx->pc != 0x2DCE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEA40_0x3eea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE58u; }
        if (ctx->pc != 0x2DCE58u) { return; }
    }
    ctx->pc = 0x2DCE58u;
label_2dce58:
    // 0x2dce58: 0xae620144  sw          $v0, 0x144($s3)
    ctx->pc = 0x2dce58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 2));
label_2dce5c:
    // 0x2dce5c: 0xc040180  jal         func_100600
    ctx->pc = 0x2DCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE64u);
    ctx->pc = 0x2DCE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE5Cu;
            // 0x2dce60: 0x240406e4  addiu       $a0, $zero, 0x6E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1764));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE64u; }
        if (ctx->pc != 0x2DCE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE64u; }
        if (ctx->pc != 0x2DCE64u) { return; }
    }
    ctx->pc = 0x2DCE64u;
label_2dce64:
    // 0x2dce64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DCE64u;
    {
        const bool branch_taken_0x2dce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE64u;
            // 0x2dce68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce64) {
            ctx->pc = 0x2DCE9Cu;
            goto label_2dce9c;
        }
    }
    ctx->pc = 0x2DCE6Cu;
    // 0x2dce6c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2dce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x2dce70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dce70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce74: 0x34452825  ori         $a1, $v0, 0x2825
    ctx->pc = 0x2dce74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10277);
    // 0x2dce78: 0xc0fba90  jal         func_3EEA40
    ctx->pc = 0x2DCE78u;
    SET_GPR_U32(ctx, 31, 0x2DCE80u);
    ctx->pc = 0x2DCE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE78u;
            // 0x2dce7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (runtime->hasFunction(0x3EEA40u)) {
        auto targetFn = runtime->lookupFunction(0x3EEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE80u; }
        if (ctx->pc != 0x2DCE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEA40_0x3eea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE80u; }
        if (ctx->pc != 0x2DCE80u) { return; }
    }
    ctx->pc = 0x2DCE80u;
label_2dce80:
    // 0x2dce80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2dce84: 0x260402e4  addiu       $a0, $s0, 0x2E4
    ctx->pc = 0x2dce84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
    // 0x2dce88: 0x24426d60  addiu       $v0, $v0, 0x6D60
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28000));
    // 0x2dce8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2dce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2dce94: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2DCE94u;
    SET_GPR_U32(ctx, 31, 0x2DCE9Cu);
    ctx->pc = 0x2DCE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE94u;
            // 0x2dce98: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE9Cu; }
        if (ctx->pc != 0x2DCE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE9Cu; }
        if (ctx->pc != 0x2DCE9Cu) { return; }
    }
    ctx->pc = 0x2DCE9Cu;
label_2dce9c:
    // 0x2dce9c: 0xae700148  sw          $s0, 0x148($s3)
    ctx->pc = 0x2dce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 16));
    // 0x2dcea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcea4: 0xa262014c  sb          $v0, 0x14C($s3)
    ctx->pc = 0x2dcea4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 332), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcea8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dcea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dceac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dceb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dceb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dceb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dceb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dceb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dceb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCEC4u;
            // 0x2dcec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCECCu;
    // 0x2dcecc: 0x0  nop
    ctx->pc = 0x2dceccu;
    // NOP
    // 0x2dced0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dced4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dced8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dcee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcee4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DCEE4u;
    {
        const bool branch_taken_0x2dcee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCEE4u;
            // 0x2dcee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcee4) {
            ctx->pc = 0x2DCF28u;
            goto label_2dcf28;
        }
    }
    ctx->pc = 0x2DCEECu;
    // 0x2dceec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2dcef0: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x2dcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x2dcef4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCEF4u;
    {
        const bool branch_taken_0x2dcef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCEF4u;
            // 0x2dcef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcef4) {
            ctx->pc = 0x2DCF10u;
            goto label_2dcf10;
        }
    }
    ctx->pc = 0x2DCEFCu;
    // 0x2dcefc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dcf00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dcf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf04: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2dcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2dcf08: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x2DCF08u;
    SET_GPR_U32(ctx, 31, 0x2DCF10u);
    ctx->pc = 0x2DCF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF08u;
            // 0x2dcf0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF10u; }
        if (ctx->pc != 0x2DCF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF10u; }
        if (ctx->pc != 0x2DCF10u) { return; }
    }
    ctx->pc = 0x2DCF10u;
label_2dcf10:
    // 0x2dcf10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dcf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dcf14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dcf14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dcf18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCF18u;
    {
        const bool branch_taken_0x2dcf18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dcf18) {
            ctx->pc = 0x2DCF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF18u;
            // 0x2dcf1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCF2Cu;
            goto label_2dcf2c;
        }
    }
    ctx->pc = 0x2DCF20u;
    // 0x2dcf20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2DCF20u;
    SET_GPR_U32(ctx, 31, 0x2DCF28u);
    ctx->pc = 0x2DCF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF20u;
            // 0x2dcf24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF28u; }
        if (ctx->pc != 0x2DCF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF28u; }
        if (ctx->pc != 0x2DCF28u) { return; }
    }
    ctx->pc = 0x2DCF28u;
label_2dcf28:
    // 0x2dcf28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dcf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf2c:
    // 0x2dcf2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dcf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcf30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcf38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF38u;
            // 0x2dcf3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCF40u;
}
