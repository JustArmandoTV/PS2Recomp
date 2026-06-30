#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DBE20
// Address: 0x4dbe20 - 0x4dbfc0
void sub_004DBE20_0x4dbe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBE20_0x4dbe20");
#endif

    switch (ctx->pc) {
        case 0x4dbe20u: goto label_4dbe20;
        case 0x4dbe24u: goto label_4dbe24;
        case 0x4dbe28u: goto label_4dbe28;
        case 0x4dbe2cu: goto label_4dbe2c;
        case 0x4dbe30u: goto label_4dbe30;
        case 0x4dbe34u: goto label_4dbe34;
        case 0x4dbe38u: goto label_4dbe38;
        case 0x4dbe3cu: goto label_4dbe3c;
        case 0x4dbe40u: goto label_4dbe40;
        case 0x4dbe44u: goto label_4dbe44;
        case 0x4dbe48u: goto label_4dbe48;
        case 0x4dbe4cu: goto label_4dbe4c;
        case 0x4dbe50u: goto label_4dbe50;
        case 0x4dbe54u: goto label_4dbe54;
        case 0x4dbe58u: goto label_4dbe58;
        case 0x4dbe5cu: goto label_4dbe5c;
        case 0x4dbe60u: goto label_4dbe60;
        case 0x4dbe64u: goto label_4dbe64;
        case 0x4dbe68u: goto label_4dbe68;
        case 0x4dbe6cu: goto label_4dbe6c;
        case 0x4dbe70u: goto label_4dbe70;
        case 0x4dbe74u: goto label_4dbe74;
        case 0x4dbe78u: goto label_4dbe78;
        case 0x4dbe7cu: goto label_4dbe7c;
        case 0x4dbe80u: goto label_4dbe80;
        case 0x4dbe84u: goto label_4dbe84;
        case 0x4dbe88u: goto label_4dbe88;
        case 0x4dbe8cu: goto label_4dbe8c;
        case 0x4dbe90u: goto label_4dbe90;
        case 0x4dbe94u: goto label_4dbe94;
        case 0x4dbe98u: goto label_4dbe98;
        case 0x4dbe9cu: goto label_4dbe9c;
        case 0x4dbea0u: goto label_4dbea0;
        case 0x4dbea4u: goto label_4dbea4;
        case 0x4dbea8u: goto label_4dbea8;
        case 0x4dbeacu: goto label_4dbeac;
        case 0x4dbeb0u: goto label_4dbeb0;
        case 0x4dbeb4u: goto label_4dbeb4;
        case 0x4dbeb8u: goto label_4dbeb8;
        case 0x4dbebcu: goto label_4dbebc;
        case 0x4dbec0u: goto label_4dbec0;
        case 0x4dbec4u: goto label_4dbec4;
        case 0x4dbec8u: goto label_4dbec8;
        case 0x4dbeccu: goto label_4dbecc;
        case 0x4dbed0u: goto label_4dbed0;
        case 0x4dbed4u: goto label_4dbed4;
        case 0x4dbed8u: goto label_4dbed8;
        case 0x4dbedcu: goto label_4dbedc;
        case 0x4dbee0u: goto label_4dbee0;
        case 0x4dbee4u: goto label_4dbee4;
        case 0x4dbee8u: goto label_4dbee8;
        case 0x4dbeecu: goto label_4dbeec;
        case 0x4dbef0u: goto label_4dbef0;
        case 0x4dbef4u: goto label_4dbef4;
        case 0x4dbef8u: goto label_4dbef8;
        case 0x4dbefcu: goto label_4dbefc;
        case 0x4dbf00u: goto label_4dbf00;
        case 0x4dbf04u: goto label_4dbf04;
        case 0x4dbf08u: goto label_4dbf08;
        case 0x4dbf0cu: goto label_4dbf0c;
        case 0x4dbf10u: goto label_4dbf10;
        case 0x4dbf14u: goto label_4dbf14;
        case 0x4dbf18u: goto label_4dbf18;
        case 0x4dbf1cu: goto label_4dbf1c;
        case 0x4dbf20u: goto label_4dbf20;
        case 0x4dbf24u: goto label_4dbf24;
        case 0x4dbf28u: goto label_4dbf28;
        case 0x4dbf2cu: goto label_4dbf2c;
        case 0x4dbf30u: goto label_4dbf30;
        case 0x4dbf34u: goto label_4dbf34;
        case 0x4dbf38u: goto label_4dbf38;
        case 0x4dbf3cu: goto label_4dbf3c;
        case 0x4dbf40u: goto label_4dbf40;
        case 0x4dbf44u: goto label_4dbf44;
        case 0x4dbf48u: goto label_4dbf48;
        case 0x4dbf4cu: goto label_4dbf4c;
        case 0x4dbf50u: goto label_4dbf50;
        case 0x4dbf54u: goto label_4dbf54;
        case 0x4dbf58u: goto label_4dbf58;
        case 0x4dbf5cu: goto label_4dbf5c;
        case 0x4dbf60u: goto label_4dbf60;
        case 0x4dbf64u: goto label_4dbf64;
        case 0x4dbf68u: goto label_4dbf68;
        case 0x4dbf6cu: goto label_4dbf6c;
        case 0x4dbf70u: goto label_4dbf70;
        case 0x4dbf74u: goto label_4dbf74;
        case 0x4dbf78u: goto label_4dbf78;
        case 0x4dbf7cu: goto label_4dbf7c;
        case 0x4dbf80u: goto label_4dbf80;
        case 0x4dbf84u: goto label_4dbf84;
        case 0x4dbf88u: goto label_4dbf88;
        case 0x4dbf8cu: goto label_4dbf8c;
        case 0x4dbf90u: goto label_4dbf90;
        case 0x4dbf94u: goto label_4dbf94;
        case 0x4dbf98u: goto label_4dbf98;
        case 0x4dbf9cu: goto label_4dbf9c;
        case 0x4dbfa0u: goto label_4dbfa0;
        case 0x4dbfa4u: goto label_4dbfa4;
        case 0x4dbfa8u: goto label_4dbfa8;
        case 0x4dbfacu: goto label_4dbfac;
        case 0x4dbfb0u: goto label_4dbfb0;
        case 0x4dbfb4u: goto label_4dbfb4;
        case 0x4dbfb8u: goto label_4dbfb8;
        case 0x4dbfbcu: goto label_4dbfbc;
        default: break;
    }

    ctx->pc = 0x4dbe20u;

label_4dbe20:
    // 0x4dbe20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dbe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4dbe24:
    // 0x4dbe24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dbe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dbe28:
    // 0x4dbe28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dbe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dbe2c:
    // 0x4dbe2c: 0x8c8500fc  lw          $a1, 0xFC($a0)
    ctx->pc = 0x4dbe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_4dbe30:
    // 0x4dbe30: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_4dbe34:
    if (ctx->pc == 0x4DBE34u) {
        ctx->pc = 0x4DBE34u;
            // 0x4dbe34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBE38u;
        goto label_4dbe38;
    }
    ctx->pc = 0x4DBE30u;
    {
        const bool branch_taken_0x4dbe30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DBE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBE30u;
            // 0x4dbe34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbe30) {
            ctx->pc = 0x4DBE54u;
            goto label_4dbe54;
        }
    }
    ctx->pc = 0x4DBE38u;
label_4dbe38:
    // 0x4dbe38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dbe38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dbe3c:
    // 0x4dbe3c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4dbe3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4dbe40:
    // 0x4dbe40: 0x320f809  jalr        $t9
label_4dbe44:
    if (ctx->pc == 0x4DBE44u) {
        ctx->pc = 0x4DBE48u;
        goto label_4dbe48;
    }
    ctx->pc = 0x4DBE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DBE48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DBE48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DBE48u; }
            if (ctx->pc != 0x4DBE48u) { return; }
        }
        }
    }
    ctx->pc = 0x4DBE48u;
label_4dbe48:
    // 0x4dbe48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4dbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dbe4c:
    // 0x4dbe4c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4dbe50:
    if (ctx->pc == 0x4DBE50u) {
        ctx->pc = 0x4DBE50u;
            // 0x4dbe50: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->pc = 0x4DBE54u;
        goto label_4dbe54;
    }
    ctx->pc = 0x4DBE4Cu;
    {
        const bool branch_taken_0x4dbe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBE4Cu;
            // 0x4dbe50: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbe4c) {
            ctx->pc = 0x4DBEBCu;
            goto label_4dbebc;
        }
    }
    ctx->pc = 0x4DBE54u;
label_4dbe54:
    // 0x4dbe54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dbe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4dbe58:
    // 0x4dbe58: 0x54a30019  bnel        $a1, $v1, . + 4 + (0x19 << 2)
label_4dbe5c:
    if (ctx->pc == 0x4DBE5Cu) {
        ctx->pc = 0x4DBE5Cu;
            // 0x4dbe5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4DBE60u;
        goto label_4dbe60;
    }
    ctx->pc = 0x4DBE58u;
    {
        const bool branch_taken_0x4dbe58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4dbe58) {
            ctx->pc = 0x4DBE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBE58u;
            // 0x4dbe5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBEC0u;
            goto label_4dbec0;
        }
    }
    ctx->pc = 0x4DBE60u;
label_4dbe60:
    // 0x4dbe60: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4dbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dbe64:
    // 0x4dbe64: 0xc603014c  lwc1        $f3, 0x14C($s0)
    ctx->pc = 0x4dbe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dbe68:
    // 0x4dbe68: 0xc6020148  lwc1        $f2, 0x148($s0)
    ctx->pc = 0x4dbe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dbe6c:
    // 0x4dbe6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4dbe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dbe70:
    // 0x4dbe70: 0xc6010144  lwc1        $f1, 0x144($s0)
    ctx->pc = 0x4dbe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbe74:
    // 0x4dbe74: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x4dbe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbe78:
    // 0x4dbe78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4dbe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4dbe7c:
    // 0x4dbe7c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4dbe7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4dbe80:
    // 0x4dbe80: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4dbe80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4dbe84:
    // 0x4dbe84: 0xc0892a0  jal         func_224A80
label_4dbe88:
    if (ctx->pc == 0x4DBE88u) {
        ctx->pc = 0x4DBE88u;
            // 0x4dbe88: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4DBE8Cu;
        goto label_4dbe8c;
    }
    ctx->pc = 0x4DBE84u;
    SET_GPR_U32(ctx, 31, 0x4DBE8Cu);
    ctx->pc = 0x4DBE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBE84u;
            // 0x4dbe88: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBE8Cu; }
        if (ctx->pc != 0x4DBE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBE8Cu; }
        if (ctx->pc != 0x4DBE8Cu) { return; }
    }
    ctx->pc = 0x4DBE8Cu;
label_4dbe8c:
    // 0x4dbe8c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4dbe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dbe90:
    // 0x4dbe90: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x4dbe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dbe94:
    // 0x4dbe94: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4dbe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbe98:
    // 0x4dbe98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4dbe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4dbe9c:
    // 0x4dbe9c: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x4dbe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbea0:
    // 0x4dbea0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4dbea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4dbea4:
    // 0x4dbea4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4dbea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_4dbea8:
    // 0x4dbea8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4dbea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4dbeac:
    // 0x4dbeac: 0xc089290  jal         func_224A40
label_4dbeb0:
    if (ctx->pc == 0x4DBEB0u) {
        ctx->pc = 0x4DBEB0u;
            // 0x4dbeb0: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x4DBEB4u;
        goto label_4dbeb4;
    }
    ctx->pc = 0x4DBEACu;
    SET_GPR_U32(ctx, 31, 0x4DBEB4u);
    ctx->pc = 0x4DBEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBEACu;
            // 0x4dbeb0: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBEB4u; }
        if (ctx->pc != 0x4DBEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBEB4u; }
        if (ctx->pc != 0x4DBEB4u) { return; }
    }
    ctx->pc = 0x4DBEB4u;
label_4dbeb4:
    // 0x4dbeb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4dbeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dbeb8:
    // 0x4dbeb8: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x4dbeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
label_4dbebc:
    // 0x4dbebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dbebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbec0:
    // 0x4dbec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dbec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dbec4:
    // 0x4dbec4: 0x3e00008  jr          $ra
label_4dbec8:
    if (ctx->pc == 0x4DBEC8u) {
        ctx->pc = 0x4DBEC8u;
            // 0x4dbec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DBECCu;
        goto label_4dbecc;
    }
    ctx->pc = 0x4DBEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBEC4u;
            // 0x4dbec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DBECCu;
label_4dbecc:
    // 0x4dbecc: 0x0  nop
    ctx->pc = 0x4dbeccu;
    // NOP
label_4dbed0:
    // 0x4dbed0: 0x8136cb8  j           func_4DB2E0
label_4dbed4:
    if (ctx->pc == 0x4DBED4u) {
        ctx->pc = 0x4DBED4u;
            // 0x4dbed4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4DBED8u;
        goto label_4dbed8;
    }
    ctx->pc = 0x4DBED0u;
    ctx->pc = 0x4DBED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBED0u;
            // 0x4dbed4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB2E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DB2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DBED8u;
label_4dbed8:
    // 0x4dbed8: 0x0  nop
    ctx->pc = 0x4dbed8u;
    // NOP
label_4dbedc:
    // 0x4dbedc: 0x0  nop
    ctx->pc = 0x4dbedcu;
    // NOP
label_4dbee0:
    // 0x4dbee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dbee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dbee4:
    // 0x4dbee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dbee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dbee8:
    // 0x4dbee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dbee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dbeec:
    // 0x4dbeec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dbeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dbef0:
    // 0x4dbef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dbef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbef4:
    // 0x4dbef4: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_4dbef8:
    if (ctx->pc == 0x4DBEF8u) {
        ctx->pc = 0x4DBEF8u;
            // 0x4dbef8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBEFCu;
        goto label_4dbefc;
    }
    ctx->pc = 0x4DBEF4u;
    {
        const bool branch_taken_0x4dbef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBEF4u;
            // 0x4dbef8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbef4) {
            ctx->pc = 0x4DBF9Cu;
            goto label_4dbf9c;
        }
    }
    ctx->pc = 0x4DBEFCu;
label_4dbefc:
    // 0x4dbefc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dbefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dbf00:
    // 0x4dbf00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dbf04:
    // 0x4dbf04: 0x24632cd0  addiu       $v1, $v1, 0x2CD0
    ctx->pc = 0x4dbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11472));
label_4dbf08:
    // 0x4dbf08: 0x24422d08  addiu       $v0, $v0, 0x2D08
    ctx->pc = 0x4dbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11528));
label_4dbf0c:
    // 0x4dbf0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dbf10:
    // 0x4dbf10: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dbf14:
    // 0x4dbf14: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x4dbf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_4dbf18:
    // 0x4dbf18: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4dbf18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4dbf1c:
    // 0x4dbf1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4dbf20:
    if (ctx->pc == 0x4DBF20u) {
        ctx->pc = 0x4DBF24u;
        goto label_4dbf24;
    }
    ctx->pc = 0x4DBF1Cu;
    {
        const bool branch_taken_0x4dbf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbf1c) {
            ctx->pc = 0x4DBF58u;
            goto label_4dbf58;
        }
    }
    ctx->pc = 0x4DBF24u;
label_4dbf24:
    // 0x4dbf24: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4dbf24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4dbf28:
    // 0x4dbf28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dbf2c:
    // 0x4dbf2c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4dbf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4dbf30:
    // 0x4dbf30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4dbf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4dbf34:
    // 0x4dbf34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dbf34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dbf38:
    // 0x4dbf38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4dbf3c:
    if (ctx->pc == 0x4DBF3Cu) {
        ctx->pc = 0x4DBF40u;
        goto label_4dbf40;
    }
    ctx->pc = 0x4DBF38u;
    {
        const bool branch_taken_0x4dbf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dbf38) {
            ctx->pc = 0x4DBF58u;
            goto label_4dbf58;
        }
    }
    ctx->pc = 0x4DBF40u;
label_4dbf40:
    // 0x4dbf40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dbf44:
    if (ctx->pc == 0x4DBF44u) {
        ctx->pc = 0x4DBF48u;
        goto label_4dbf48;
    }
    ctx->pc = 0x4DBF40u;
    {
        const bool branch_taken_0x4dbf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbf40) {
            ctx->pc = 0x4DBF58u;
            goto label_4dbf58;
        }
    }
    ctx->pc = 0x4DBF48u;
label_4dbf48:
    // 0x4dbf48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dbf48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dbf4c:
    // 0x4dbf4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dbf4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dbf50:
    // 0x4dbf50: 0x320f809  jalr        $t9
label_4dbf54:
    if (ctx->pc == 0x4DBF54u) {
        ctx->pc = 0x4DBF54u;
            // 0x4dbf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DBF58u;
        goto label_4dbf58;
    }
    ctx->pc = 0x4DBF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DBF58u);
        ctx->pc = 0x4DBF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBF50u;
            // 0x4dbf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DBF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DBF58u; }
            if (ctx->pc != 0x4DBF58u) { return; }
        }
        }
    }
    ctx->pc = 0x4DBF58u;
label_4dbf58:
    // 0x4dbf58: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_4dbf5c:
    if (ctx->pc == 0x4DBF5Cu) {
        ctx->pc = 0x4DBF5Cu;
            // 0x4dbf5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DBF60u;
        goto label_4dbf60;
    }
    ctx->pc = 0x4DBF58u;
    {
        const bool branch_taken_0x4dbf58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbf58) {
            ctx->pc = 0x4DBF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBF58u;
            // 0x4dbf5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBF88u;
            goto label_4dbf88;
        }
    }
    ctx->pc = 0x4DBF60u;
label_4dbf60:
    // 0x4dbf60: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dbf64:
    // 0x4dbf64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dbf68:
    // 0x4dbf68: 0x24632d80  addiu       $v1, $v1, 0x2D80
    ctx->pc = 0x4dbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
label_4dbf6c:
    // 0x4dbf6c: 0x24422db8  addiu       $v0, $v0, 0x2DB8
    ctx->pc = 0x4dbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11704));
label_4dbf70:
    // 0x4dbf70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbf70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dbf74:
    // 0x4dbf74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dbf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dbf78:
    // 0x4dbf78: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dbf7c:
    // 0x4dbf7c: 0xc136ff0  jal         func_4DBFC0
label_4dbf80:
    if (ctx->pc == 0x4DBF80u) {
        ctx->pc = 0x4DBF80u;
            // 0x4dbf80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBF84u;
        goto label_4dbf84;
    }
    ctx->pc = 0x4DBF7Cu;
    SET_GPR_U32(ctx, 31, 0x4DBF84u);
    ctx->pc = 0x4DBF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBF7Cu;
            // 0x4dbf80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBFC0u;
    if (runtime->hasFunction(0x4DBFC0u)) {
        auto targetFn = runtime->lookupFunction(0x4DBFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBF84u; }
        if (ctx->pc != 0x4DBF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DBFC0_0x4dbfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBF84u; }
        if (ctx->pc != 0x4DBF84u) { return; }
    }
    ctx->pc = 0x4DBF84u;
label_4dbf84:
    // 0x4dbf84: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dbf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dbf88:
    // 0x4dbf88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dbf88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dbf8c:
    // 0x4dbf8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dbf90:
    if (ctx->pc == 0x4DBF90u) {
        ctx->pc = 0x4DBF90u;
            // 0x4dbf90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBF94u;
        goto label_4dbf94;
    }
    ctx->pc = 0x4DBF8Cu;
    {
        const bool branch_taken_0x4dbf8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dbf8c) {
            ctx->pc = 0x4DBF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBF8Cu;
            // 0x4dbf90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBFA0u;
            goto label_4dbfa0;
        }
    }
    ctx->pc = 0x4DBF94u;
label_4dbf94:
    // 0x4dbf94: 0xc0400a8  jal         func_1002A0
label_4dbf98:
    if (ctx->pc == 0x4DBF98u) {
        ctx->pc = 0x4DBF98u;
            // 0x4dbf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBF9Cu;
        goto label_4dbf9c;
    }
    ctx->pc = 0x4DBF94u;
    SET_GPR_U32(ctx, 31, 0x4DBF9Cu);
    ctx->pc = 0x4DBF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBF94u;
            // 0x4dbf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBF9Cu; }
        if (ctx->pc != 0x4DBF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBF9Cu; }
        if (ctx->pc != 0x4DBF9Cu) { return; }
    }
    ctx->pc = 0x4DBF9Cu;
label_4dbf9c:
    // 0x4dbf9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dbf9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dbfa0:
    // 0x4dbfa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dbfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dbfa4:
    // 0x4dbfa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dbfa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbfa8:
    // 0x4dbfa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dbfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dbfac:
    // 0x4dbfac: 0x3e00008  jr          $ra
label_4dbfb0:
    if (ctx->pc == 0x4DBFB0u) {
        ctx->pc = 0x4DBFB0u;
            // 0x4dbfb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DBFB4u;
        goto label_4dbfb4;
    }
    ctx->pc = 0x4DBFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBFACu;
            // 0x4dbfb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DBFB4u;
label_4dbfb4:
    // 0x4dbfb4: 0x0  nop
    ctx->pc = 0x4dbfb4u;
    // NOP
label_4dbfb8:
    // 0x4dbfb8: 0x0  nop
    ctx->pc = 0x4dbfb8u;
    // NOP
label_4dbfbc:
    // 0x4dbfbc: 0x0  nop
    ctx->pc = 0x4dbfbcu;
    // NOP
}
