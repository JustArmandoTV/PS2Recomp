#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117B50
// Address: 0x117b50 - 0x117d50
void sub_00117B50_0x117b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B50_0x117b50");
#endif

    switch (ctx->pc) {
        case 0x117bbcu: goto label_117bbc;
        case 0x117bf8u: goto label_117bf8;
        case 0x117c10u: goto label_117c10;
        case 0x117c48u: goto label_117c48;
        case 0x117c54u: goto label_117c54;
        case 0x117c64u: goto label_117c64;
        case 0x117cacu: goto label_117cac;
        case 0x117ce4u: goto label_117ce4;
        case 0x117d00u: goto label_117d00;
        case 0x117d2cu: goto label_117d2c;
        default: break;
    }

    ctx->pc = 0x117b50u;

label_117b50:
    // 0x117b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117b54: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x117b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x117b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117b5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117b60: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x117b60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x117b64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117b68: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117B68u;
    {
        const bool branch_taken_0x117b68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x117B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B68u;
            // 0x117b6c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b68) {
            ctx->pc = 0x117B80u;
            goto label_117b80;
        }
    }
    ctx->pc = 0x117B70u;
    // 0x117b70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117b74: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x117b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x117b78: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117B78u;
    {
        const bool branch_taken_0x117b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117b78) {
            ctx->pc = 0x117B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117B78u;
            // 0x117b7c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117B8Cu;
            goto label_117b8c;
        }
    }
    ctx->pc = 0x117B80u;
label_117b80:
    // 0x117b80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117b84: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x117B84u;
    {
        const bool branch_taken_0x117b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B84u;
            // 0x117b88: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b84) {
            ctx->pc = 0x117C14u;
            goto label_117c14;
        }
    }
    ctx->pc = 0x117B8Cu;
label_117b8c:
    // 0x117b8c: 0x2451fa48  addiu       $s1, $v0, -0x5B8
    ctx->pc = 0x117b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x117b90: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x117b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x117b94: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117B94u;
    {
        const bool branch_taken_0x117b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x117b94) {
            ctx->pc = 0x117B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117B94u;
            // 0x117b98: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117BA8u;
            goto label_117ba8;
        }
    }
    ctx->pc = 0x117B9Cu;
    // 0x117b9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117ba0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x117BA0u;
    {
        const bool branch_taken_0x117ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BA0u;
            // 0x117ba4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ba0) {
            ctx->pc = 0x117C14u;
            goto label_117c14;
        }
    }
    ctx->pc = 0x117BA8u;
label_117ba8:
    // 0x117ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117bac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x117BACu;
    {
        const bool branch_taken_0x117bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BACu;
            // 0x117bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bac) {
            ctx->pc = 0x117C14u;
            goto label_117c14;
        }
    }
    ctx->pc = 0x117BB4u;
    // 0x117bb4: 0xc045dc2  jal         func_117708
    ctx->pc = 0x117BB4u;
    SET_GPR_U32(ctx, 31, 0x117BBCu);
    ctx->pc = 0x117708u;
    if (runtime->hasFunction(0x117708u)) {
        auto targetFn = runtime->lookupFunction(0x117708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BBCu; }
        if (ctx->pc != 0x117BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117708_0x117708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BBCu; }
        if (ctx->pc != 0x117BBCu) { return; }
    }
    ctx->pc = 0x117BBCu;
label_117bbc:
    // 0x117bbc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x117bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117bc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bc4: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x117bc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117bcc: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x117bccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x117bd0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x117bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x117bd4: 0x244202f  dsubu       $a0, $s2, $a0
    ctx->pc = 0x117bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) - GPR_U64(ctx, 4));
    // 0x117bd8: 0x30a60002  andi        $a2, $a1, 0x2
    ctx->pc = 0x117bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x117bdc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x117bdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x117be0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x117be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x117be4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x117be4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x117be8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x117BE8u;
    {
        const bool branch_taken_0x117be8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BE8u;
            // 0x117bec: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117be8) {
            ctx->pc = 0x117C10u;
            goto label_117c10;
        }
    }
    ctx->pc = 0x117BF0u;
    // 0x117bf0: 0xc045d06  jal         func_117418
    ctx->pc = 0x117BF0u;
    SET_GPR_U32(ctx, 31, 0x117BF8u);
    ctx->pc = 0x117BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BF0u;
            // 0x117bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117418u;
    if (runtime->hasFunction(0x117418u)) {
        auto targetFn = runtime->lookupFunction(0x117418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BF8u; }
        if (ctx->pc != 0x117BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117418_0x117418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BF8u; }
        if (ctx->pc != 0x117BF8u) { return; }
    }
    ctx->pc = 0x117BF8u;
label_117bf8:
    // 0x117bf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bfc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x117bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x117c00: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x117C00u;
    {
        const bool branch_taken_0x117c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x117c00) {
            ctx->pc = 0x117C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117C00u;
            // 0x117c04: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117C08u;
            goto label_117c08;
        }
    }
    ctx->pc = 0x117C08u;
label_117c08:
    // 0x117c08: 0xc045c80  jal         func_117200
    ctx->pc = 0x117C08u;
    SET_GPR_U32(ctx, 31, 0x117C10u);
    ctx->pc = 0x117C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C08u;
            // 0x117c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C10u; }
        if (ctx->pc != 0x117C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117200_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C10u; }
        if (ctx->pc != 0x117C10u) { return; }
    }
    ctx->pc = 0x117C10u;
label_117c10:
    // 0x117c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117c14:
    // 0x117c14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117c18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c24: 0x3e00008  jr          $ra
    ctx->pc = 0x117C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C24u;
            // 0x117c28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117C2Cu;
    // 0x117c2c: 0x0  nop
    ctx->pc = 0x117c2cu;
    // NOP
    // 0x117c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117c38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117c3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117c40: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117C40u;
    SET_GPR_U32(ctx, 31, 0x117C48u);
    ctx->pc = 0x117C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C40u;
            // 0x117c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C48u; }
        if (ctx->pc != 0x117C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C48u; }
        if (ctx->pc != 0x117C48u) { return; }
    }
    ctx->pc = 0x117C48u;
label_117c48:
    // 0x117c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c4c: 0xc045ed4  jal         func_117B50
    ctx->pc = 0x117C4Cu;
    SET_GPR_U32(ctx, 31, 0x117C54u);
    ctx->pc = 0x117C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C4Cu;
            // 0x117c50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B50u;
    goto label_117b50;
    ctx->pc = 0x117C54u;
label_117c54:
    // 0x117c54: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117C54u;
    {
        const bool branch_taken_0x117c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C54u;
            // 0x117c58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c54) {
            ctx->pc = 0x117C64u;
            goto label_117c64;
        }
    }
    ctx->pc = 0x117C5Cu;
    // 0x117c5c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117C5Cu;
    SET_GPR_U32(ctx, 31, 0x117C64u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C64u; }
        if (ctx->pc != 0x117C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C64u; }
        if (ctx->pc != 0x117C64u) { return; }
    }
    ctx->pc = 0x117C64u;
label_117c64:
    // 0x117c64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c74: 0x3e00008  jr          $ra
    ctx->pc = 0x117C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C74u;
            // 0x117c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117C7Cu;
    // 0x117c7c: 0x0  nop
    ctx->pc = 0x117c7cu;
    // NOP
    // 0x117c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x117c84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117c94: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x117c98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117c9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x117c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ca0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117ca4: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117CA4u;
    SET_GPR_U32(ctx, 31, 0x117CACu);
    ctx->pc = 0x117CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117CA4u;
            // 0x117ca8: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CACu; }
        if (ctx->pc != 0x117CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CACu; }
        if (ctx->pc != 0x117CACu) { return; }
    }
    ctx->pc = 0x117CACu;
label_117cac:
    // 0x117cac: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x117CACu;
    {
        const bool branch_taken_0x117cac = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x117CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CACu;
            // 0x117cb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cac) {
            ctx->pc = 0x117CD4u;
            goto label_117cd4;
        }
    }
    ctx->pc = 0x117CB4u;
    // 0x117cb4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117cb8: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x117cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x117cbc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x117CBCu;
    {
        const bool branch_taken_0x117cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x117CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CBCu;
            // 0x117cc0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cbc) {
            ctx->pc = 0x117CD4u;
            goto label_117cd4;
        }
    }
    ctx->pc = 0x117CC4u;
    // 0x117cc4: 0x2442fa48  addiu       $v0, $v0, -0x5B8
    ctx->pc = 0x117cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x117cc8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x117cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x117ccc: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117CCCu;
    {
        const bool branch_taken_0x117ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x117ccc) {
            ctx->pc = 0x117CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117CCCu;
            // 0x117cd0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117CECu;
            goto label_117cec;
        }
    }
    ctx->pc = 0x117CD4u;
label_117cd4:
    // 0x117cd4: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x117CD4u;
    {
        const bool branch_taken_0x117cd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CD4u;
            // 0x117cd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cd4) {
            ctx->pc = 0x117D30u;
            goto label_117d30;
        }
    }
    ctx->pc = 0x117CDCu;
    // 0x117cdc: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117CDCu;
    SET_GPR_U32(ctx, 31, 0x117CE4u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CE4u; }
        if (ctx->pc != 0x117CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CE4u; }
        if (ctx->pc != 0x117CE4u) { return; }
    }
    ctx->pc = 0x117CE4u;
label_117ce4:
    // 0x117ce4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x117CE4u;
    {
        const bool branch_taken_0x117ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CE4u;
            // 0x117ce8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ce4) {
            ctx->pc = 0x117D30u;
            goto label_117d30;
        }
    }
    ctx->pc = 0x117CECu;
label_117cec:
    // 0x117cec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117cf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117CF0u;
    {
        const bool branch_taken_0x117cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CF0u;
            // 0x117cf4: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cf0) {
            ctx->pc = 0x117D18u;
            goto label_117d18;
        }
    }
    ctx->pc = 0x117CF8u;
    // 0x117cf8: 0xc045dc2  jal         func_117708
    ctx->pc = 0x117CF8u;
    SET_GPR_U32(ctx, 31, 0x117D00u);
    ctx->pc = 0x117708u;
    if (runtime->hasFunction(0x117708u)) {
        auto targetFn = runtime->lookupFunction(0x117708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D00u; }
        if (ctx->pc != 0x117D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117708_0x117708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D00u; }
        if (ctx->pc != 0x117D00u) { return; }
    }
    ctx->pc = 0x117D00u;
label_117d00:
    // 0x117d00: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x117d00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x117d04: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x117d04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x117d08: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x117d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x117d0c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x117d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x117d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117D10u;
    {
        const bool branch_taken_0x117d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D10u;
            // 0x117d14: 0x223882d  daddu       $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d10) {
            ctx->pc = 0x117D1Cu;
            goto label_117d1c;
        }
    }
    ctx->pc = 0x117D18u;
label_117d18:
    // 0x117d18: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x117d18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_117d1c:
    // 0x117d1c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x117D1Cu;
    {
        const bool branch_taken_0x117d1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D1Cu;
            // 0x117d20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d1c) {
            ctx->pc = 0x117D30u;
            goto label_117d30;
        }
    }
    ctx->pc = 0x117D24u;
    // 0x117d24: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117D24u;
    SET_GPR_U32(ctx, 31, 0x117D2Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D2Cu; }
        if (ctx->pc != 0x117D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D2Cu; }
        if (ctx->pc != 0x117D2Cu) { return; }
    }
    ctx->pc = 0x117D2Cu;
label_117d2c:
    // 0x117d2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x117d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117d30:
    // 0x117d30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117d34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117d38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117d3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d44: 0x3e00008  jr          $ra
    ctx->pc = 0x117D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D44u;
            // 0x117d48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117D4Cu;
    // 0x117d4c: 0x0  nop
    ctx->pc = 0x117d4cu;
    // NOP
}
