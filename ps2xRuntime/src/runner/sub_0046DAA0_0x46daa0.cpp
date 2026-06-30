#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046DAA0
// Address: 0x46daa0 - 0x46dc20
void sub_0046DAA0_0x46daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DAA0_0x46daa0");
#endif

    switch (ctx->pc) {
        case 0x46daf8u: goto label_46daf8;
        case 0x46db18u: goto label_46db18;
        case 0x46dbbcu: goto label_46dbbc;
        case 0x46dbdcu: goto label_46dbdc;
        case 0x46dbf8u: goto label_46dbf8;
        default: break;
    }

    ctx->pc = 0x46daa0u;

    // 0x46daa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46daa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46daa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x46daa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46daac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46dab0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x46dab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46dab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46dab8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x46dab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46dabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46dac0: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x46dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x46dac4: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x46dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x46dac8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x46dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x46dacc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x46daccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x46dad0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x46dad4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x46dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x46dad8: 0x24a5ed88  addiu       $a1, $a1, -0x1278
    ctx->pc = 0x46dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
    // 0x46dadc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46dae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x46dae4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x46dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x46dae8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46daec: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x46daf0: 0xc12512c  jal         func_4944B0
    ctx->pc = 0x46DAF0u;
    SET_GPR_U32(ctx, 31, 0x46DAF8u);
    ctx->pc = 0x46DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DAF0u;
            // 0x46daf4: 0x24710070  addiu       $s1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DAF8u; }
        if (ctx->pc != 0x46DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DAF8u; }
        if (ctx->pc != 0x46DAF8u) { return; }
    }
    ctx->pc = 0x46DAF8u;
label_46daf8:
    // 0x46daf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46daf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46dafc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x46db00: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x46db04: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46db08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46db0c: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x46db10: 0xc12512c  jal         func_4944B0
    ctx->pc = 0x46DB10u;
    SET_GPR_U32(ctx, 31, 0x46DB18u);
    ctx->pc = 0x46DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DB10u;
            // 0x46db14: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DB18u; }
        if (ctx->pc != 0x46DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DB18u; }
        if (ctx->pc != 0x46DB18u) { return; }
    }
    ctx->pc = 0x46DB18u;
label_46db18:
    // 0x46db18: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x46db18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x46db1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x46db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x46db20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46db24: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x46db24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x46db28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x46db28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x46db2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x46DB2Cu;
    {
        const bool branch_taken_0x46db2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46db2c) {
            ctx->pc = 0x46DB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DB2Cu;
            // 0x46db30: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DB48u;
            goto label_46db48;
        }
    }
    ctx->pc = 0x46DB34u;
    // 0x46db34: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46db34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x46db38: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x46db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x46db3c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46db3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x46db40: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x46db40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x46db44: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x46db44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_46db48:
    // 0x46db48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46db48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x46db4c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x46db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x46db50: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x46db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
    // 0x46db54: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x46db54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x46db58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x46db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x46db5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x46db60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46db60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46db64: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x46db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x46db68: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x46db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x46db6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x46db6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x46db70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46db70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46db74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x46db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x46db78: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x46DB78u;
    {
        const bool branch_taken_0x46db78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46db78) {
            ctx->pc = 0x46DB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DB78u;
            // 0x46db7c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DBFCu;
            goto label_46dbfc;
        }
    }
    ctx->pc = 0x46DB80u;
    // 0x46db80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46db84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46db84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x46db88: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x46db88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x46db8c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46db8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x46db90: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x46db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x46db94: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46db94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x46db98: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46db98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x46db9c: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x46db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x46dba0: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46dba0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x46dba4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x46dba8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46dbac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46dbb0: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x46dbb4: 0xc12512c  jal         func_4944B0
    ctx->pc = 0x46DBB4u;
    SET_GPR_U32(ctx, 31, 0x46DBBCu);
    ctx->pc = 0x46DBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DBB4u;
            // 0x46dbb8: 0x24a5f1a8  addiu       $a1, $a1, -0xE58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DBBCu; }
        if (ctx->pc != 0x46DBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DBBCu; }
        if (ctx->pc != 0x46DBBCu) { return; }
    }
    ctx->pc = 0x46DBBCu;
label_46dbbc:
    // 0x46dbbc: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x46dbc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46dbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46dbc4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x46dbc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x46dbcc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46dbd0: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x46dbd4: 0xc12512c  jal         func_4944B0
    ctx->pc = 0x46DBD4u;
    SET_GPR_U32(ctx, 31, 0x46DBDCu);
    ctx->pc = 0x46DBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DBD4u;
            // 0x46dbd8: 0x24a5f1a0  addiu       $a1, $a1, -0xE60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DBDCu; }
        if (ctx->pc != 0x46DBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DBDCu; }
        if (ctx->pc != 0x46DBDCu) { return; }
    }
    ctx->pc = 0x46DBDCu;
label_46dbdc:
    // 0x46dbdc: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x46dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x46dbe0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x46dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x46dbe4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x46dbe8: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x46dbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
    // 0x46dbec: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x46dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x46dbf0: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x46DBF0u;
    SET_GPR_U32(ctx, 31, 0x46DBF8u);
    ctx->pc = 0x46DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DBF0u;
            // 0x46dbf4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DBF8u; }
        if (ctx->pc != 0x46DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DBF8u; }
        if (ctx->pc != 0x46DBF8u) { return; }
    }
    ctx->pc = 0x46DBF8u;
label_46dbf8:
    // 0x46dbf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46dbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_46dbfc:
    // 0x46dbfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46dbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46dc00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46dc00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46dc04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46dc04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46dc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46dc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46dc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46dc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46dc10: 0x3e00008  jr          $ra
    ctx->pc = 0x46DC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DC10u;
            // 0x46dc14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46DC18u;
    // 0x46dc18: 0x0  nop
    ctx->pc = 0x46dc18u;
    // NOP
    // 0x46dc1c: 0x0  nop
    ctx->pc = 0x46dc1cu;
    // NOP
}
