#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117EA8
// Address: 0x117ea8 - 0x117fb8
void sub_00117EA8_0x117ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117EA8_0x117ea8");
#endif

    switch (ctx->pc) {
        case 0x117f28u: goto label_117f28;
        case 0x117f80u: goto label_117f80;
        case 0x117f88u: goto label_117f88;
        case 0x117f90u: goto label_117f90;
        default: break;
    }

    ctx->pc = 0x117ea8u;

    // 0x117ea8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117eac: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x117eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x117eb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x117eb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117eb8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x117eb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ebc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117ec0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117ec8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x117ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ecc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x117ed0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x117ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x117ed4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117ED4u;
    {
        const bool branch_taken_0x117ed4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x117ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117ED4u;
            // 0x117ed8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ed4) {
            ctx->pc = 0x117EECu;
            goto label_117eec;
        }
    }
    ctx->pc = 0x117EDCu;
    // 0x117edc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117ee0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x117ee4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117EE4u;
    {
        const bool branch_taken_0x117ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117ee4) {
            ctx->pc = 0x117EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117EE4u;
            // 0x117ee8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117EF8u;
            goto label_117ef8;
        }
    }
    ctx->pc = 0x117EECu;
label_117eec:
    // 0x117eec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117ef0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x117EF0u;
    {
        const bool branch_taken_0x117ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117EF0u;
            // 0x117ef4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ef0) {
            ctx->pc = 0x117F94u;
            goto label_117f94;
        }
    }
    ctx->pc = 0x117EF8u;
label_117ef8:
    // 0x117ef8: 0x2451fa48  addiu       $s1, $v0, -0x5B8
    ctx->pc = 0x117ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x117efc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x117efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x117f00: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117F00u;
    {
        const bool branch_taken_0x117f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x117f00) {
            ctx->pc = 0x117F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F00u;
            // 0x117f04: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F14u;
            goto label_117f14;
        }
    }
    ctx->pc = 0x117F08u;
    // 0x117f08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117f0c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x117F0Cu;
    {
        const bool branch_taken_0x117f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F0Cu;
            // 0x117f10: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f0c) {
            ctx->pc = 0x117F94u;
            goto label_117f94;
        }
    }
    ctx->pc = 0x117F14u;
label_117f14:
    // 0x117f14: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x117f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x117f18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117F18u;
    {
        const bool branch_taken_0x117f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f18) {
            ctx->pc = 0x117F3Cu;
            goto label_117f3c;
        }
    }
    ctx->pc = 0x117F20u;
    // 0x117f20: 0xc045d06  jal         func_117418
    ctx->pc = 0x117F20u;
    SET_GPR_U32(ctx, 31, 0x117F28u);
    ctx->pc = 0x117F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F20u;
            // 0x117f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117418u;
    if (runtime->hasFunction(0x117418u)) {
        auto targetFn = runtime->lookupFunction(0x117418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F28u; }
        if (ctx->pc != 0x117F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117418_0x117418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F28u; }
        if (ctx->pc != 0x117F28u) { return; }
    }
    ctx->pc = 0x117F28u;
label_117f28:
    // 0x117f28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f2c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x117f30: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x117F30u;
    {
        const bool branch_taken_0x117f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x117f30) {
            ctx->pc = 0x117F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F30u;
            // 0x117f34: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F38u;
            goto label_117f38;
        }
    }
    ctx->pc = 0x117F38u;
label_117f38:
    // 0x117f38: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117f3c:
    // 0x117f3c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x117F3Cu;
    {
        const bool branch_taken_0x117f3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F3Cu;
            // 0x117f40: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f3c) {
            ctx->pc = 0x117F58u;
            goto label_117f58;
        }
    }
    ctx->pc = 0x117F44u;
    // 0x117f44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117f48: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x117f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x117f4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x117f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x117f50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x117F50u;
    {
        const bool branch_taken_0x117f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F50u;
            // 0x117f54: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f50) {
            ctx->pc = 0x117F80u;
            goto label_117f80;
        }
    }
    ctx->pc = 0x117F58u;
label_117f58:
    // 0x117f58: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x117f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x117f5c: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x117f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x117f60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x117f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x117f64: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x117f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x117f68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x117f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117f6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117f70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117F70u;
    {
        const bool branch_taken_0x117f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F70u;
            // 0x117f74: 0xae140030  sw          $s4, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f70) {
            ctx->pc = 0x117F80u;
            goto label_117f80;
        }
    }
    ctx->pc = 0x117F78u;
    // 0x117f78: 0xc045ce4  jal         func_117390
    ctx->pc = 0x117F78u;
    SET_GPR_U32(ctx, 31, 0x117F80u);
    ctx->pc = 0x117F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F78u;
            // 0x117f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117390u;
    if (runtime->hasFunction(0x117390u)) {
        auto targetFn = runtime->lookupFunction(0x117390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F80u; }
        if (ctx->pc != 0x117F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117390_0x117390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F80u; }
        if (ctx->pc != 0x117F80u) { return; }
    }
    ctx->pc = 0x117F80u;
label_117f80:
    // 0x117f80: 0xc045dc2  jal         func_117708
    ctx->pc = 0x117F80u;
    SET_GPR_U32(ctx, 31, 0x117F88u);
    ctx->pc = 0x117708u;
    if (runtime->hasFunction(0x117708u)) {
        auto targetFn = runtime->lookupFunction(0x117708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F88u; }
        if (ctx->pc != 0x117F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117708_0x117708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F88u; }
        if (ctx->pc != 0x117F88u) { return; }
    }
    ctx->pc = 0x117F88u;
label_117f88:
    // 0x117f88: 0xc045c80  jal         func_117200
    ctx->pc = 0x117F88u;
    SET_GPR_U32(ctx, 31, 0x117F90u);
    ctx->pc = 0x117F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F88u;
            // 0x117f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F90u; }
        if (ctx->pc != 0x117F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117200_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F90u; }
        if (ctx->pc != 0x117F90u) { return; }
    }
    ctx->pc = 0x117F90u;
label_117f90:
    // 0x117f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117f94:
    // 0x117f94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x117f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117f98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117f9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117fa0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117fa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117fac: 0x3e00008  jr          $ra
    ctx->pc = 0x117FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FACu;
            // 0x117fb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117FB4u;
    // 0x117fb4: 0x0  nop
    ctx->pc = 0x117fb4u;
    // NOP
}
