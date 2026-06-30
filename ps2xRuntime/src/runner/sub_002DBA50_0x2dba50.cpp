#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBA50
// Address: 0x2dba50 - 0x2dbb60
void sub_002DBA50_0x2dba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBA50_0x2dba50");
#endif

    switch (ctx->pc) {
        case 0x2dba50u: goto label_2dba50;
        case 0x2dba54u: goto label_2dba54;
        case 0x2dba58u: goto label_2dba58;
        case 0x2dba5cu: goto label_2dba5c;
        case 0x2dba60u: goto label_2dba60;
        case 0x2dba64u: goto label_2dba64;
        case 0x2dba68u: goto label_2dba68;
        case 0x2dba6cu: goto label_2dba6c;
        case 0x2dba70u: goto label_2dba70;
        case 0x2dba74u: goto label_2dba74;
        case 0x2dba78u: goto label_2dba78;
        case 0x2dba7cu: goto label_2dba7c;
        case 0x2dba80u: goto label_2dba80;
        case 0x2dba84u: goto label_2dba84;
        case 0x2dba88u: goto label_2dba88;
        case 0x2dba8cu: goto label_2dba8c;
        case 0x2dba90u: goto label_2dba90;
        case 0x2dba94u: goto label_2dba94;
        case 0x2dba98u: goto label_2dba98;
        case 0x2dba9cu: goto label_2dba9c;
        case 0x2dbaa0u: goto label_2dbaa0;
        case 0x2dbaa4u: goto label_2dbaa4;
        case 0x2dbaa8u: goto label_2dbaa8;
        case 0x2dbaacu: goto label_2dbaac;
        case 0x2dbab0u: goto label_2dbab0;
        case 0x2dbab4u: goto label_2dbab4;
        case 0x2dbab8u: goto label_2dbab8;
        case 0x2dbabcu: goto label_2dbabc;
        case 0x2dbac0u: goto label_2dbac0;
        case 0x2dbac4u: goto label_2dbac4;
        case 0x2dbac8u: goto label_2dbac8;
        case 0x2dbaccu: goto label_2dbacc;
        case 0x2dbad0u: goto label_2dbad0;
        case 0x2dbad4u: goto label_2dbad4;
        case 0x2dbad8u: goto label_2dbad8;
        case 0x2dbadcu: goto label_2dbadc;
        case 0x2dbae0u: goto label_2dbae0;
        case 0x2dbae4u: goto label_2dbae4;
        case 0x2dbae8u: goto label_2dbae8;
        case 0x2dbaecu: goto label_2dbaec;
        case 0x2dbaf0u: goto label_2dbaf0;
        case 0x2dbaf4u: goto label_2dbaf4;
        case 0x2dbaf8u: goto label_2dbaf8;
        case 0x2dbafcu: goto label_2dbafc;
        case 0x2dbb00u: goto label_2dbb00;
        case 0x2dbb04u: goto label_2dbb04;
        case 0x2dbb08u: goto label_2dbb08;
        case 0x2dbb0cu: goto label_2dbb0c;
        case 0x2dbb10u: goto label_2dbb10;
        case 0x2dbb14u: goto label_2dbb14;
        case 0x2dbb18u: goto label_2dbb18;
        case 0x2dbb1cu: goto label_2dbb1c;
        case 0x2dbb20u: goto label_2dbb20;
        case 0x2dbb24u: goto label_2dbb24;
        case 0x2dbb28u: goto label_2dbb28;
        case 0x2dbb2cu: goto label_2dbb2c;
        case 0x2dbb30u: goto label_2dbb30;
        case 0x2dbb34u: goto label_2dbb34;
        case 0x2dbb38u: goto label_2dbb38;
        case 0x2dbb3cu: goto label_2dbb3c;
        case 0x2dbb40u: goto label_2dbb40;
        case 0x2dbb44u: goto label_2dbb44;
        case 0x2dbb48u: goto label_2dbb48;
        case 0x2dbb4cu: goto label_2dbb4c;
        case 0x2dbb50u: goto label_2dbb50;
        case 0x2dbb54u: goto label_2dbb54;
        case 0x2dbb58u: goto label_2dbb58;
        case 0x2dbb5cu: goto label_2dbb5c;
        default: break;
    }

    ctx->pc = 0x2dba50u;

label_2dba50:
    // 0x2dba50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2dba54:
    // 0x2dba54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2dba58:
    // 0x2dba58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dba5c:
    // 0x2dba5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dba60:
    // 0x2dba60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dba64:
    // 0x2dba64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dba64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dba68:
    // 0x2dba68: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_2dba6c:
    if (ctx->pc == 0x2DBA6Cu) {
        ctx->pc = 0x2DBA6Cu;
            // 0x2dba6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA70u;
        goto label_2dba70;
    }
    ctx->pc = 0x2DBA68u;
    {
        const bool branch_taken_0x2dba68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA68u;
            // 0x2dba6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba68) {
            ctx->pc = 0x2DBB3Cu;
            goto label_2dbb3c;
        }
    }
    ctx->pc = 0x2DBA70u;
label_2dba70:
    // 0x2dba70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dba74:
    // 0x2dba74: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2dba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2dba78:
    // 0x2dba78: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2dba78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dba7c:
    // 0x2dba7c: 0xc0a545c  jal         func_295170
label_2dba80:
    if (ctx->pc == 0x2DBA80u) {
        ctx->pc = 0x2DBA80u;
            // 0x2dba80: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2DBA84u;
        goto label_2dba84;
    }
    ctx->pc = 0x2DBA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBA84u);
    ctx->pc = 0x2DBA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA7Cu;
            // 0x2dba80: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA84u; }
        if (ctx->pc != 0x2DBA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA84u; }
        if (ctx->pc != 0x2DBA84u) { return; }
    }
    ctx->pc = 0x2DBA84u;
label_2dba84:
    // 0x2dba84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dba88:
    // 0x2dba88: 0xc08c8fc  jal         func_2323F0
label_2dba8c:
    if (ctx->pc == 0x2DBA8Cu) {
        ctx->pc = 0x2DBA8Cu;
            // 0x2dba8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA90u;
        goto label_2dba90;
    }
    ctx->pc = 0x2DBA88u;
    SET_GPR_U32(ctx, 31, 0x2DBA90u);
    ctx->pc = 0x2DBA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA88u;
            // 0x2dba8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA90u; }
        if (ctx->pc != 0x2DBA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA90u; }
        if (ctx->pc != 0x2DBA90u) { return; }
    }
    ctx->pc = 0x2DBA90u;
label_2dba90:
    // 0x2dba90: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2dba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dba94:
    // 0x2dba94: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2dba94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2dba98:
    // 0x2dba98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2dba9c:
    if (ctx->pc == 0x2DBA9Cu) {
        ctx->pc = 0x2DBAA0u;
        goto label_2dbaa0;
    }
    ctx->pc = 0x2DBA98u;
    {
        const bool branch_taken_0x2dba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dba98) {
            ctx->pc = 0x2DBAD4u;
            goto label_2dbad4;
        }
    }
    ctx->pc = 0x2DBAA0u;
label_2dbaa0:
    // 0x2dbaa0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2dbaa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2dbaa4:
    // 0x2dbaa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dbaa8:
    // 0x2dbaa8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2dbaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2dbaac:
    // 0x2dbaac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dbaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2dbab0:
    // 0x2dbab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dbab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dbab4:
    // 0x2dbab4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2dbab8:
    if (ctx->pc == 0x2DBAB8u) {
        ctx->pc = 0x2DBABCu;
        goto label_2dbabc;
    }
    ctx->pc = 0x2DBAB4u;
    {
        const bool branch_taken_0x2dbab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbab4) {
            ctx->pc = 0x2DBAD4u;
            goto label_2dbad4;
        }
    }
    ctx->pc = 0x2DBABCu;
label_2dbabc:
    // 0x2dbabc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2dbac0:
    if (ctx->pc == 0x2DBAC0u) {
        ctx->pc = 0x2DBAC4u;
        goto label_2dbac4;
    }
    ctx->pc = 0x2DBABCu;
    {
        const bool branch_taken_0x2dbabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbabc) {
            ctx->pc = 0x2DBAD4u;
            goto label_2dbad4;
        }
    }
    ctx->pc = 0x2DBAC4u;
label_2dbac4:
    // 0x2dbac4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dbac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dbac8:
    // 0x2dbac8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dbac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dbacc:
    // 0x2dbacc: 0x320f809  jalr        $t9
label_2dbad0:
    if (ctx->pc == 0x2DBAD0u) {
        ctx->pc = 0x2DBAD0u;
            // 0x2dbad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DBAD4u;
        goto label_2dbad4;
    }
    ctx->pc = 0x2DBACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DBAD4u);
        ctx->pc = 0x2DBAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBACCu;
            // 0x2dbad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DBAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAD4u; }
            if (ctx->pc != 0x2DBAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2DBAD4u;
label_2dbad4:
    // 0x2dbad4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dbad8:
    // 0x2dbad8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2dbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2dbadc:
    // 0x2dbadc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2dbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dbae0:
    // 0x2dbae0: 0xc08c8fc  jal         func_2323F0
label_2dbae4:
    if (ctx->pc == 0x2DBAE4u) {
        ctx->pc = 0x2DBAE4u;
            // 0x2dbae4: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x2DBAE8u;
        goto label_2dbae8;
    }
    ctx->pc = 0x2DBAE0u;
    SET_GPR_U32(ctx, 31, 0x2DBAE8u);
    ctx->pc = 0x2DBAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAE0u;
            // 0x2dbae4: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAE8u; }
        if (ctx->pc != 0x2DBAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAE8u; }
        if (ctx->pc != 0x2DBAE8u) { return; }
    }
    ctx->pc = 0x2DBAE8u;
label_2dbae8:
    // 0x2dbae8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2dbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2dbaec:
    // 0x2dbaec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2dbaf0:
    if (ctx->pc == 0x2DBAF0u) {
        ctx->pc = 0x2DBAF0u;
            // 0x2dbaf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2DBAF4u;
        goto label_2dbaf4;
    }
    ctx->pc = 0x2DBAECu;
    {
        const bool branch_taken_0x2dbaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbaec) {
            ctx->pc = 0x2DBAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAECu;
            // 0x2dbaf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBB28u;
            goto label_2dbb28;
        }
    }
    ctx->pc = 0x2DBAF4u;
label_2dbaf4:
    // 0x2dbaf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dbaf8:
    // 0x2dbaf8: 0x2624021c  addiu       $a0, $s1, 0x21C
    ctx->pc = 0x2dbaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
label_2dbafc:
    // 0x2dbafc: 0x24422e60  addiu       $v0, $v0, 0x2E60
    ctx->pc = 0x2dbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
label_2dbb00:
    // 0x2dbb00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dbb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dbb04:
    // 0x2dbb04: 0xc0b6f38  jal         func_2DBCE0
label_2dbb08:
    if (ctx->pc == 0x2DBB08u) {
        ctx->pc = 0x2DBB08u;
            // 0x2dbb08: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x2DBB0Cu;
        goto label_2dbb0c;
    }
    ctx->pc = 0x2DBB04u;
    SET_GPR_U32(ctx, 31, 0x2DBB0Cu);
    ctx->pc = 0x2DBB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB04u;
            // 0x2dbb08: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBCE0u;
    if (runtime->hasFunction(0x2DBCE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DBCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB0Cu; }
        if (ctx->pc != 0x2DBB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBCE0_0x2dbce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB0Cu; }
        if (ctx->pc != 0x2DBB0Cu) { return; }
    }
    ctx->pc = 0x2DBB0Cu;
label_2dbb0c:
    // 0x2dbb0c: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x2dbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_2dbb10:
    // 0x2dbb10: 0xc0b6ed8  jal         func_2DBB60
label_2dbb14:
    if (ctx->pc == 0x2DBB14u) {
        ctx->pc = 0x2DBB14u;
            // 0x2dbb14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DBB18u;
        goto label_2dbb18;
    }
    ctx->pc = 0x2DBB10u;
    SET_GPR_U32(ctx, 31, 0x2DBB18u);
    ctx->pc = 0x2DBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB10u;
            // 0x2dbb14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB60u;
    if (runtime->hasFunction(0x2DBB60u)) {
        auto targetFn = runtime->lookupFunction(0x2DBB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB18u; }
        if (ctx->pc != 0x2DBB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBB60_0x2dbb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB18u; }
        if (ctx->pc != 0x2DBB18u) { return; }
    }
    ctx->pc = 0x2DBB18u;
label_2dbb18:
    // 0x2dbb18: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2dbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2dbb1c:
    // 0x2dbb1c: 0xc07f830  jal         func_1FE0C0
label_2dbb20:
    if (ctx->pc == 0x2DBB20u) {
        ctx->pc = 0x2DBB20u;
            // 0x2dbb20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB24u;
        goto label_2dbb24;
    }
    ctx->pc = 0x2DBB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB24u);
    ctx->pc = 0x2DBB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB1Cu;
            // 0x2dbb20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0C0u;
    if (runtime->hasFunction(0x1FE0C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB24u; }
        if (ctx->pc != 0x2DBB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE0C0_0x1fe0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB24u; }
        if (ctx->pc != 0x2DBB24u) { return; }
    }
    ctx->pc = 0x2DBB24u;
label_2dbb24:
    // 0x2dbb24: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dbb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2dbb28:
    // 0x2dbb28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dbb28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dbb2c:
    // 0x2dbb2c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2dbb30:
    if (ctx->pc == 0x2DBB30u) {
        ctx->pc = 0x2DBB30u;
            // 0x2dbb30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB34u;
        goto label_2dbb34;
    }
    ctx->pc = 0x2DBB2Cu;
    {
        const bool branch_taken_0x2dbb2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dbb2c) {
            ctx->pc = 0x2DBB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB2Cu;
            // 0x2dbb30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBB40u;
            goto label_2dbb40;
        }
    }
    ctx->pc = 0x2DBB34u;
label_2dbb34:
    // 0x2dbb34: 0xc0400a8  jal         func_1002A0
label_2dbb38:
    if (ctx->pc == 0x2DBB38u) {
        ctx->pc = 0x2DBB38u;
            // 0x2dbb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB3Cu;
        goto label_2dbb3c;
    }
    ctx->pc = 0x2DBB34u;
    SET_GPR_U32(ctx, 31, 0x2DBB3Cu);
    ctx->pc = 0x2DBB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB34u;
            // 0x2dbb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB3Cu; }
        if (ctx->pc != 0x2DBB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB3Cu; }
        if (ctx->pc != 0x2DBB3Cu) { return; }
    }
    ctx->pc = 0x2DBB3Cu;
label_2dbb3c:
    // 0x2dbb3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb40:
    // 0x2dbb40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dbb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2dbb44:
    // 0x2dbb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dbb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dbb48:
    // 0x2dbb48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbb4c:
    // 0x2dbb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbb50:
    // 0x2dbb50: 0x3e00008  jr          $ra
label_2dbb54:
    if (ctx->pc == 0x2DBB54u) {
        ctx->pc = 0x2DBB54u;
            // 0x2dbb54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2DBB58u;
        goto label_2dbb58;
    }
    ctx->pc = 0x2DBB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB50u;
            // 0x2dbb54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBB58u;
label_2dbb58:
    // 0x2dbb58: 0x0  nop
    ctx->pc = 0x2dbb58u;
    // NOP
label_2dbb5c:
    // 0x2dbb5c: 0x0  nop
    ctx->pc = 0x2dbb5cu;
    // NOP
}
