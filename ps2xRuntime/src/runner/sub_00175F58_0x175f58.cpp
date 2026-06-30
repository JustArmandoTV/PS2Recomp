#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175F58
// Address: 0x175f58 - 0x1760b0
void sub_00175F58_0x175f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175F58_0x175f58");
#endif

    switch (ctx->pc) {
        case 0x175f88u: goto label_175f88;
        case 0x175f98u: goto label_175f98;
        case 0x175fb4u: goto label_175fb4;
        case 0x175fdcu: goto label_175fdc;
        case 0x175fecu: goto label_175fec;
        case 0x176038u: goto label_176038;
        case 0x17607cu: goto label_17607c;
        case 0x176090u: goto label_176090;
        default: break;
    }

    ctx->pc = 0x175f58u;

    // 0x175f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175f5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x175f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x175f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f64: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x175f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x175f68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x175f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x175f70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x175f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f74: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175F74u;
    {
        const bool branch_taken_0x175f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x175F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F74u;
            // 0x175f78: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f74) {
            ctx->pc = 0x175F90u;
            goto label_175f90;
        }
    }
    ctx->pc = 0x175F7Cu;
    // 0x175f7c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175f80: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x175F80u;
    SET_GPR_U32(ctx, 31, 0x175F88u);
    ctx->pc = 0x175F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F80u;
            // 0x175f84: 0x248448d0  addiu       $a0, $a0, 0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F88u; }
        if (ctx->pc != 0x175F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F88u; }
        if (ctx->pc != 0x175F88u) { return; }
    }
    ctx->pc = 0x175F88u;
label_175f88:
    // 0x175f88: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x175F88u;
    {
        const bool branch_taken_0x175f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F88u;
            // 0x175f8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f88) {
            ctx->pc = 0x17603Cu;
            goto label_17603c;
        }
    }
    ctx->pc = 0x175F90u;
label_175f90:
    // 0x175f90: 0xc05cc84  jal         func_173210
    ctx->pc = 0x175F90u;
    SET_GPR_U32(ctx, 31, 0x175F98u);
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F98u; }
        if (ctx->pc != 0x175F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F98u; }
        if (ctx->pc != 0x175F98u) { return; }
    }
    ctx->pc = 0x175F98u;
label_175f98:
    // 0x175f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f9c: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x175f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x175fa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fa4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x175fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x175fa8: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x175fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x175fac: 0xc05ac40  jal         func_16B100
    ctx->pc = 0x175FACu;
    SET_GPR_U32(ctx, 31, 0x175FB4u);
    ctx->pc = 0x175FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FACu;
            // 0x175fb0: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    if (runtime->hasFunction(0x16B100u)) {
        auto targetFn = runtime->lookupFunction(0x16B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB4u; }
        if (ctx->pc != 0x175FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B100_0x16b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB4u; }
        if (ctx->pc != 0x175FB4u) { return; }
    }
    ctx->pc = 0x175FB4u;
label_175fb4:
    // 0x175fb4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x175FB4u;
    {
        const bool branch_taken_0x175fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175fb4) {
            ctx->pc = 0x175FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175FB4u;
            // 0x175fb8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17603Cu;
            goto label_17603c;
        }
    }
    ctx->pc = 0x175FBCu;
    // 0x175fbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x175fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x175fc0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x175FC0u;
    {
        const bool branch_taken_0x175fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175fc0) {
            ctx->pc = 0x175FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175FC0u;
            // 0x175fc4: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176000u;
            goto label_176000;
        }
    }
    ctx->pc = 0x175FC8u;
    // 0x175fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x175fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fd4: 0xc059fd4  jal         func_167F50
    ctx->pc = 0x175FD4u;
    SET_GPR_U32(ctx, 31, 0x175FDCu);
    ctx->pc = 0x175FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FD4u;
            // 0x175fd8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167F50u;
    if (runtime->hasFunction(0x167F50u)) {
        auto targetFn = runtime->lookupFunction(0x167F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167F50_0x167f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    }
    ctx->pc = 0x175FDCu;
label_175fdc:
    // 0x175fdc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x175fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175fe0: 0x24844900  addiu       $a0, $a0, 0x4900
    ctx->pc = 0x175fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18688));
    // 0x175fe4: 0xc059f6c  jal         func_167DB0
    ctx->pc = 0x175FE4u;
    SET_GPR_U32(ctx, 31, 0x175FECu);
    ctx->pc = 0x175FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FE4u;
            // 0x175fe8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FECu; }
        if (ctx->pc != 0x175FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FECu; }
        if (ctx->pc != 0x175FECu) { return; }
    }
    ctx->pc = 0x175FECu;
label_175fec:
    // 0x175fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x175fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175ff0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x175ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175ff4: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x175ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x175ff8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x175FF8u;
    {
        const bool branch_taken_0x175ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175FF8u;
            // 0x175ffc: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ff8) {
            ctx->pc = 0x176038u;
            goto label_176038;
        }
    }
    ctx->pc = 0x176000u;
label_176000:
    // 0x176000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176004: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x176004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x176008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17600c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176014: 0x8e0800b0  lw          $t0, 0xB0($s0)
    ctx->pc = 0x176014u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x176018: 0xae0700b8  sw          $a3, 0xB8($s0)
    ctx->pc = 0x176018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 7));
    // 0x17601c: 0xae0800b4  sw          $t0, 0xB4($s0)
    ctx->pc = 0x17601cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 8));
    // 0x176020: 0xae0600bc  sw          $a2, 0xBC($s0)
    ctx->pc = 0x176020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 6));
    // 0x176024: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x176024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x176028: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x176028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17602c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x17602cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x176030: 0xc05d5c0  jal         func_175700
    ctx->pc = 0x176030u;
    SET_GPR_U32(ctx, 31, 0x176038u);
    ctx->pc = 0x176034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176030u;
            // 0x176034: 0xa20200ac  sb          $v0, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176038u; }
        if (ctx->pc != 0x176038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175700_0x175700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176038u; }
        if (ctx->pc != 0x176038u) { return; }
    }
    ctx->pc = 0x176038u;
label_176038:
    // 0x176038: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x176038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17603c:
    // 0x17603c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17603cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176040: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x176040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176044: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x176044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x176048: 0x3e00008  jr          $ra
    ctx->pc = 0x176048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176048u;
            // 0x17604c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176050u;
    // 0x176050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17605c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176060: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176068: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x176068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17606c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x176070: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176074: 0xc0599de  jal         func_166778
    ctx->pc = 0x176074u;
    SET_GPR_U32(ctx, 31, 0x17607Cu);
    ctx->pc = 0x176078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176074u;
            // 0x176078: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17607Cu; }
        if (ctx->pc != 0x17607Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17607Cu; }
        if (ctx->pc != 0x17607Cu) { return; }
    }
    ctx->pc = 0x17607Cu;
label_17607c:
    // 0x17607c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176080: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176084: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x176084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176088: 0xc05d82c  jal         func_1760B0
    ctx->pc = 0x176088u;
    SET_GPR_U32(ctx, 31, 0x176090u);
    ctx->pc = 0x17608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176088u;
            // 0x17608c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1760B0u;
    if (runtime->hasFunction(0x1760B0u)) {
        auto targetFn = runtime->lookupFunction(0x1760B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176090u; }
        if (ctx->pc != 0x176090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001760B0_0x1760b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176090u; }
        if (ctx->pc != 0x176090u) { return; }
    }
    ctx->pc = 0x176090u;
label_176090:
    // 0x176090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176098: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17609c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17609cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1760a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1760a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1760a4: 0x80599e0  j           func_166780
    ctx->pc = 0x1760A4u;
    ctx->pc = 0x1760A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760A4u;
            // 0x1760a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1760ACu;
    // 0x1760ac: 0x0  nop
    ctx->pc = 0x1760acu;
    // NOP
}
