#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175AB0
// Address: 0x175ab0 - 0x175c58
void sub_00175AB0_0x175ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175AB0_0x175ab0");
#endif

    switch (ctx->pc) {
        case 0x175ab0u: goto label_175ab0;
        case 0x175ab4u: goto label_175ab4;
        case 0x175ab8u: goto label_175ab8;
        case 0x175abcu: goto label_175abc;
        case 0x175ac0u: goto label_175ac0;
        case 0x175ac4u: goto label_175ac4;
        case 0x175ac8u: goto label_175ac8;
        case 0x175accu: goto label_175acc;
        case 0x175ad0u: goto label_175ad0;
        case 0x175ad4u: goto label_175ad4;
        case 0x175ad8u: goto label_175ad8;
        case 0x175adcu: goto label_175adc;
        case 0x175ae0u: goto label_175ae0;
        case 0x175ae4u: goto label_175ae4;
        case 0x175ae8u: goto label_175ae8;
        case 0x175aecu: goto label_175aec;
        case 0x175af0u: goto label_175af0;
        case 0x175af4u: goto label_175af4;
        case 0x175af8u: goto label_175af8;
        case 0x175afcu: goto label_175afc;
        case 0x175b00u: goto label_175b00;
        case 0x175b04u: goto label_175b04;
        case 0x175b08u: goto label_175b08;
        case 0x175b0cu: goto label_175b0c;
        case 0x175b10u: goto label_175b10;
        case 0x175b14u: goto label_175b14;
        case 0x175b18u: goto label_175b18;
        case 0x175b1cu: goto label_175b1c;
        case 0x175b20u: goto label_175b20;
        case 0x175b24u: goto label_175b24;
        case 0x175b28u: goto label_175b28;
        case 0x175b2cu: goto label_175b2c;
        case 0x175b30u: goto label_175b30;
        case 0x175b34u: goto label_175b34;
        case 0x175b38u: goto label_175b38;
        case 0x175b3cu: goto label_175b3c;
        case 0x175b40u: goto label_175b40;
        case 0x175b44u: goto label_175b44;
        case 0x175b48u: goto label_175b48;
        case 0x175b4cu: goto label_175b4c;
        case 0x175b50u: goto label_175b50;
        case 0x175b54u: goto label_175b54;
        case 0x175b58u: goto label_175b58;
        case 0x175b5cu: goto label_175b5c;
        case 0x175b60u: goto label_175b60;
        case 0x175b64u: goto label_175b64;
        case 0x175b68u: goto label_175b68;
        case 0x175b6cu: goto label_175b6c;
        case 0x175b70u: goto label_175b70;
        case 0x175b74u: goto label_175b74;
        case 0x175b78u: goto label_175b78;
        case 0x175b7cu: goto label_175b7c;
        case 0x175b80u: goto label_175b80;
        case 0x175b84u: goto label_175b84;
        case 0x175b88u: goto label_175b88;
        case 0x175b8cu: goto label_175b8c;
        case 0x175b90u: goto label_175b90;
        case 0x175b94u: goto label_175b94;
        case 0x175b98u: goto label_175b98;
        case 0x175b9cu: goto label_175b9c;
        case 0x175ba0u: goto label_175ba0;
        case 0x175ba4u: goto label_175ba4;
        case 0x175ba8u: goto label_175ba8;
        case 0x175bacu: goto label_175bac;
        case 0x175bb0u: goto label_175bb0;
        case 0x175bb4u: goto label_175bb4;
        case 0x175bb8u: goto label_175bb8;
        case 0x175bbcu: goto label_175bbc;
        case 0x175bc0u: goto label_175bc0;
        case 0x175bc4u: goto label_175bc4;
        case 0x175bc8u: goto label_175bc8;
        case 0x175bccu: goto label_175bcc;
        case 0x175bd0u: goto label_175bd0;
        case 0x175bd4u: goto label_175bd4;
        case 0x175bd8u: goto label_175bd8;
        case 0x175bdcu: goto label_175bdc;
        case 0x175be0u: goto label_175be0;
        case 0x175be4u: goto label_175be4;
        case 0x175be8u: goto label_175be8;
        case 0x175becu: goto label_175bec;
        case 0x175bf0u: goto label_175bf0;
        case 0x175bf4u: goto label_175bf4;
        case 0x175bf8u: goto label_175bf8;
        case 0x175bfcu: goto label_175bfc;
        case 0x175c00u: goto label_175c00;
        case 0x175c04u: goto label_175c04;
        case 0x175c08u: goto label_175c08;
        case 0x175c0cu: goto label_175c0c;
        case 0x175c10u: goto label_175c10;
        case 0x175c14u: goto label_175c14;
        case 0x175c18u: goto label_175c18;
        case 0x175c1cu: goto label_175c1c;
        case 0x175c20u: goto label_175c20;
        case 0x175c24u: goto label_175c24;
        case 0x175c28u: goto label_175c28;
        case 0x175c2cu: goto label_175c2c;
        case 0x175c30u: goto label_175c30;
        case 0x175c34u: goto label_175c34;
        case 0x175c38u: goto label_175c38;
        case 0x175c3cu: goto label_175c3c;
        case 0x175c40u: goto label_175c40;
        case 0x175c44u: goto label_175c44;
        case 0x175c48u: goto label_175c48;
        case 0x175c4cu: goto label_175c4c;
        case 0x175c50u: goto label_175c50;
        case 0x175c54u: goto label_175c54;
        default: break;
    }

    ctx->pc = 0x175ab0u;

label_175ab0:
    // 0x175ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x175ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_175ab4:
    // 0x175ab4: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x175ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_175ab8:
    // 0x175ab8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x175ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_175abc:
    // 0x175abc: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x175abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
label_175ac0:
    // 0x175ac0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x175ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_175ac4:
    // 0x175ac4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x175ac4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_175ac8:
    // 0x175ac8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x175ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_175acc:
    // 0x175acc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x175accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175ad0:
    // 0x175ad0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x175ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_175ad4:
    // 0x175ad4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x175ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_175ad8:
    // 0x175ad8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x175ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_175adc:
    // 0x175adc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_175ae0:
    // 0x175ae0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x175ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_175ae4:
    // 0x175ae4: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_175ae8:
    // 0x175ae8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x175ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_175aec:
    // 0x175aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175af0:
    // 0x175af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x175af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175af4:
    // 0x175af4: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_175af8:
    // 0x175af8: 0x8c940014  lw          $s4, 0x14($a0)
    ctx->pc = 0x175af8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_175afc:
    // 0x175afc: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
label_175b00:
    if (ctx->pc == 0x175B00u) {
        ctx->pc = 0x175B00u;
            // 0x175b00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B04u;
        goto label_175b04;
    }
    ctx->pc = 0x175AFCu;
    {
        const bool branch_taken_0x175afc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175AFCu;
            // 0x175b00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175afc) {
            ctx->pc = 0x175C30u;
            goto label_175c30;
        }
    }
    ctx->pc = 0x175B04u;
label_175b04:
    // 0x175b04: 0xd09818  mult        $s3, $a2, $s0
    ctx->pc = 0x175b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_175b08:
    // 0x175b08: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x175b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_175b0c:
    // 0x175b0c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x175b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175b10:
    // 0x175b10: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x175b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_175b14:
    // 0x175b14: 0x40f809  jalr        $v0
label_175b18:
    if (ctx->pc == 0x175B18u) {
        ctx->pc = 0x175B18u;
            // 0x175b18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B1Cu;
        goto label_175b1c;
    }
    ctx->pc = 0x175B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175B1Cu);
        ctx->pc = 0x175B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B14u;
            // 0x175b18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175B1Cu; }
            if (ctx->pc != 0x175B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x175B1Cu;
label_175b1c:
    // 0x175b1c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_175b20:
    if (ctx->pc == 0x175B20u) {
        ctx->pc = 0x175B20u;
            // 0x175b20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x175B24u;
        goto label_175b24;
    }
    ctx->pc = 0x175B1Cu;
    {
        const bool branch_taken_0x175b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b1c) {
            ctx->pc = 0x175B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175B1Cu;
            // 0x175b20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x175B24u;
            goto label_175b24;
        }
    }
    ctx->pc = 0x175B24u;
label_175b24:
    // 0x175b24: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_175b28:
    // 0x175b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175b2c:
    // 0x175b2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_175b30:
    // 0x175b30: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x175b30u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_175b34:
    // 0x175b34: 0x1012  mflo        $v0
    ctx->pc = 0x175b34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_175b38:
    // 0x175b38: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x175b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_175b3c:
    // 0x175b3c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x175b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_175b40:
    // 0x175b40: 0xc04a576  jal         func_1295D8
label_175b44:
    if (ctx->pc == 0x175B44u) {
        ctx->pc = 0x175B44u;
            // 0x175b44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B48u;
        goto label_175b48;
    }
    ctx->pc = 0x175B40u;
    SET_GPR_U32(ctx, 31, 0x175B48u);
    ctx->pc = 0x175B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B40u;
            // 0x175b44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B48u; }
        if (ctx->pc != 0x175B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B48u; }
        if (ctx->pc != 0x175B48u) { return; }
    }
    ctx->pc = 0x175B48u;
label_175b48:
    // 0x175b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175b4c:
    // 0x175b4c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x175b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_175b50:
    // 0x175b50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175b54:
    // 0x175b54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x175b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175b58:
    // 0x175b58: 0xc061c20  jal         func_187080
label_175b5c:
    if (ctx->pc == 0x175B5Cu) {
        ctx->pc = 0x175B5Cu;
            // 0x175b5c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B60u;
        goto label_175b60;
    }
    ctx->pc = 0x175B58u;
    SET_GPR_U32(ctx, 31, 0x175B60u);
    ctx->pc = 0x175B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B58u;
            // 0x175b5c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B60u; }
        if (ctx->pc != 0x175B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B60u; }
        if (ctx->pc != 0x175B60u) { return; }
    }
    ctx->pc = 0x175B60u;
label_175b60:
    // 0x175b60: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x175b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_175b64:
    // 0x175b64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x175b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175b68:
    // 0x175b68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_175b6c:
    // 0x175b6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x175b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_175b70:
    // 0x175b70: 0x40f809  jalr        $v0
label_175b74:
    if (ctx->pc == 0x175B74u) {
        ctx->pc = 0x175B74u;
            // 0x175b74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x175B78u;
        goto label_175b78;
    }
    ctx->pc = 0x175B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175B78u);
        ctx->pc = 0x175B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B70u;
            // 0x175b74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175B78u; }
            if (ctx->pc != 0x175B78u) { return; }
        }
        }
    }
    ctx->pc = 0x175B78u;
label_175b78:
    // 0x175b78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x175b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_175b7c:
    // 0x175b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_175b80:
    // 0x175b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175b84:
    // 0x175b84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_175b88:
    // 0x175b88: 0x40f809  jalr        $v0
label_175b8c:
    if (ctx->pc == 0x175B8Cu) {
        ctx->pc = 0x175B8Cu;
            // 0x175b8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B90u;
        goto label_175b90;
    }
    ctx->pc = 0x175B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175B90u);
        ctx->pc = 0x175B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B88u;
            // 0x175b8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175B90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175B90u; }
            if (ctx->pc != 0x175B90u) { return; }
        }
        }
    }
    ctx->pc = 0x175B90u;
label_175b90:
    // 0x175b90: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x175b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_175b94:
    // 0x175b94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x175b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175b98:
    // 0x175b98: 0x2713023  subu        $a2, $s3, $s1
    ctx->pc = 0x175b98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_175b9c:
    // 0x175b9c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_175ba0:
    // 0x175ba0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_175ba4:
    // 0x175ba4: 0x40f809  jalr        $v0
label_175ba8:
    if (ctx->pc == 0x175BA8u) {
        ctx->pc = 0x175BA8u;
            // 0x175ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175BACu;
        goto label_175bac;
    }
    ctx->pc = 0x175BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175BACu);
        ctx->pc = 0x175BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175BA4u;
            // 0x175ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175BACu; }
            if (ctx->pc != 0x175BACu) { return; }
        }
        }
    }
    ctx->pc = 0x175BACu;
label_175bac:
    // 0x175bac: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_175bb0:
    if (ctx->pc == 0x175BB0u) {
        ctx->pc = 0x175BB0u;
            // 0x175bb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x175BB4u;
        goto label_175bb4;
    }
    ctx->pc = 0x175BACu;
    {
        const bool branch_taken_0x175bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bac) {
            ctx->pc = 0x175BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175BACu;
            // 0x175bb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x175BB4u;
            goto label_175bb4;
        }
    }
    ctx->pc = 0x175BB4u;
label_175bb4:
    // 0x175bb4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x175bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_175bb8:
    // 0x175bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175bbc:
    // 0x175bbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_175bc0:
    // 0x175bc0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x175bc0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_175bc4:
    // 0x175bc4: 0x1012  mflo        $v0
    ctx->pc = 0x175bc4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_175bc8:
    // 0x175bc8: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x175bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_175bcc:
    // 0x175bcc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x175bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_175bd0:
    // 0x175bd0: 0xc04a576  jal         func_1295D8
label_175bd4:
    if (ctx->pc == 0x175BD4u) {
        ctx->pc = 0x175BD4u;
            // 0x175bd4: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->pc = 0x175BD8u;
        goto label_175bd8;
    }
    ctx->pc = 0x175BD0u;
    SET_GPR_U32(ctx, 31, 0x175BD8u);
    ctx->pc = 0x175BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BD0u;
            // 0x175bd4: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BD8u; }
        if (ctx->pc != 0x175BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BD8u; }
        if (ctx->pc != 0x175BD8u) { return; }
    }
    ctx->pc = 0x175BD8u;
label_175bd8:
    // 0x175bd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x175bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_175bdc:
    // 0x175bdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175be0:
    // 0x175be0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x175be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175be4:
    // 0x175be4: 0xc061c20  jal         func_187080
label_175be8:
    if (ctx->pc == 0x175BE8u) {
        ctx->pc = 0x175BE8u;
            // 0x175be8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175BECu;
        goto label_175bec;
    }
    ctx->pc = 0x175BE4u;
    SET_GPR_U32(ctx, 31, 0x175BECu);
    ctx->pc = 0x175BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BE4u;
            // 0x175be8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BECu; }
        if (ctx->pc != 0x175BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BECu; }
        if (ctx->pc != 0x175BECu) { return; }
    }
    ctx->pc = 0x175BECu;
label_175bec:
    // 0x175bec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x175becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_175bf0:
    // 0x175bf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x175bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175bf4:
    // 0x175bf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_175bf8:
    // 0x175bf8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x175bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_175bfc:
    // 0x175bfc: 0x40f809  jalr        $v0
label_175c00:
    if (ctx->pc == 0x175C00u) {
        ctx->pc = 0x175C00u;
            // 0x175c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x175C04u;
        goto label_175c04;
    }
    ctx->pc = 0x175BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175C04u);
        ctx->pc = 0x175C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175BFCu;
            // 0x175c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175C04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175C04u; }
            if (ctx->pc != 0x175C04u) { return; }
        }
        }
    }
    ctx->pc = 0x175C04u;
label_175c04:
    // 0x175c04: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x175c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_175c08:
    // 0x175c08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_175c0c:
    // 0x175c0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x175c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_175c10:
    // 0x175c10: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_175c14:
    // 0x175c14: 0x40f809  jalr        $v0
label_175c18:
    if (ctx->pc == 0x175C18u) {
        ctx->pc = 0x175C18u;
            // 0x175c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175C1Cu;
        goto label_175c1c;
    }
    ctx->pc = 0x175C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175C1Cu);
        ctx->pc = 0x175C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C14u;
            // 0x175c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175C1Cu; }
            if (ctx->pc != 0x175C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x175C1Cu;
label_175c1c:
    // 0x175c1c: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x175c1cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_175c20:
    // 0x175c20: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_175c24:
    if (ctx->pc == 0x175C24u) {
        ctx->pc = 0x175C24u;
            // 0x175c24: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x175C28u;
        goto label_175c28;
    }
    ctx->pc = 0x175C20u;
    {
        const bool branch_taken_0x175c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c20) {
            ctx->pc = 0x175C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175C20u;
            // 0x175c24: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x175C28u;
            goto label_175c28;
        }
    }
    ctx->pc = 0x175C28u;
label_175c28:
    // 0x175c28: 0x8812  mflo        $s1
    ctx->pc = 0x175c28u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_175c2c:
    // 0x175c2c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x175c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_175c30:
    // 0x175c30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x175c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175c34:
    // 0x175c34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x175c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_175c38:
    // 0x175c38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x175c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175c3c:
    // 0x175c3c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x175c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_175c40:
    // 0x175c40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x175c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175c44:
    // 0x175c44: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x175c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_175c48:
    // 0x175c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x175c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_175c4c:
    // 0x175c4c: 0x3e00008  jr          $ra
label_175c50:
    if (ctx->pc == 0x175C50u) {
        ctx->pc = 0x175C50u;
            // 0x175c50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x175C54u;
        goto label_175c54;
    }
    ctx->pc = 0x175C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C4Cu;
            // 0x175c50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175C54u;
label_175c54:
    // 0x175c54: 0x0  nop
    ctx->pc = 0x175c54u;
    // NOP
}
