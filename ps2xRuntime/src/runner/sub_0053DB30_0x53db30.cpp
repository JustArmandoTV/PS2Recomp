#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053DB30
// Address: 0x53db30 - 0x53dc60
void sub_0053DB30_0x53db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053DB30_0x53db30");
#endif

    switch (ctx->pc) {
        case 0x53db78u: goto label_53db78;
        case 0x53dbc4u: goto label_53dbc4;
        case 0x53dbecu: goto label_53dbec;
        case 0x53dc10u: goto label_53dc10;
        case 0x53dc2cu: goto label_53dc2c;
        default: break;
    }

    ctx->pc = 0x53db30u;

    // 0x53db30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x53db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x53db34: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x53db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x53db38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x53db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x53db3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x53db40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53db40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x53db44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53db44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x53db48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x53db48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53db4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x53db50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x53db50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53db54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53db54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53db58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x53db58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53db5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53db5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53db60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x53db60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53db64: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x53db64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53db68: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x53db68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x53db6c: 0x3445ae60  ori         $a1, $v0, 0xAE60
    ctx->pc = 0x53db6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44640);
    // 0x53db70: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x53DB70u;
    SET_GPR_U32(ctx, 31, 0x53DB78u);
    ctx->pc = 0x53DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DB70u;
            // 0x53db74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DB78u; }
        if (ctx->pc != 0x53DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DB78u; }
        if (ctx->pc != 0x53DB78u) { return; }
    }
    ctx->pc = 0x53DB78u;
label_53db78:
    // 0x53db78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x53db7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53db80: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x53db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x53db84: 0x246373d0  addiu       $v1, $v1, 0x73D0
    ctx->pc = 0x53db84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29648));
    // 0x53db88: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x53db88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x53db8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53db90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x53db90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x53db94: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x53db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x53db98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x53db9c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x53db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x53dba0: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x53dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
    // 0x53dba4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x53dba8: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x53dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
    // 0x53dbac: 0xa2830060  sb          $v1, 0x60($s4)
    ctx->pc = 0x53dbacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x53dbb0: 0xa2800061  sb          $zero, 0x61($s4)
    ctx->pc = 0x53dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x53dbb4: 0xae800090  sw          $zero, 0x90($s4)
    ctx->pc = 0x53dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
    // 0x53dbb8: 0x8c553e28  lw          $s5, 0x3E28($v0)
    ctx->pc = 0x53dbb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
    // 0x53dbbc: 0xc040180  jal         func_100600
    ctx->pc = 0x53DBBCu;
    SET_GPR_U32(ctx, 31, 0x53DBC4u);
    ctx->pc = 0x53DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DBBCu;
            // 0x53dbc0: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DBC4u; }
        if (ctx->pc != 0x53DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DBC4u; }
        if (ctx->pc != 0x53DBC4u) { return; }
    }
    ctx->pc = 0x53DBC4u;
label_53dbc4:
    // 0x53dbc4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x53DBC4u;
    {
        const bool branch_taken_0x53dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53dbc4) {
            ctx->pc = 0x53DBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DBC4u;
            // 0x53dbc8: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DBF0u;
            goto label_53dbf0;
        }
    }
    ctx->pc = 0x53DBCCu;
    // 0x53dbcc: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x53dbccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x53dbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53dbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dbd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dbd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53dbdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53dbdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dbe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x53dbe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dbe4: 0xc159754  jal         func_565D50
    ctx->pc = 0x53DBE4u;
    SET_GPR_U32(ctx, 31, 0x53DBECu);
    ctx->pc = 0x53DBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DBE4u;
            // 0x53dbe8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DBECu; }
        if (ctx->pc != 0x53DBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DBECu; }
        if (ctx->pc != 0x53DBECu) { return; }
    }
    ctx->pc = 0x53DBECu;
label_53dbec:
    // 0x53dbec: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x53dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_53dbf0:
    // 0x53dbf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x53dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53dbf4: 0xa040007e  sb          $zero, 0x7E($v0)
    ctx->pc = 0x53dbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x53dbf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x53dbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dbfc: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x53dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x53dc00: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53dc04: 0xac650078  sw          $a1, 0x78($v1)
    ctx->pc = 0x53dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 5));
    // 0x53dc08: 0xc14f030  jal         func_53C0C0
    ctx->pc = 0x53DC08u;
    SET_GPR_U32(ctx, 31, 0x53DC10u);
    ctx->pc = 0x53DC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DC08u;
            // 0x53dc0c: 0xac40d000  sw          $zero, -0x3000($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53C0C0u;
    if (runtime->hasFunction(0x53C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x53C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DC10u; }
        if (ctx->pc != 0x53DC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053C0C0_0x53c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DC10u; }
        if (ctx->pc != 0x53DC10u) { return; }
    }
    ctx->pc = 0x53DC10u;
label_53dc10:
    // 0x53dc10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x53dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dc14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x53dc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dc18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x53dc18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dc1c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x53dc1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dc20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dc24: 0xc14f64c  jal         func_53D930
    ctx->pc = 0x53DC24u;
    SET_GPR_U32(ctx, 31, 0x53DC2Cu);
    ctx->pc = 0x53DC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DC24u;
            // 0x53dc28: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D930u;
    if (runtime->hasFunction(0x53D930u)) {
        auto targetFn = runtime->lookupFunction(0x53D930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DC2Cu; }
        if (ctx->pc != 0x53DC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D930_0x53d930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DC2Cu; }
        if (ctx->pc != 0x53DC2Cu) { return; }
    }
    ctx->pc = 0x53DC2Cu;
label_53dc2c:
    // 0x53dc2c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x53dc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53dc30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x53dc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x53dc34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53dc34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x53dc38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53dc38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x53dc3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53dc3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x53dc40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53dc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53dc44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53dc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53dc48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53dc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53dc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x53DC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53DC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DC4Cu;
            // 0x53dc50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53DC54u;
    // 0x53dc54: 0x0  nop
    ctx->pc = 0x53dc54u;
    // NOP
    // 0x53dc58: 0x0  nop
    ctx->pc = 0x53dc58u;
    // NOP
    // 0x53dc5c: 0x0  nop
    ctx->pc = 0x53dc5cu;
    // NOP
}
