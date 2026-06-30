#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174DE8
// Address: 0x174de8 - 0x174f50
void sub_00174DE8_0x174de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174DE8_0x174de8");
#endif

    switch (ctx->pc) {
        case 0x174de8u: goto label_174de8;
        case 0x174decu: goto label_174dec;
        case 0x174df0u: goto label_174df0;
        case 0x174df4u: goto label_174df4;
        case 0x174df8u: goto label_174df8;
        case 0x174dfcu: goto label_174dfc;
        case 0x174e00u: goto label_174e00;
        case 0x174e04u: goto label_174e04;
        case 0x174e08u: goto label_174e08;
        case 0x174e0cu: goto label_174e0c;
        case 0x174e10u: goto label_174e10;
        case 0x174e14u: goto label_174e14;
        case 0x174e18u: goto label_174e18;
        case 0x174e1cu: goto label_174e1c;
        case 0x174e20u: goto label_174e20;
        case 0x174e24u: goto label_174e24;
        case 0x174e28u: goto label_174e28;
        case 0x174e2cu: goto label_174e2c;
        case 0x174e30u: goto label_174e30;
        case 0x174e34u: goto label_174e34;
        case 0x174e38u: goto label_174e38;
        case 0x174e3cu: goto label_174e3c;
        case 0x174e40u: goto label_174e40;
        case 0x174e44u: goto label_174e44;
        case 0x174e48u: goto label_174e48;
        case 0x174e4cu: goto label_174e4c;
        case 0x174e50u: goto label_174e50;
        case 0x174e54u: goto label_174e54;
        case 0x174e58u: goto label_174e58;
        case 0x174e5cu: goto label_174e5c;
        case 0x174e60u: goto label_174e60;
        case 0x174e64u: goto label_174e64;
        case 0x174e68u: goto label_174e68;
        case 0x174e6cu: goto label_174e6c;
        case 0x174e70u: goto label_174e70;
        case 0x174e74u: goto label_174e74;
        case 0x174e78u: goto label_174e78;
        case 0x174e7cu: goto label_174e7c;
        case 0x174e80u: goto label_174e80;
        case 0x174e84u: goto label_174e84;
        case 0x174e88u: goto label_174e88;
        case 0x174e8cu: goto label_174e8c;
        case 0x174e90u: goto label_174e90;
        case 0x174e94u: goto label_174e94;
        case 0x174e98u: goto label_174e98;
        case 0x174e9cu: goto label_174e9c;
        case 0x174ea0u: goto label_174ea0;
        case 0x174ea4u: goto label_174ea4;
        case 0x174ea8u: goto label_174ea8;
        case 0x174eacu: goto label_174eac;
        case 0x174eb0u: goto label_174eb0;
        case 0x174eb4u: goto label_174eb4;
        case 0x174eb8u: goto label_174eb8;
        case 0x174ebcu: goto label_174ebc;
        case 0x174ec0u: goto label_174ec0;
        case 0x174ec4u: goto label_174ec4;
        case 0x174ec8u: goto label_174ec8;
        case 0x174eccu: goto label_174ecc;
        case 0x174ed0u: goto label_174ed0;
        case 0x174ed4u: goto label_174ed4;
        case 0x174ed8u: goto label_174ed8;
        case 0x174edcu: goto label_174edc;
        case 0x174ee0u: goto label_174ee0;
        case 0x174ee4u: goto label_174ee4;
        case 0x174ee8u: goto label_174ee8;
        case 0x174eecu: goto label_174eec;
        case 0x174ef0u: goto label_174ef0;
        case 0x174ef4u: goto label_174ef4;
        case 0x174ef8u: goto label_174ef8;
        case 0x174efcu: goto label_174efc;
        case 0x174f00u: goto label_174f00;
        case 0x174f04u: goto label_174f04;
        case 0x174f08u: goto label_174f08;
        case 0x174f0cu: goto label_174f0c;
        case 0x174f10u: goto label_174f10;
        case 0x174f14u: goto label_174f14;
        case 0x174f18u: goto label_174f18;
        case 0x174f1cu: goto label_174f1c;
        case 0x174f20u: goto label_174f20;
        case 0x174f24u: goto label_174f24;
        case 0x174f28u: goto label_174f28;
        case 0x174f2cu: goto label_174f2c;
        case 0x174f30u: goto label_174f30;
        case 0x174f34u: goto label_174f34;
        case 0x174f38u: goto label_174f38;
        case 0x174f3cu: goto label_174f3c;
        case 0x174f40u: goto label_174f40;
        case 0x174f44u: goto label_174f44;
        case 0x174f48u: goto label_174f48;
        case 0x174f4cu: goto label_174f4c;
        default: break;
    }

    ctx->pc = 0x174de8u;

label_174de8:
    // 0x174de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174dec:
    // 0x174dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_174df0:
    // 0x174df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174df4:
    // 0x174df4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x174df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_174df8:
    // 0x174df8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x174df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174dfc:
    // 0x174dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174e00:
    // 0x174e00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_174e04:
    // 0x174e04: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_174e08:
    if (ctx->pc == 0x174E08u) {
        ctx->pc = 0x174E08u;
            // 0x174e08: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x174E0Cu;
        goto label_174e0c;
    }
    ctx->pc = 0x174E04u;
    {
        const bool branch_taken_0x174e04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E04u;
            // 0x174e08: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e04) {
            ctx->pc = 0x174E30u;
            goto label_174e30;
        }
    }
    ctx->pc = 0x174E0Cu;
label_174e0c:
    // 0x174e0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_174e10:
    // 0x174e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174e14:
    // 0x174e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174e18:
    // 0x174e18: 0x248446a0  addiu       $a0, $a0, 0x46A0
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
label_174e1c:
    // 0x174e1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174e20:
    // 0x174e20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x174e20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_174e24:
    // 0x174e24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174e28:
    // 0x174e28: 0x8059f4e  j           func_167D38
label_174e2c:
    if (ctx->pc == 0x174E2Cu) {
        ctx->pc = 0x174E2Cu;
            // 0x174e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x174E30u;
        goto label_174e30;
    }
    ctx->pc = 0x174E28u;
    ctx->pc = 0x174E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E28u;
            // 0x174e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174E30u;
label_174e30:
    // 0x174e30: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x174e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_174e34:
    // 0x174e34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_174e38:
    if (ctx->pc == 0x174E38u) {
        ctx->pc = 0x174E38u;
            // 0x174e38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174E3Cu;
        goto label_174e3c;
    }
    ctx->pc = 0x174E34u;
    {
        const bool branch_taken_0x174e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E34u;
            // 0x174e38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e34) {
            ctx->pc = 0x174E50u;
            goto label_174e50;
        }
    }
    ctx->pc = 0x174E3Cu;
label_174e3c:
    // 0x174e3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x174e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174e40:
    // 0x174e40: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_174e44:
    // 0x174e44: 0x40f809  jalr        $v0
label_174e48:
    if (ctx->pc == 0x174E48u) {
        ctx->pc = 0x174E48u;
            // 0x174e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174E4Cu;
        goto label_174e4c;
    }
    ctx->pc = 0x174E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174E4Cu);
        ctx->pc = 0x174E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E44u;
            // 0x174e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174E4Cu; }
            if (ctx->pc != 0x174E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x174E4Cu;
label_174e4c:
    // 0x174e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e50:
    // 0x174e50: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x174e50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_174e54:
    // 0x174e54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x174e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174e58:
    // 0x174e58: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_174e5c:
    if (ctx->pc == 0x174E5Cu) {
        ctx->pc = 0x174E5Cu;
            // 0x174e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174E60u;
        goto label_174e60;
    }
    ctx->pc = 0x174E58u;
    {
        const bool branch_taken_0x174e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E58u;
            // 0x174e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e58) {
            ctx->pc = 0x174EF4u;
            goto label_174ef4;
        }
    }
    ctx->pc = 0x174E60u;
label_174e60:
    // 0x174e60: 0x8223006c  lb          $v1, 0x6C($s1)
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_174e64:
    // 0x174e64: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_174e68:
    if (ctx->pc == 0x174E68u) {
        ctx->pc = 0x174E68u;
            // 0x174e68: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x174E6Cu;
        goto label_174e6c;
    }
    ctx->pc = 0x174E64u;
    {
        const bool branch_taken_0x174e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174e64) {
            ctx->pc = 0x174E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174E64u;
            // 0x174e68: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174EF8u;
            goto label_174ef8;
        }
    }
    ctx->pc = 0x174E6Cu;
label_174e6c:
    // 0x174e6c: 0x56600022  bnel        $s3, $zero, . + 4 + (0x22 << 2)
label_174e70:
    if (ctx->pc == 0x174E70u) {
        ctx->pc = 0x174E70u;
            // 0x174e70: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x174E74u;
        goto label_174e74;
    }
    ctx->pc = 0x174E6Cu;
    {
        const bool branch_taken_0x174e6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e6c) {
            ctx->pc = 0x174E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174E6Cu;
            // 0x174e70: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174EF8u;
            goto label_174ef8;
        }
    }
    ctx->pc = 0x174E74u;
label_174e74:
    // 0x174e74: 0xc05bfde  jal         func_16FF78
label_174e78:
    if (ctx->pc == 0x174E78u) {
        ctx->pc = 0x174E78u;
            // 0x174e78: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x174E7Cu;
        goto label_174e7c;
    }
    ctx->pc = 0x174E74u;
    SET_GPR_U32(ctx, 31, 0x174E7Cu);
    ctx->pc = 0x174E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E74u;
            // 0x174e78: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF78u;
    if (runtime->hasFunction(0x16FF78u)) {
        auto targetFn = runtime->lookupFunction(0x16FF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E7Cu; }
        if (ctx->pc != 0x174E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FF78_0x16ff78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E7Cu; }
        if (ctx->pc != 0x174E7Cu) { return; }
    }
    ctx->pc = 0x174E7Cu;
label_174e7c:
    // 0x174e7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_174e80:
    // 0x174e80: 0xc05c082  jal         func_170208
label_174e84:
    if (ctx->pc == 0x174E84u) {
        ctx->pc = 0x174E84u;
            // 0x174e84: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x174E88u;
        goto label_174e88;
    }
    ctx->pc = 0x174E80u;
    SET_GPR_U32(ctx, 31, 0x174E88u);
    ctx->pc = 0x174E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E80u;
            // 0x174e84: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170208u;
    if (runtime->hasFunction(0x170208u)) {
        auto targetFn = runtime->lookupFunction(0x170208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E88u; }
        if (ctx->pc != 0x174E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170208_0x170208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E88u; }
        if (ctx->pc != 0x174E88u) { return; }
    }
    ctx->pc = 0x174E88u;
label_174e88:
    // 0x174e88: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_174e8c:
    // 0x174e8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e90:
    // 0x174e90: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x174e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_174e94:
    // 0x174e94: 0x26050ffe  addiu       $a1, $s0, 0xFFE
    ctx->pc = 0x174e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4094));
label_174e98:
    // 0x174e98: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x174e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_174e9c:
    // 0x174e9c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x174e9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_174ea0:
    // 0x174ea0: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x174ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_174ea4:
    // 0x174ea4: 0xc05c094  jal         func_170250
label_174ea8:
    if (ctx->pc == 0x174EA8u) {
        ctx->pc = 0x174EA8u;
            // 0x174ea8: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->pc = 0x174EACu;
        goto label_174eac;
    }
    ctx->pc = 0x174EA4u;
    SET_GPR_U32(ctx, 31, 0x174EACu);
    ctx->pc = 0x174EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174EA4u;
            // 0x174ea8: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170250u;
    if (runtime->hasFunction(0x170250u)) {
        auto targetFn = runtime->lookupFunction(0x170250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EACu; }
        if (ctx->pc != 0x174EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170250_0x170250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EACu; }
        if (ctx->pc != 0x174EACu) { return; }
    }
    ctx->pc = 0x174EACu;
label_174eac:
    // 0x174eac: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x174eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_174eb0:
    // 0x174eb0: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x174eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
label_174eb4:
    // 0x174eb4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x174eb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_174eb8:
    // 0x174eb8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x174eb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_174ebc:
    // 0x174ebc: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x174ebcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_174ec0:
    // 0x174ec0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_174ec4:
    // 0x174ec4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x174ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_174ec8:
    // 0x174ec8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_174ecc:
    if (ctx->pc == 0x174ECCu) {
        ctx->pc = 0x174ECCu;
            // 0x174ecc: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x174ED0u;
        goto label_174ed0;
    }
    ctx->pc = 0x174EC8u;
    {
        const bool branch_taken_0x174ec8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x174ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174EC8u;
            // 0x174ecc: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ec8) {
            ctx->pc = 0x174ED8u;
            goto label_174ed8;
        }
    }
    ctx->pc = 0x174ED0u;
label_174ed0:
    // 0x174ed0: 0x10000008  b           . + 4 + (0x8 << 2)
label_174ed4:
    if (ctx->pc == 0x174ED4u) {
        ctx->pc = 0x174ED4u;
            // 0x174ed4: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x174ED8u;
        goto label_174ed8;
    }
    ctx->pc = 0x174ED0u;
    {
        const bool branch_taken_0x174ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174ED0u;
            // 0x174ed4: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed0) {
            ctx->pc = 0x174EF4u;
            goto label_174ef4;
        }
    }
    ctx->pc = 0x174ED8u;
label_174ed8:
    // 0x174ed8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_174edc:
    if (ctx->pc == 0x174EDCu) {
        ctx->pc = 0x174EDCu;
            // 0x174edc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x174EE0u;
        goto label_174ee0;
    }
    ctx->pc = 0x174ED8u;
    {
        const bool branch_taken_0x174ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174ed8) {
            ctx->pc = 0x174EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174ED8u;
            // 0x174edc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x174EE0u;
            goto label_174ee0;
        }
    }
    ctx->pc = 0x174EE0u;
label_174ee0:
    // 0x174ee0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x174ee0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_174ee4:
    // 0x174ee4: 0x1012  mflo        $v0
    ctx->pc = 0x174ee4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_174ee8:
    // 0x174ee8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x174ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_174eec:
    // 0x174eec: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x174eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_174ef0:
    // 0x174ef0: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x174ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_174ef4:
    // 0x174ef4: 0xa233006c  sb          $s3, 0x6C($s1)
    ctx->pc = 0x174ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
label_174ef8:
    // 0x174ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174efc:
    // 0x174efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174f00:
    // 0x174f00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174f04:
    // 0x174f04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x174f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_174f08:
    // 0x174f08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174f0c:
    // 0x174f0c: 0x3e00008  jr          $ra
label_174f10:
    if (ctx->pc == 0x174F10u) {
        ctx->pc = 0x174F10u;
            // 0x174f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x174F14u;
        goto label_174f14;
    }
    ctx->pc = 0x174F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F0Cu;
            // 0x174f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174F14u;
label_174f14:
    // 0x174f14: 0x0  nop
    ctx->pc = 0x174f14u;
    // NOP
label_174f18:
    // 0x174f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_174f1c:
    // 0x174f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174f20:
    // 0x174f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_174f24:
    // 0x174f24: 0xc0599de  jal         func_166778
label_174f28:
    if (ctx->pc == 0x174F28u) {
        ctx->pc = 0x174F28u;
            // 0x174f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F2Cu;
        goto label_174f2c;
    }
    ctx->pc = 0x174F24u;
    SET_GPR_U32(ctx, 31, 0x174F2Cu);
    ctx->pc = 0x174F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F24u;
            // 0x174f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F2Cu; }
        if (ctx->pc != 0x174F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F2Cu; }
        if (ctx->pc != 0x174F2Cu) { return; }
    }
    ctx->pc = 0x174F2Cu;
label_174f2c:
    // 0x174f2c: 0xc05d3d4  jal         func_174F50
label_174f30:
    if (ctx->pc == 0x174F30u) {
        ctx->pc = 0x174F30u;
            // 0x174f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F34u;
        goto label_174f34;
    }
    ctx->pc = 0x174F2Cu;
    SET_GPR_U32(ctx, 31, 0x174F34u);
    ctx->pc = 0x174F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F2Cu;
            // 0x174f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F34u; }
        if (ctx->pc != 0x174F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174F50_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F34u; }
        if (ctx->pc != 0x174F34u) { return; }
    }
    ctx->pc = 0x174F34u;
label_174f34:
    // 0x174f34: 0xc0599e0  jal         func_166780
label_174f38:
    if (ctx->pc == 0x174F38u) {
        ctx->pc = 0x174F38u;
            // 0x174f38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F3Cu;
        goto label_174f3c;
    }
    ctx->pc = 0x174F34u;
    SET_GPR_U32(ctx, 31, 0x174F3Cu);
    ctx->pc = 0x174F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F34u;
            // 0x174f38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F3Cu; }
        if (ctx->pc != 0x174F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F3Cu; }
        if (ctx->pc != 0x174F3Cu) { return; }
    }
    ctx->pc = 0x174F3Cu;
label_174f3c:
    // 0x174f3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174f40:
    // 0x174f40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174f44:
    // 0x174f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174f48:
    // 0x174f48: 0x3e00008  jr          $ra
label_174f4c:
    if (ctx->pc == 0x174F4Cu) {
        ctx->pc = 0x174F4Cu;
            // 0x174f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174F50u;
        goto label_fallthrough_0x174f48;
    }
    ctx->pc = 0x174F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F48u;
            // 0x174f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x174f48:
    ctx->pc = 0x174F50u;
}
