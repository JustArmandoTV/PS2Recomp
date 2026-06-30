#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CF970
// Address: 0x3cf970 - 0x3cfb40
void sub_003CF970_0x3cf970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF970_0x3cf970");
#endif

    switch (ctx->pc) {
        case 0x3cf970u: goto label_3cf970;
        case 0x3cf974u: goto label_3cf974;
        case 0x3cf978u: goto label_3cf978;
        case 0x3cf97cu: goto label_3cf97c;
        case 0x3cf980u: goto label_3cf980;
        case 0x3cf984u: goto label_3cf984;
        case 0x3cf988u: goto label_3cf988;
        case 0x3cf98cu: goto label_3cf98c;
        case 0x3cf990u: goto label_3cf990;
        case 0x3cf994u: goto label_3cf994;
        case 0x3cf998u: goto label_3cf998;
        case 0x3cf99cu: goto label_3cf99c;
        case 0x3cf9a0u: goto label_3cf9a0;
        case 0x3cf9a4u: goto label_3cf9a4;
        case 0x3cf9a8u: goto label_3cf9a8;
        case 0x3cf9acu: goto label_3cf9ac;
        case 0x3cf9b0u: goto label_3cf9b0;
        case 0x3cf9b4u: goto label_3cf9b4;
        case 0x3cf9b8u: goto label_3cf9b8;
        case 0x3cf9bcu: goto label_3cf9bc;
        case 0x3cf9c0u: goto label_3cf9c0;
        case 0x3cf9c4u: goto label_3cf9c4;
        case 0x3cf9c8u: goto label_3cf9c8;
        case 0x3cf9ccu: goto label_3cf9cc;
        case 0x3cf9d0u: goto label_3cf9d0;
        case 0x3cf9d4u: goto label_3cf9d4;
        case 0x3cf9d8u: goto label_3cf9d8;
        case 0x3cf9dcu: goto label_3cf9dc;
        case 0x3cf9e0u: goto label_3cf9e0;
        case 0x3cf9e4u: goto label_3cf9e4;
        case 0x3cf9e8u: goto label_3cf9e8;
        case 0x3cf9ecu: goto label_3cf9ec;
        case 0x3cf9f0u: goto label_3cf9f0;
        case 0x3cf9f4u: goto label_3cf9f4;
        case 0x3cf9f8u: goto label_3cf9f8;
        case 0x3cf9fcu: goto label_3cf9fc;
        case 0x3cfa00u: goto label_3cfa00;
        case 0x3cfa04u: goto label_3cfa04;
        case 0x3cfa08u: goto label_3cfa08;
        case 0x3cfa0cu: goto label_3cfa0c;
        case 0x3cfa10u: goto label_3cfa10;
        case 0x3cfa14u: goto label_3cfa14;
        case 0x3cfa18u: goto label_3cfa18;
        case 0x3cfa1cu: goto label_3cfa1c;
        case 0x3cfa20u: goto label_3cfa20;
        case 0x3cfa24u: goto label_3cfa24;
        case 0x3cfa28u: goto label_3cfa28;
        case 0x3cfa2cu: goto label_3cfa2c;
        case 0x3cfa30u: goto label_3cfa30;
        case 0x3cfa34u: goto label_3cfa34;
        case 0x3cfa38u: goto label_3cfa38;
        case 0x3cfa3cu: goto label_3cfa3c;
        case 0x3cfa40u: goto label_3cfa40;
        case 0x3cfa44u: goto label_3cfa44;
        case 0x3cfa48u: goto label_3cfa48;
        case 0x3cfa4cu: goto label_3cfa4c;
        case 0x3cfa50u: goto label_3cfa50;
        case 0x3cfa54u: goto label_3cfa54;
        case 0x3cfa58u: goto label_3cfa58;
        case 0x3cfa5cu: goto label_3cfa5c;
        case 0x3cfa60u: goto label_3cfa60;
        case 0x3cfa64u: goto label_3cfa64;
        case 0x3cfa68u: goto label_3cfa68;
        case 0x3cfa6cu: goto label_3cfa6c;
        case 0x3cfa70u: goto label_3cfa70;
        case 0x3cfa74u: goto label_3cfa74;
        case 0x3cfa78u: goto label_3cfa78;
        case 0x3cfa7cu: goto label_3cfa7c;
        case 0x3cfa80u: goto label_3cfa80;
        case 0x3cfa84u: goto label_3cfa84;
        case 0x3cfa88u: goto label_3cfa88;
        case 0x3cfa8cu: goto label_3cfa8c;
        case 0x3cfa90u: goto label_3cfa90;
        case 0x3cfa94u: goto label_3cfa94;
        case 0x3cfa98u: goto label_3cfa98;
        case 0x3cfa9cu: goto label_3cfa9c;
        case 0x3cfaa0u: goto label_3cfaa0;
        case 0x3cfaa4u: goto label_3cfaa4;
        case 0x3cfaa8u: goto label_3cfaa8;
        case 0x3cfaacu: goto label_3cfaac;
        case 0x3cfab0u: goto label_3cfab0;
        case 0x3cfab4u: goto label_3cfab4;
        case 0x3cfab8u: goto label_3cfab8;
        case 0x3cfabcu: goto label_3cfabc;
        case 0x3cfac0u: goto label_3cfac0;
        case 0x3cfac4u: goto label_3cfac4;
        case 0x3cfac8u: goto label_3cfac8;
        case 0x3cfaccu: goto label_3cfacc;
        case 0x3cfad0u: goto label_3cfad0;
        case 0x3cfad4u: goto label_3cfad4;
        case 0x3cfad8u: goto label_3cfad8;
        case 0x3cfadcu: goto label_3cfadc;
        case 0x3cfae0u: goto label_3cfae0;
        case 0x3cfae4u: goto label_3cfae4;
        case 0x3cfae8u: goto label_3cfae8;
        case 0x3cfaecu: goto label_3cfaec;
        case 0x3cfaf0u: goto label_3cfaf0;
        case 0x3cfaf4u: goto label_3cfaf4;
        case 0x3cfaf8u: goto label_3cfaf8;
        case 0x3cfafcu: goto label_3cfafc;
        case 0x3cfb00u: goto label_3cfb00;
        case 0x3cfb04u: goto label_3cfb04;
        case 0x3cfb08u: goto label_3cfb08;
        case 0x3cfb0cu: goto label_3cfb0c;
        case 0x3cfb10u: goto label_3cfb10;
        case 0x3cfb14u: goto label_3cfb14;
        case 0x3cfb18u: goto label_3cfb18;
        case 0x3cfb1cu: goto label_3cfb1c;
        case 0x3cfb20u: goto label_3cfb20;
        case 0x3cfb24u: goto label_3cfb24;
        case 0x3cfb28u: goto label_3cfb28;
        case 0x3cfb2cu: goto label_3cfb2c;
        case 0x3cfb30u: goto label_3cfb30;
        case 0x3cfb34u: goto label_3cfb34;
        case 0x3cfb38u: goto label_3cfb38;
        case 0x3cfb3cu: goto label_3cfb3c;
        default: break;
    }

    ctx->pc = 0x3cf970u;

label_3cf970:
    // 0x3cf970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cf970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3cf974:
    // 0x3cf974: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3cf974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3cf978:
    // 0x3cf978: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cf978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3cf97c:
    // 0x3cf97c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cf97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3cf980:
    // 0x3cf980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cf980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3cf984:
    // 0x3cf984: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3cf984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cf988:
    // 0x3cf988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cf988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cf98c:
    // 0x3cf98c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cf98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cf990:
    // 0x3cf990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cf990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cf994:
    // 0x3cf994: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3cf994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cf998:
    // 0x3cf998: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3cf998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cf99c:
    // 0x3cf99c: 0x3445aece  ori         $a1, $v0, 0xAECE
    ctx->pc = 0x3cf99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44750);
label_3cf9a0:
    // 0x3cf9a0: 0xc0ee760  jal         func_3B9D80
label_3cf9a4:
    if (ctx->pc == 0x3CF9A4u) {
        ctx->pc = 0x3CF9A4u;
            // 0x3cf9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF9A8u;
        goto label_3cf9a8;
    }
    ctx->pc = 0x3CF9A0u;
    SET_GPR_U32(ctx, 31, 0x3CF9A8u);
    ctx->pc = 0x3CF9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF9A0u;
            // 0x3cf9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF9A8u; }
        if (ctx->pc != 0x3CF9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF9A8u; }
        if (ctx->pc != 0x3CF9A8u) { return; }
    }
    ctx->pc = 0x3CF9A8u;
label_3cf9a8:
    // 0x3cf9a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3cf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3cf9ac:
    // 0x3cf9ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf9b0:
    // 0x3cf9b0: 0x24429110  addiu       $v0, $v0, -0x6EF0
    ctx->pc = 0x3cf9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
label_3cf9b4:
    // 0x3cf9b4: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3cf9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3cf9b8:
    // 0x3cf9b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3cf9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3cf9bc:
    // 0x3cf9bc: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3cf9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3cf9c0:
    // 0x3cf9c0: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x3cf9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_3cf9c4:
    // 0x3cf9c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf9c8:
    // 0x3cf9c8: 0xae510060  sw          $s1, 0x60($s2)
    ctx->pc = 0x3cf9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
label_3cf9cc:
    // 0x3cf9cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cf9d0:
    // 0x3cf9d0: 0xae500064  sw          $s0, 0x64($s2)
    ctx->pc = 0x3cf9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 16));
label_3cf9d4:
    // 0x3cf9d4: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x3cf9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_3cf9d8:
    // 0x3cf9d8: 0xa640006c  sh          $zero, 0x6C($s2)
    ctx->pc = 0x3cf9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 0));
label_3cf9dc:
    // 0x3cf9dc: 0xa240006e  sb          $zero, 0x6E($s2)
    ctx->pc = 0x3cf9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 0));
label_3cf9e0:
    // 0x3cf9e0: 0xa240006f  sb          $zero, 0x6F($s2)
    ctx->pc = 0x3cf9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 111), (uint8_t)GPR_U32(ctx, 0));
label_3cf9e4:
    // 0x3cf9e4: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x3cf9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_3cf9e8:
    // 0x3cf9e8: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x3cf9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_3cf9ec:
    // 0x3cf9ec: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x3cf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_3cf9f0:
    // 0x3cf9f0: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x3cf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_3cf9f4:
    // 0x3cf9f4: 0x8c500eac  lw          $s0, 0xEAC($v0)
    ctx->pc = 0x3cf9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3cf9f8:
    // 0x3cf9f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf9fc:
    // 0x3cf9fc: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x3cf9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_3cfa00:
    // 0x3cfa00: 0x804211ab  lb          $v0, 0x11AB($v0)
    ctx->pc = 0x3cfa00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4523)));
label_3cfa04:
    // 0x3cfa04: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x3cfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_3cfa08:
    // 0x3cfa08: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x3cfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3cfa0c:
    // 0x3cfa0c: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
label_3cfa10:
    if (ctx->pc == 0x3CFA10u) {
        ctx->pc = 0x3CFA10u;
            // 0x3cfa10: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x3CFA14u;
        goto label_3cfa14;
    }
    ctx->pc = 0x3CFA0Cu;
    {
        const bool branch_taken_0x3cfa0c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3cfa0c) {
            ctx->pc = 0x3CFA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFA0Cu;
            // 0x3cfa10: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFA2Cu;
            goto label_3cfa2c;
        }
    }
    ctx->pc = 0x3CFA14u;
label_3cfa14:
    // 0x3cfa14: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cfa14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cfa18:
    // 0x3cfa18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cfa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cfa1c:
    // 0x3cfa1c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cfa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cfa20:
    // 0x3cfa20: 0x320f809  jalr        $t9
label_3cfa24:
    if (ctx->pc == 0x3CFA24u) {
        ctx->pc = 0x3CFA24u;
            // 0x3cfa24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA28u;
        goto label_3cfa28;
    }
    ctx->pc = 0x3CFA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CFA28u);
        ctx->pc = 0x3CFA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFA20u;
            // 0x3cfa24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CFA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CFA28u; }
            if (ctx->pc != 0x3CFA28u) { return; }
        }
        }
    }
    ctx->pc = 0x3CFA28u;
label_3cfa28:
    // 0x3cfa28: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x3cfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3cfa2c:
    // 0x3cfa2c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x3cfa2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_3cfa30:
    // 0x3cfa30: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_3cfa34:
    if (ctx->pc == 0x3CFA34u) {
        ctx->pc = 0x3CFA34u;
            // 0x3cfa34: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->pc = 0x3CFA38u;
        goto label_3cfa38;
    }
    ctx->pc = 0x3CFA30u;
    {
        const bool branch_taken_0x3cfa30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cfa30) {
            ctx->pc = 0x3CFA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFA30u;
            // 0x3cfa34: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFA44u;
            goto label_3cfa44;
        }
    }
    ctx->pc = 0x3CFA38u;
label_3cfa38:
    // 0x3cfa38: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x3cfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_3cfa3c:
    // 0x3cfa3c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x3cfa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_3cfa40:
    // 0x3cfa40: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x3cfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3cfa44:
    // 0x3cfa44: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3cfa44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3cfa48:
    // 0x3cfa48: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_3cfa4c:
    if (ctx->pc == 0x3CFA4Cu) {
        ctx->pc = 0x3CFA4Cu;
            // 0x3cfa4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CFA50u;
        goto label_3cfa50;
    }
    ctx->pc = 0x3CFA48u;
    {
        const bool branch_taken_0x3cfa48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cfa48) {
            ctx->pc = 0x3CFA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFA48u;
            // 0x3cfa4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFA60u;
            goto label_3cfa60;
        }
    }
    ctx->pc = 0x3CFA50u;
label_3cfa50:
    // 0x3cfa50: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x3cfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_3cfa54:
    // 0x3cfa54: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3cfa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3cfa58:
    // 0x3cfa58: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x3cfa58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_3cfa5c:
    // 0x3cfa5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cfa60:
    // 0x3cfa60: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cfa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cfa64:
    // 0x3cfa64: 0xa242006f  sb          $v0, 0x6F($s2)
    ctx->pc = 0x3cfa64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 111), (uint8_t)GPR_U32(ctx, 2));
label_3cfa68:
    // 0x3cfa68: 0x246366d0  addiu       $v1, $v1, 0x66D0
    ctx->pc = 0x3cfa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26320));
label_3cfa6c:
    // 0x3cfa6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cfa70:
    // 0x3cfa70: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3cfa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3cfa74:
    // 0x3cfa74: 0x8c5066c8  lw          $s0, 0x66C8($v0)
    ctx->pc = 0x3cfa74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26312)));
label_3cfa78:
    // 0x3cfa78: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x3cfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3cfa7c:
    // 0x3cfa7c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3cfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3cfa80:
    // 0x3cfa80: 0xc040180  jal         func_100600
label_3cfa84:
    if (ctx->pc == 0x3CFA84u) {
        ctx->pc = 0x3CFA84u;
            // 0x3cfa84: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CFA88u;
        goto label_3cfa88;
    }
    ctx->pc = 0x3CFA80u;
    SET_GPR_U32(ctx, 31, 0x3CFA88u);
    ctx->pc = 0x3CFA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFA80u;
            // 0x3cfa84: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFA88u; }
        if (ctx->pc != 0x3CFA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFA88u; }
        if (ctx->pc != 0x3CFA88u) { return; }
    }
    ctx->pc = 0x3CFA88u;
label_3cfa88:
    // 0x3cfa88: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3cfa8c:
    if (ctx->pc == 0x3CFA8Cu) {
        ctx->pc = 0x3CFA8Cu;
            // 0x3cfa8c: 0xae42007c  sw          $v0, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x3CFA90u;
        goto label_3cfa90;
    }
    ctx->pc = 0x3CFA88u;
    {
        const bool branch_taken_0x3cfa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfa88) {
            ctx->pc = 0x3CFA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFA88u;
            // 0x3cfa8c: 0xae42007c  sw          $v0, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFABCu;
            goto label_3cfabc;
        }
    }
    ctx->pc = 0x3CFA90u;
label_3cfa90:
    // 0x3cfa90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cfa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cfa94:
    // 0x3cfa94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3cfa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cfa98:
    // 0x3cfa98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cfa9c:
    // 0x3cfa9c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3cfa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cfaa0:
    // 0x3cfaa0: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x3cfaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3cfaa4:
    // 0x3cfaa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3cfaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cfaa8:
    // 0x3cfaa8: 0x26470070  addiu       $a3, $s2, 0x70
    ctx->pc = 0x3cfaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3cfaac:
    // 0x3cfaac: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x3cfaacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3cfab0:
    // 0x3cfab0: 0xc1109e0  jal         func_442780
label_3cfab4:
    if (ctx->pc == 0x3CFAB4u) {
        ctx->pc = 0x3CFAB4u;
            // 0x3cfab4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3CFAB8u;
        goto label_3cfab8;
    }
    ctx->pc = 0x3CFAB0u;
    SET_GPR_U32(ctx, 31, 0x3CFAB8u);
    ctx->pc = 0x3CFAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFAB0u;
            // 0x3cfab4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFAB8u; }
        if (ctx->pc != 0x3CFAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFAB8u; }
        if (ctx->pc != 0x3CFAB8u) { return; }
    }
    ctx->pc = 0x3CFAB8u;
label_3cfab8:
    // 0x3cfab8: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x3cfab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
label_3cfabc:
    // 0x3cfabc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3cfabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3cfac0:
    // 0x3cfac0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3cfac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3cfac4:
    // 0x3cfac4: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x3cfac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfac8:
    // 0x3cfac8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3cfac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_3cfacc:
    // 0x3cfacc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3cfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_3cfad0:
    // 0x3cfad0: 0xc040180  jal         func_100600
label_3cfad4:
    if (ctx->pc == 0x3CFAD4u) {
        ctx->pc = 0x3CFAD4u;
            // 0x3cfad4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->pc = 0x3CFAD8u;
        goto label_3cfad8;
    }
    ctx->pc = 0x3CFAD0u;
    SET_GPR_U32(ctx, 31, 0x3CFAD8u);
    ctx->pc = 0x3CFAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFAD0u;
            // 0x3cfad4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFAD8u; }
        if (ctx->pc != 0x3CFAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFAD8u; }
        if (ctx->pc != 0x3CFAD8u) { return; }
    }
    ctx->pc = 0x3CFAD8u;
label_3cfad8:
    // 0x3cfad8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3cfadc:
    if (ctx->pc == 0x3CFADCu) {
        ctx->pc = 0x3CFADCu;
            // 0x3cfadc: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x3CFAE0u;
        goto label_3cfae0;
    }
    ctx->pc = 0x3CFAD8u;
    {
        const bool branch_taken_0x3cfad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfad8) {
            ctx->pc = 0x3CFADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFAD8u;
            // 0x3cfadc: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFB0Cu;
            goto label_3cfb0c;
        }
    }
    ctx->pc = 0x3CFAE0u;
label_3cfae0:
    // 0x3cfae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cfae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cfae4:
    // 0x3cfae4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3cfae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cfae8:
    // 0x3cfae8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cfaec:
    // 0x3cfaec: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3cfaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cfaf0:
    // 0x3cfaf0: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x3cfaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cfaf4:
    // 0x3cfaf4: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x3cfaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3cfaf8:
    // 0x3cfaf8: 0x26470074  addiu       $a3, $s2, 0x74
    ctx->pc = 0x3cfaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_3cfafc:
    // 0x3cfafc: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x3cfafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3cfb00:
    // 0x3cfb00: 0xc1109e0  jal         func_442780
label_3cfb04:
    if (ctx->pc == 0x3CFB04u) {
        ctx->pc = 0x3CFB04u;
            // 0x3cfb04: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3CFB08u;
        goto label_3cfb08;
    }
    ctx->pc = 0x3CFB00u;
    SET_GPR_U32(ctx, 31, 0x3CFB08u);
    ctx->pc = 0x3CFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFB00u;
            // 0x3cfb04: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFB08u; }
        if (ctx->pc != 0x3CFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFB08u; }
        if (ctx->pc != 0x3CFB08u) { return; }
    }
    ctx->pc = 0x3CFB08u;
label_3cfb08:
    // 0x3cfb08: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x3cfb08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_3cfb0c:
    // 0x3cfb0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3cfb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3cfb10:
    // 0x3cfb10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3cfb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3cfb14:
    // 0x3cfb14: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3cfb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_3cfb18:
    // 0x3cfb18: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3cfb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cfb1c:
    // 0x3cfb1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cfb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3cfb20:
    // 0x3cfb20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cfb20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cfb24:
    // 0x3cfb24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cfb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cfb28:
    // 0x3cfb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cfb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cfb2c:
    // 0x3cfb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cfb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cfb30:
    // 0x3cfb30: 0x3e00008  jr          $ra
label_3cfb34:
    if (ctx->pc == 0x3CFB34u) {
        ctx->pc = 0x3CFB34u;
            // 0x3cfb34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CFB38u;
        goto label_3cfb38;
    }
    ctx->pc = 0x3CFB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFB30u;
            // 0x3cfb34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CFB38u;
label_3cfb38:
    // 0x3cfb38: 0x0  nop
    ctx->pc = 0x3cfb38u;
    // NOP
label_3cfb3c:
    // 0x3cfb3c: 0x0  nop
    ctx->pc = 0x3cfb3cu;
    // NOP
}
