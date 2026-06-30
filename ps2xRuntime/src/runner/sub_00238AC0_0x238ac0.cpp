#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238AC0
// Address: 0x238ac0 - 0x238bd0
void sub_00238AC0_0x238ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238AC0_0x238ac0");
#endif

    switch (ctx->pc) {
        case 0x238ac0u: goto label_238ac0;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ac8u: goto label_238ac8;
        case 0x238accu: goto label_238acc;
        case 0x238ad0u: goto label_238ad0;
        case 0x238ad4u: goto label_238ad4;
        case 0x238ad8u: goto label_238ad8;
        case 0x238adcu: goto label_238adc;
        case 0x238ae0u: goto label_238ae0;
        case 0x238ae4u: goto label_238ae4;
        case 0x238ae8u: goto label_238ae8;
        case 0x238aecu: goto label_238aec;
        case 0x238af0u: goto label_238af0;
        case 0x238af4u: goto label_238af4;
        case 0x238af8u: goto label_238af8;
        case 0x238afcu: goto label_238afc;
        case 0x238b00u: goto label_238b00;
        case 0x238b04u: goto label_238b04;
        case 0x238b08u: goto label_238b08;
        case 0x238b0cu: goto label_238b0c;
        case 0x238b10u: goto label_238b10;
        case 0x238b14u: goto label_238b14;
        case 0x238b18u: goto label_238b18;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b20u: goto label_238b20;
        case 0x238b24u: goto label_238b24;
        case 0x238b28u: goto label_238b28;
        case 0x238b2cu: goto label_238b2c;
        case 0x238b30u: goto label_238b30;
        case 0x238b34u: goto label_238b34;
        case 0x238b38u: goto label_238b38;
        case 0x238b3cu: goto label_238b3c;
        case 0x238b40u: goto label_238b40;
        case 0x238b44u: goto label_238b44;
        case 0x238b48u: goto label_238b48;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b50u: goto label_238b50;
        case 0x238b54u: goto label_238b54;
        case 0x238b58u: goto label_238b58;
        case 0x238b5cu: goto label_238b5c;
        case 0x238b60u: goto label_238b60;
        case 0x238b64u: goto label_238b64;
        case 0x238b68u: goto label_238b68;
        case 0x238b6cu: goto label_238b6c;
        case 0x238b70u: goto label_238b70;
        case 0x238b74u: goto label_238b74;
        case 0x238b78u: goto label_238b78;
        case 0x238b7cu: goto label_238b7c;
        case 0x238b80u: goto label_238b80;
        case 0x238b84u: goto label_238b84;
        case 0x238b88u: goto label_238b88;
        case 0x238b8cu: goto label_238b8c;
        case 0x238b90u: goto label_238b90;
        case 0x238b94u: goto label_238b94;
        case 0x238b98u: goto label_238b98;
        case 0x238b9cu: goto label_238b9c;
        case 0x238ba0u: goto label_238ba0;
        case 0x238ba4u: goto label_238ba4;
        case 0x238ba8u: goto label_238ba8;
        case 0x238bacu: goto label_238bac;
        case 0x238bb0u: goto label_238bb0;
        case 0x238bb4u: goto label_238bb4;
        case 0x238bb8u: goto label_238bb8;
        case 0x238bbcu: goto label_238bbc;
        case 0x238bc0u: goto label_238bc0;
        case 0x238bc4u: goto label_238bc4;
        case 0x238bc8u: goto label_238bc8;
        case 0x238bccu: goto label_238bcc;
        default: break;
    }

    ctx->pc = 0x238ac0u;

label_238ac0:
    // 0x238ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_238ac4:
    // 0x238ac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_238ac8:
    // 0x238ac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_238acc:
    // 0x238acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_238ad0:
    // 0x238ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238ad4:
    // 0x238ad4: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x238ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_238ad8:
    // 0x238ad8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x238ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_238adc:
    // 0x238adc: 0x80c50010  lb          $a1, 0x10($a2)
    ctx->pc = 0x238adcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_238ae0:
    // 0x238ae0: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_238ae4:
    // 0x238ae4: 0xc58821  addu        $s1, $a2, $a1
    ctx->pc = 0x238ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_238ae8:
    // 0x238ae8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x238ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_238aec:
    // 0x238aec: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x238aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_238af0:
    // 0x238af0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x238af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_238af4:
    // 0x238af4: 0x14460008  bne         $v0, $a2, . + 4 + (0x8 << 2)
label_238af8:
    if (ctx->pc == 0x238AF8u) {
        ctx->pc = 0x238AF8u;
            // 0x238af8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238AFCu;
        goto label_238afc;
    }
    ctx->pc = 0x238AF4u;
    {
        const bool branch_taken_0x238af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x238AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AF4u;
            // 0x238af8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238af4) {
            ctx->pc = 0x238B18u;
            goto label_238b18;
        }
    }
    ctx->pc = 0x238AFCu;
label_238afc:
    // 0x238afc: 0x90450027  lbu         $a1, 0x27($v0)
    ctx->pc = 0x238afcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
label_238b00:
    // 0x238b00: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_238b04:
    // 0x238b04: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x238b04u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_238b08:
    // 0x238b08: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x238b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_238b0c:
    // 0x238b0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x238b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_238b10:
    // 0x238b10: 0x1000001c  b           . + 4 + (0x1C << 2)
label_238b14:
    if (ctx->pc == 0x238B14u) {
        ctx->pc = 0x238B14u;
            // 0x238b14: 0xa0430027  sb          $v1, 0x27($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x238B18u;
        goto label_238b18;
    }
    ctx->pc = 0x238B10u;
    {
        const bool branch_taken_0x238b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B10u;
            // 0x238b14: 0xa0430027  sb          $v1, 0x27($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b10) {
            ctx->pc = 0x238B84u;
            goto label_238b84;
        }
    }
    ctx->pc = 0x238B18u;
label_238b18:
    // 0x238b18: 0x922300a8  lbu         $v1, 0xA8($s1)
    ctx->pc = 0x238b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
label_238b1c:
    // 0x238b1c: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x238b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_238b20:
    // 0x238b20: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x238b20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_238b24:
    // 0x238b24: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_238b28:
    if (ctx->pc == 0x238B28u) {
        ctx->pc = 0x238B28u;
            // 0x238b28: 0x920300a8  lbu         $v1, 0xA8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->pc = 0x238B2Cu;
        goto label_238b2c;
    }
    ctx->pc = 0x238B24u;
    {
        const bool branch_taken_0x238b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238b24) {
            ctx->pc = 0x238B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238B24u;
            // 0x238b28: 0x920300a8  lbu         $v1, 0xA8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238B34u;
            goto label_238b34;
        }
    }
    ctx->pc = 0x238B2Cu;
label_238b2c:
    // 0x238b2c: 0x10000015  b           . + 4 + (0x15 << 2)
label_238b30:
    if (ctx->pc == 0x238B30u) {
        ctx->pc = 0x238B30u;
            // 0x238b30: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238B34u;
        goto label_238b34;
    }
    ctx->pc = 0x238B2Cu;
    {
        const bool branch_taken_0x238b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B2Cu;
            // 0x238b30: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b2c) {
            ctx->pc = 0x238B84u;
            goto label_238b84;
        }
    }
    ctx->pc = 0x238B34u;
label_238b34:
    // 0x238b34: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x238b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_238b38:
    // 0x238b38: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x238b38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_238b3c:
    // 0x238b3c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_238b40:
    if (ctx->pc == 0x238B40u) {
        ctx->pc = 0x238B40u;
            // 0x238b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238B44u;
        goto label_238b44;
    }
    ctx->pc = 0x238B3Cu;
    {
        const bool branch_taken_0x238b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238b3c) {
            ctx->pc = 0x238B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238B3Cu;
            // 0x238b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238B4Cu;
            goto label_238b4c;
        }
    }
    ctx->pc = 0x238B44u;
label_238b44:
    // 0x238b44: 0x10000010  b           . + 4 + (0x10 << 2)
label_238b48:
    if (ctx->pc == 0x238B48u) {
        ctx->pc = 0x238B48u;
            // 0x238b48: 0x8c430018  lw          $v1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x238B4Cu;
        goto label_238b4c;
    }
    ctx->pc = 0x238B44u;
    {
        const bool branch_taken_0x238b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B44u;
            // 0x238b48: 0x8c430018  lw          $v1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b44) {
            ctx->pc = 0x238B88u;
            goto label_238b88;
        }
    }
    ctx->pc = 0x238B4Cu;
label_238b4c:
    // 0x238b4c: 0xc08e308  jal         func_238C20
label_238b50:
    if (ctx->pc == 0x238B50u) {
        ctx->pc = 0x238B54u;
        goto label_238b54;
    }
    ctx->pc = 0x238B4Cu;
    SET_GPR_U32(ctx, 31, 0x238B54u);
    ctx->pc = 0x238C20u;
    if (runtime->hasFunction(0x238C20u)) {
        auto targetFn = runtime->lookupFunction(0x238C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B54u; }
        if (ctx->pc != 0x238B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238C20_0x238c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B54u; }
        if (ctx->pc != 0x238B54u) { return; }
    }
    ctx->pc = 0x238B54u;
label_238b54:
    // 0x238b54: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x238b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_238b58:
    // 0x238b58: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x238b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_238b5c:
    // 0x238b5c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x238b5cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_238b60:
    // 0x238b60: 0x90830027  lbu         $v1, 0x27($a0)
    ctx->pc = 0x238b60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
label_238b64:
    // 0x238b64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x238b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_238b68:
    // 0x238b68: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x238b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_238b6c:
    // 0x238b6c: 0xa0830027  sb          $v1, 0x27($a0)
    ctx->pc = 0x238b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
label_238b70:
    // 0x238b70: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_238b74:
    // 0x238b74: 0x90830027  lbu         $v1, 0x27($a0)
    ctx->pc = 0x238b74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
label_238b78:
    // 0x238b78: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x238b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_238b7c:
    // 0x238b7c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x238b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_238b80:
    // 0x238b80: 0xa0830027  sb          $v1, 0x27($a0)
    ctx->pc = 0x238b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
label_238b84:
    // 0x238b84: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x238b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_238b88:
    // 0x238b88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x238b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238b8c:
    // 0x238b8c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x238b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_238b90:
    // 0x238b90: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x238b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_238b94:
    // 0x238b94: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x238b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_238b98:
    // 0x238b98: 0xc0922f8  jal         func_248BE0
label_238b9c:
    if (ctx->pc == 0x238B9Cu) {
        ctx->pc = 0x238B9Cu;
            // 0x238b9c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238BA0u;
        goto label_238ba0;
    }
    ctx->pc = 0x238B98u;
    SET_GPR_U32(ctx, 31, 0x238BA0u);
    ctx->pc = 0x238B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B98u;
            // 0x238b9c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248BE0u;
    if (runtime->hasFunction(0x248BE0u)) {
        auto targetFn = runtime->lookupFunction(0x248BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BA0u; }
        if (ctx->pc != 0x238BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248BE0_0x248be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BA0u; }
        if (ctx->pc != 0x238BA0u) { return; }
    }
    ctx->pc = 0x238BA0u;
label_238ba0:
    // 0x238ba0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238ba4:
    // 0x238ba4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x238ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_238ba8:
    // 0x238ba8: 0x320f809  jalr        $t9
label_238bac:
    if (ctx->pc == 0x238BACu) {
        ctx->pc = 0x238BACu;
            // 0x238bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238BB0u;
        goto label_238bb0;
    }
    ctx->pc = 0x238BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238BB0u);
        ctx->pc = 0x238BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238BA8u;
            // 0x238bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238BB0u; }
            if (ctx->pc != 0x238BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x238BB0u;
label_238bb0:
    // 0x238bb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_238bb4:
    // 0x238bb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238bb8:
    // 0x238bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238bbc:
    // 0x238bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238bc0:
    // 0x238bc0: 0x3e00008  jr          $ra
label_238bc4:
    if (ctx->pc == 0x238BC4u) {
        ctx->pc = 0x238BC4u;
            // 0x238bc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x238BC8u;
        goto label_238bc8;
    }
    ctx->pc = 0x238BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238BC0u;
            // 0x238bc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238BC8u;
label_238bc8:
    // 0x238bc8: 0x0  nop
    ctx->pc = 0x238bc8u;
    // NOP
label_238bcc:
    // 0x238bcc: 0x0  nop
    ctx->pc = 0x238bccu;
    // NOP
}
