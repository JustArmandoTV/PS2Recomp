#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155D50
// Address: 0x155d50 - 0x155f60
void sub_00155D50_0x155d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155D50_0x155d50");
#endif

    switch (ctx->pc) {
        case 0x155dd0u: goto label_155dd0;
        case 0x155de4u: goto label_155de4;
        case 0x155e5cu: goto label_155e5c;
        case 0x155e74u: goto label_155e74;
        case 0x155e84u: goto label_155e84;
        case 0x155ee8u: goto label_155ee8;
        case 0x155f08u: goto label_155f08;
        case 0x155f28u: goto label_155f28;
        default: break;
    }

    ctx->pc = 0x155d50u;

    // 0x155d50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x155d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x155d54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x155d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x155d58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x155d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x155d5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x155d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x155d60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x155d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x155d64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x155d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x155d68: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x155d68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155d74: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x155d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155d7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x155d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155d84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x155d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155d8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x155d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d90: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x155d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x155d94: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x155D94u;
    {
        const bool branch_taken_0x155d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D94u;
            // 0x155d98: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d94) {
            ctx->pc = 0x155F28u;
            goto label_155f28;
        }
    }
    ctx->pc = 0x155D9Cu;
    // 0x155d9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155da0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155da4: 0xac535784  sw          $s3, 0x5784($v0)
    ctx->pc = 0x155da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 19));
    // 0x155da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155dac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155db0: 0xac765790  sw          $s6, 0x5790($v1)
    ctx->pc = 0x155db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 22));
    // 0x155db4: 0xac545794  sw          $s4, 0x5794($v0)
    ctx->pc = 0x155db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 20));
    // 0x155db8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155dbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155dc0: 0xac435760  sw          $v1, 0x5760($v0)
    ctx->pc = 0x155dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22368), GPR_U32(ctx, 3));
    // 0x155dc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155dc8: 0xc053534  jal         func_14D4D0
    ctx->pc = 0x155DC8u;
    SET_GPR_U32(ctx, 31, 0x155DD0u);
    ctx->pc = 0x155DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155DC8u;
            // 0x155dcc: 0xac435768  sw          $v1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D4D0u;
    if (runtime->hasFunction(0x14D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x14D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DD0u; }
        if (ctx->pc != 0x155DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D4D0_0x14d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DD0u; }
        if (ctx->pc != 0x155DD0u) { return; }
    }
    ctx->pc = 0x155DD0u;
label_155dd0:
    // 0x155dd0: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x155DD0u;
    {
        const bool branch_taken_0x155dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155dd0) {
            ctx->pc = 0x155DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155DD0u;
            // 0x155dd4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155F2Cu;
            goto label_155f2c;
        }
    }
    ctx->pc = 0x155DD8u;
    // 0x155dd8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x155dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x155ddc: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x155DDCu;
    SET_GPR_U32(ctx, 31, 0x155DE4u);
    ctx->pc = 0x155DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155DDCu;
            // 0x155de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DE4u; }
        if (ctx->pc != 0x155DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DE4u; }
        if (ctx->pc != 0x155DE4u) { return; }
    }
    ctx->pc = 0x155DE4u;
label_155de4:
    // 0x155de4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155de8: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x155dec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x155DECu;
    {
        const bool branch_taken_0x155dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DECu;
            // 0x155df0: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dec) {
            ctx->pc = 0x155E48u;
            goto label_155e48;
        }
    }
    ctx->pc = 0x155DF4u;
    // 0x155df4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155df8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155dfc: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x155dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x155e00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e04: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x155e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x155e08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e0c: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x155e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x155e10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e14: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x155e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x155e18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e1c: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x155e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x155e20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e24: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x155e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x155e28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e2c: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x155e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x155e30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e34: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x155e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x155e38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e3c: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x155e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x155e40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155e44: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x155e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_155e48:
    // 0x155e48: 0x32820100  andi        $v0, $s4, 0x100
    ctx->pc = 0x155e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
    // 0x155e4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x155E4Cu;
    {
        const bool branch_taken_0x155e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e4c) {
            ctx->pc = 0x155E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155E4Cu;
            // 0x155e50: 0x32821000  andi        $v0, $s4, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x155E64u;
            goto label_155e64;
        }
    }
    ctx->pc = 0x155E54u;
    // 0x155e54: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x155E54u;
    SET_GPR_U32(ctx, 31, 0x155E5Cu);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E5Cu; }
        if (ctx->pc != 0x155E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001398E0_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E5Cu; }
        if (ctx->pc != 0x155E5Cu) { return; }
    }
    ctx->pc = 0x155E5Cu;
label_155e5c:
    // 0x155e5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155E5Cu;
    {
        const bool branch_taken_0x155e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E5Cu;
            // 0x155e60: 0x8e740038  lw          $s4, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e5c) {
            ctx->pc = 0x155E78u;
            goto label_155e78;
        }
    }
    ctx->pc = 0x155E64u;
label_155e64:
    // 0x155e64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155E64u;
    {
        const bool branch_taken_0x155e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e64) {
            ctx->pc = 0x155E74u;
            goto label_155e74;
        }
    }
    ctx->pc = 0x155E6Cu;
    // 0x155e6c: 0xc04e5c4  jal         func_139710
    ctx->pc = 0x155E6Cu;
    SET_GPR_U32(ctx, 31, 0x155E74u);
    ctx->pc = 0x139710u;
    if (runtime->hasFunction(0x139710u)) {
        auto targetFn = runtime->lookupFunction(0x139710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E74u; }
        if (ctx->pc != 0x155E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139710_0x139710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E74u; }
        if (ctx->pc != 0x155E74u) { return; }
    }
    ctx->pc = 0x155E74u;
label_155e74:
    // 0x155e74: 0x8e740038  lw          $s4, 0x38($s3)
    ctx->pc = 0x155e74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_155e78:
    // 0x155e78: 0x32d70007  andi        $s7, $s6, 0x7
    ctx->pc = 0x155e78u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
    // 0x155e7c: 0x8e75003c  lw          $s5, 0x3C($s3)
    ctx->pc = 0x155e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x155e80: 0x32de0300  andi        $fp, $s6, 0x300
    ctx->pc = 0x155e80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)768);
label_155e84:
    // 0x155e84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x155e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x155e88: 0x12c20009  beq         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155E88u;
    {
        const bool branch_taken_0x155e88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e88) {
            ctx->pc = 0x155EB0u;
            goto label_155eb0;
        }
    }
    ctx->pc = 0x155E90u;
    // 0x155e90: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x155e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155e94: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x155e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x155e98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x155E98u;
    {
        const bool branch_taken_0x155e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e98) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155EA0u;
    // 0x155ea0: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x155ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x155ea4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x155EA4u;
    {
        const bool branch_taken_0x155ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ea4) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155EACu;
    // 0x155eac: 0x0  nop
    ctx->pc = 0x155eacu;
    // NOP
label_155eb0:
    // 0x155eb0: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x155eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x155eb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155eb8: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x155eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x155ebc: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x155ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x155ec0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x155ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155ec4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x155ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x155ec8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155EC8u;
    {
        const bool branch_taken_0x155ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ec8) {
            ctx->pc = 0x155EF0u;
            goto label_155ef0;
        }
    }
    ctx->pc = 0x155ED0u;
    // 0x155ed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x155ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ed4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x155ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ed8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155edc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ee0: 0xc055518  jal         func_155460
    ctx->pc = 0x155EE0u;
    SET_GPR_U32(ctx, 31, 0x155EE8u);
    ctx->pc = 0x155EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155EE0u;
            // 0x155ee4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155460u;
    if (runtime->hasFunction(0x155460u)) {
        auto targetFn = runtime->lookupFunction(0x155460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155EE8u; }
        if (ctx->pc != 0x155EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155460_0x155460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155EE8u; }
        if (ctx->pc != 0x155EE8u) { return; }
    }
    ctx->pc = 0x155EE8u;
label_155ee8:
    // 0x155ee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155EE8u;
    {
        const bool branch_taken_0x155ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ee8) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155EF0u;
label_155ef0:
    // 0x155ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x155ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ef4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ef8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155efc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f00: 0xc055634  jal         func_1558D0
    ctx->pc = 0x155F00u;
    SET_GPR_U32(ctx, 31, 0x155F08u);
    ctx->pc = 0x155F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F00u;
            // 0x155f04: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1558D0u;
    if (runtime->hasFunction(0x1558D0u)) {
        auto targetFn = runtime->lookupFunction(0x1558D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F08u; }
        if (ctx->pc != 0x155F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001558D0_0x1558d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F08u; }
        if (ctx->pc != 0x155F08u) { return; }
    }
    ctx->pc = 0x155F08u;
label_155f08:
    // 0x155f08: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x155f08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x155f0c: 0x1680ffdd  bnez        $s4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x155F0Cu;
    {
        const bool branch_taken_0x155f0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x155F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F0Cu;
            // 0x155f10: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f0c) {
            ctx->pc = 0x155E84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155e84;
        }
    }
    ctx->pc = 0x155F14u;
    // 0x155f14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155f18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155f1c: 0xac605808  sw          $zero, 0x5808($v1)
    ctx->pc = 0x155f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22536), GPR_U32(ctx, 0));
    // 0x155f20: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x155F20u;
    SET_GPR_U32(ctx, 31, 0x155F28u);
    ctx->pc = 0x155F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F20u;
            // 0x155f24: 0xac405814  sw          $zero, 0x5814($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F28u; }
        if (ctx->pc != 0x155F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F28u; }
        if (ctx->pc != 0x155F28u) { return; }
    }
    ctx->pc = 0x155F28u;
label_155f28:
    // 0x155f28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x155f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_155f2c:
    // 0x155f2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x155f2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155f30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x155f30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155f34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x155f34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155f38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x155f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f50: 0x3e00008  jr          $ra
    ctx->pc = 0x155F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F50u;
            // 0x155f54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155F58u;
    // 0x155f58: 0x0  nop
    ctx->pc = 0x155f58u;
    // NOP
    // 0x155f5c: 0x0  nop
    ctx->pc = 0x155f5cu;
    // NOP
}
