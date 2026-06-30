#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022FB10
// Address: 0x22fb10 - 0x22fc80
void sub_0022FB10_0x22fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FB10_0x22fb10");
#endif

    switch (ctx->pc) {
        case 0x22fb10u: goto label_22fb10;
        case 0x22fb14u: goto label_22fb14;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fb1cu: goto label_22fb1c;
        case 0x22fb20u: goto label_22fb20;
        case 0x22fb24u: goto label_22fb24;
        case 0x22fb28u: goto label_22fb28;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb30u: goto label_22fb30;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb3cu: goto label_22fb3c;
        case 0x22fb40u: goto label_22fb40;
        case 0x22fb44u: goto label_22fb44;
        case 0x22fb48u: goto label_22fb48;
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb50u: goto label_22fb50;
        case 0x22fb54u: goto label_22fb54;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb5cu: goto label_22fb5c;
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fb68u: goto label_22fb68;
        case 0x22fb6cu: goto label_22fb6c;
        case 0x22fb70u: goto label_22fb70;
        case 0x22fb74u: goto label_22fb74;
        case 0x22fb78u: goto label_22fb78;
        case 0x22fb7cu: goto label_22fb7c;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb84u: goto label_22fb84;
        case 0x22fb88u: goto label_22fb88;
        case 0x22fb8cu: goto label_22fb8c;
        case 0x22fb90u: goto label_22fb90;
        case 0x22fb94u: goto label_22fb94;
        case 0x22fb98u: goto label_22fb98;
        case 0x22fb9cu: goto label_22fb9c;
        case 0x22fba0u: goto label_22fba0;
        case 0x22fba4u: goto label_22fba4;
        case 0x22fba8u: goto label_22fba8;
        case 0x22fbacu: goto label_22fbac;
        case 0x22fbb0u: goto label_22fbb0;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbbcu: goto label_22fbbc;
        case 0x22fbc0u: goto label_22fbc0;
        case 0x22fbc4u: goto label_22fbc4;
        case 0x22fbc8u: goto label_22fbc8;
        case 0x22fbccu: goto label_22fbcc;
        case 0x22fbd0u: goto label_22fbd0;
        case 0x22fbd4u: goto label_22fbd4;
        case 0x22fbd8u: goto label_22fbd8;
        case 0x22fbdcu: goto label_22fbdc;
        case 0x22fbe0u: goto label_22fbe0;
        case 0x22fbe4u: goto label_22fbe4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbecu: goto label_22fbec;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fbf8u: goto label_22fbf8;
        case 0x22fbfcu: goto label_22fbfc;
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc04u: goto label_22fc04;
        case 0x22fc08u: goto label_22fc08;
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc10u: goto label_22fc10;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc18u: goto label_22fc18;
        case 0x22fc1cu: goto label_22fc1c;
        case 0x22fc20u: goto label_22fc20;
        case 0x22fc24u: goto label_22fc24;
        case 0x22fc28u: goto label_22fc28;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc30u: goto label_22fc30;
        case 0x22fc34u: goto label_22fc34;
        case 0x22fc38u: goto label_22fc38;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc44u: goto label_22fc44;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fc4cu: goto label_22fc4c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc54u: goto label_22fc54;
        case 0x22fc58u: goto label_22fc58;
        case 0x22fc5cu: goto label_22fc5c;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc64u: goto label_22fc64;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc6cu: goto label_22fc6c;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc74u: goto label_22fc74;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc7cu: goto label_22fc7c;
        default: break;
    }

    ctx->pc = 0x22fb10u;

label_22fb10:
    // 0x22fb10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22fb14:
    // 0x22fb14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22fb18:
    // 0x22fb18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22fb1c:
    // 0x22fb1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22fb20:
    // 0x22fb20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22fb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22fb24:
    // 0x22fb24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22fb28:
    // 0x22fb28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22fb28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22fb2c:
    // 0x22fb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22fb30:
    // 0x22fb30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22fb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fb34:
    // 0x22fb34: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x22fb34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22fb38:
    // 0x22fb38: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_22fb3c:
    // 0x22fb3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22fb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22fb40:
    // 0x22fb40: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_22fb44:
    // 0x22fb44: 0x320f809  jalr        $t9
label_22fb48:
    if (ctx->pc == 0x22FB48u) {
        ctx->pc = 0x22FB48u;
            // 0x22fb48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FB4Cu;
        goto label_22fb4c;
    }
    ctx->pc = 0x22FB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FB4Cu);
        ctx->pc = 0x22FB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB44u;
            // 0x22fb48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FB4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FB4Cu; }
            if (ctx->pc != 0x22FB4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22FB4Cu;
label_22fb4c:
    // 0x22fb4c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22fb50:
    // 0x22fb50: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x22fb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_22fb54:
    // 0x22fb54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22fb58:
    // 0x22fb58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22fb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22fb5c:
    // 0x22fb5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22fb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fb60:
    // 0x22fb60: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x22fb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_22fb64:
    // 0x22fb64: 0x320f809  jalr        $t9
label_22fb68:
    if (ctx->pc == 0x22FB68u) {
        ctx->pc = 0x22FB68u;
            // 0x22fb68: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FB6Cu;
        goto label_22fb6c;
    }
    ctx->pc = 0x22FB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FB6Cu);
        ctx->pc = 0x22FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB64u;
            // 0x22fb68: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FB6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FB6Cu; }
            if (ctx->pc != 0x22FB6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22FB6Cu;
label_22fb6c:
    // 0x22fb6c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22fb70:
    // 0x22fb70: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22fb74:
    // 0x22fb74: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_22fb78:
    if (ctx->pc == 0x22FB78u) {
        ctx->pc = 0x22FB78u;
            // 0x22fb78: 0x83a3005c  lb          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x22FB7Cu;
        goto label_22fb7c;
    }
    ctx->pc = 0x22FB74u;
    {
        const bool branch_taken_0x22fb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb74) {
            ctx->pc = 0x22FB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB74u;
            // 0x22fb78: 0x83a3005c  lb          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FBF4u;
            goto label_22fbf4;
        }
    }
    ctx->pc = 0x22FB7Cu;
label_22fb7c:
    // 0x22fb7c: 0x83a3005c  lb          $v1, 0x5C($sp)
    ctx->pc = 0x22fb7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
label_22fb80:
    // 0x22fb80: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_22fb84:
    if (ctx->pc == 0x22FB84u) {
        ctx->pc = 0x22FB84u;
            // 0x22fb84: 0x82240018  lb          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x22FB88u;
        goto label_22fb88;
    }
    ctx->pc = 0x22FB80u;
    {
        const bool branch_taken_0x22fb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb80) {
            ctx->pc = 0x22FB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB80u;
            // 0x22fb84: 0x82240018  lb          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FBA0u;
            goto label_22fba0;
        }
    }
    ctx->pc = 0x22FB88u;
label_22fb88:
    // 0x22fb88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22fb8c:
    // 0x22fb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22fb90:
    // 0x22fb90: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22fb94:
    // 0x22fb94: 0x320f809  jalr        $t9
label_22fb98:
    if (ctx->pc == 0x22FB98u) {
        ctx->pc = 0x22FB98u;
            // 0x22fb98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FB9Cu;
        goto label_22fb9c;
    }
    ctx->pc = 0x22FB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FB9Cu);
        ctx->pc = 0x22FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB94u;
            // 0x22fb98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FB9Cu; }
            if (ctx->pc != 0x22FB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22FB9Cu;
label_22fb9c:
    // 0x22fb9c: 0x82240018  lb          $a0, 0x18($s1)
    ctx->pc = 0x22fb9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_22fba0:
    // 0x22fba0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22fba4:
    // 0x22fba4: 0x5483002f  bnel        $a0, $v1, . + 4 + (0x2F << 2)
label_22fba8:
    if (ctx->pc == 0x22FBA8u) {
        ctx->pc = 0x22FBA8u;
            // 0x22fba8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x22FBACu;
        goto label_22fbac;
    }
    ctx->pc = 0x22FBA4u;
    {
        const bool branch_taken_0x22fba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fba4) {
            ctx->pc = 0x22FBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBA4u;
            // 0x22fba8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FC64u;
            goto label_22fc64;
        }
    }
    ctx->pc = 0x22FBACu;
label_22fbac:
    // 0x22fbac: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x22fbacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_22fbb0:
    // 0x22fbb0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_22fbb4:
    // 0x22fbb4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22fbb8:
    // 0x22fbb8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22fbbc:
    // 0x22fbbc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_22fbc0:
    // 0x22fbc0: 0x320f809  jalr        $t9
label_22fbc4:
    if (ctx->pc == 0x22FBC4u) {
        ctx->pc = 0x22FBC4u;
            // 0x22fbc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FBC8u;
        goto label_22fbc8;
    }
    ctx->pc = 0x22FBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FBC8u);
        ctx->pc = 0x22FBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBC0u;
            // 0x22fbc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FBC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FBC8u; }
            if (ctx->pc != 0x22FBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x22FBC8u;
label_22fbc8:
    // 0x22fbc8: 0x83a30058  lb          $v1, 0x58($sp)
    ctx->pc = 0x22fbc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
label_22fbcc:
    // 0x22fbcc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_22fbd0:
    if (ctx->pc == 0x22FBD0u) {
        ctx->pc = 0x22FBD4u;
        goto label_22fbd4;
    }
    ctx->pc = 0x22FBCCu;
    {
        const bool branch_taken_0x22fbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fbcc) {
            ctx->pc = 0x22FC60u;
            goto label_22fc60;
        }
    }
    ctx->pc = 0x22FBD4u;
label_22fbd4:
    // 0x22fbd4: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_22fbd8:
    // 0x22fbd8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22fbdc:
    // 0x22fbdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22fbe0:
    // 0x22fbe0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22fbe4:
    // 0x22fbe4: 0x320f809  jalr        $t9
label_22fbe8:
    if (ctx->pc == 0x22FBE8u) {
        ctx->pc = 0x22FBE8u;
            // 0x22fbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FBECu;
        goto label_22fbec;
    }
    ctx->pc = 0x22FBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FBECu);
        ctx->pc = 0x22FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBE4u;
            // 0x22fbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FBECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FBECu; }
            if (ctx->pc != 0x22FBECu) { return; }
        }
        }
    }
    ctx->pc = 0x22FBECu;
label_22fbec:
    // 0x22fbec: 0x1000001c  b           . + 4 + (0x1C << 2)
label_22fbf0:
    if (ctx->pc == 0x22FBF0u) {
        ctx->pc = 0x22FBF4u;
        goto label_22fbf4;
    }
    ctx->pc = 0x22FBECu;
    {
        const bool branch_taken_0x22fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbec) {
            ctx->pc = 0x22FC60u;
            goto label_22fc60;
        }
    }
    ctx->pc = 0x22FBF4u;
label_22fbf4:
    // 0x22fbf4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_22fbf8:
    if (ctx->pc == 0x22FBF8u) {
        ctx->pc = 0x22FBF8u;
            // 0x22fbf8: 0x82240018  lb          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x22FBFCu;
        goto label_22fbfc;
    }
    ctx->pc = 0x22FBF4u;
    {
        const bool branch_taken_0x22fbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbf4) {
            ctx->pc = 0x22FBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBF4u;
            // 0x22fbf8: 0x82240018  lb          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FC14u;
            goto label_22fc14;
        }
    }
    ctx->pc = 0x22FBFCu;
label_22fbfc:
    // 0x22fbfc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22fc00:
    // 0x22fc00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22fc04:
    // 0x22fc04: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_22fc08:
    // 0x22fc08: 0x320f809  jalr        $t9
label_22fc0c:
    if (ctx->pc == 0x22FC0Cu) {
        ctx->pc = 0x22FC0Cu;
            // 0x22fc0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FC10u;
        goto label_22fc10;
    }
    ctx->pc = 0x22FC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FC10u);
        ctx->pc = 0x22FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC08u;
            // 0x22fc0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FC10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FC10u; }
            if (ctx->pc != 0x22FC10u) { return; }
        }
        }
    }
    ctx->pc = 0x22FC10u;
label_22fc10:
    // 0x22fc10: 0x82240018  lb          $a0, 0x18($s1)
    ctx->pc = 0x22fc10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_22fc14:
    // 0x22fc14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22fc18:
    // 0x22fc18: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_22fc1c:
    if (ctx->pc == 0x22FC1Cu) {
        ctx->pc = 0x22FC20u;
        goto label_22fc20;
    }
    ctx->pc = 0x22FC18u;
    {
        const bool branch_taken_0x22fc18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fc18) {
            ctx->pc = 0x22FC60u;
            goto label_22fc60;
        }
    }
    ctx->pc = 0x22FC20u;
label_22fc20:
    // 0x22fc20: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_22fc24:
    // 0x22fc24: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_22fc28:
    // 0x22fc28: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x22fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22fc2c:
    // 0x22fc2c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22fc30:
    // 0x22fc30: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_22fc34:
    // 0x22fc34: 0x320f809  jalr        $t9
label_22fc38:
    if (ctx->pc == 0x22FC38u) {
        ctx->pc = 0x22FC38u;
            // 0x22fc38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FC3Cu;
        goto label_22fc3c;
    }
    ctx->pc = 0x22FC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FC3Cu);
        ctx->pc = 0x22FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC34u;
            // 0x22fc38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FC3Cu; }
            if (ctx->pc != 0x22FC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22FC3Cu;
label_22fc3c:
    // 0x22fc3c: 0x83a30054  lb          $v1, 0x54($sp)
    ctx->pc = 0x22fc3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 84)));
label_22fc40:
    // 0x22fc40: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_22fc44:
    if (ctx->pc == 0x22FC44u) {
        ctx->pc = 0x22FC48u;
        goto label_22fc48;
    }
    ctx->pc = 0x22FC40u;
    {
        const bool branch_taken_0x22fc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc40) {
            ctx->pc = 0x22FC60u;
            goto label_22fc60;
        }
    }
    ctx->pc = 0x22FC48u;
label_22fc48:
    // 0x22fc48: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x22fc48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_22fc4c:
    // 0x22fc4c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x22fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22fc50:
    // 0x22fc50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22fc50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22fc54:
    // 0x22fc54: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_22fc58:
    // 0x22fc58: 0x320f809  jalr        $t9
label_22fc5c:
    if (ctx->pc == 0x22FC5Cu) {
        ctx->pc = 0x22FC5Cu;
            // 0x22fc5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FC60u;
        goto label_22fc60;
    }
    ctx->pc = 0x22FC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FC60u);
        ctx->pc = 0x22FC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC58u;
            // 0x22fc5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FC60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FC60u; }
            if (ctx->pc != 0x22FC60u) { return; }
        }
        }
    }
    ctx->pc = 0x22FC60u;
label_22fc60:
    // 0x22fc60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22fc64:
    // 0x22fc64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22fc64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22fc68:
    // 0x22fc68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22fc68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22fc6c:
    // 0x22fc6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22fc70:
    // 0x22fc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22fc74:
    // 0x22fc74: 0x3e00008  jr          $ra
label_22fc78:
    if (ctx->pc == 0x22FC78u) {
        ctx->pc = 0x22FC78u;
            // 0x22fc78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22FC7Cu;
        goto label_22fc7c;
    }
    ctx->pc = 0x22FC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC74u;
            // 0x22fc78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FC7Cu;
label_22fc7c:
    // 0x22fc7c: 0x0  nop
    ctx->pc = 0x22fc7cu;
    // NOP
}
