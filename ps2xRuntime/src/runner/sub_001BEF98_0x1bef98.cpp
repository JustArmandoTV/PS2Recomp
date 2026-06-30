#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEF98
// Address: 0x1bef98 - 0x1bf0b0
void sub_001BEF98_0x1bef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEF98_0x1bef98");
#endif

    switch (ctx->pc) {
        case 0x1befe4u: goto label_1befe4;
        case 0x1bf018u: goto label_1bf018;
        case 0x1bf034u: goto label_1bf034;
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf07cu: goto label_1bf07c;
        default: break;
    }

    ctx->pc = 0x1bef98u;

    // 0x1bef98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bef9c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1befa0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1befa4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1befa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1befa8: 0x2453b608  addiu       $s3, $v0, -0x49F8
    ctx->pc = 0x1befa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948360));
    // 0x1befac: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1befacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1befb0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1befb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1befb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1befb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1befb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1befbc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1befbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befc0: 0x2465b618  addiu       $a1, $v1, -0x49E8
    ctx->pc = 0x1befc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948376));
    // 0x1befc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1befc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befc8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1befc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befcc: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1befccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1befd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1befd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befd4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1befd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1befd8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1befd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1befdc: 0xc06fc2c  jal         func_1BF0B0
    ctx->pc = 0x1BEFDCu;
    SET_GPR_U32(ctx, 31, 0x1BEFE4u);
    ctx->pc = 0x1BEFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFDCu;
            // 0x1befe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0B0u;
    if (runtime->hasFunction(0x1BF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFE4u; }
        if (ctx->pc != 0x1BEFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF0B0_0x1bf0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFE4u; }
        if (ctx->pc != 0x1BEFE4u) { return; }
    }
    ctx->pc = 0x1BEFE4u;
label_1befe4:
    // 0x1befe4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1befe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1befe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1befe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1befec: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1beff0: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1beff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1beff4: 0x24a5b620  addiu       $a1, $a1, -0x49E0
    ctx->pc = 0x1beff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948384));
    // 0x1beff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1beff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1beffc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEFFCu;
    {
        const bool branch_taken_0x1beffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFFCu;
            // 0x1bf000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beffc) {
            ctx->pc = 0x1BF010u;
            goto label_1bf010;
        }
    }
    ctx->pc = 0x1BF004u;
    // 0x1bf004: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1bf004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1bf008: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BF008u;
    {
        const bool branch_taken_0x1bf008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF008u;
            // 0x1bf00c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf008) {
            ctx->pc = 0x1BF08Cu;
            goto label_1bf08c;
        }
    }
    ctx->pc = 0x1BF010u;
label_1bf010:
    // 0x1bf010: 0xc04ae80  jal         func_12BA00
    ctx->pc = 0x1BF010u;
    SET_GPR_U32(ctx, 31, 0x1BF018u);
    ctx->pc = 0x12BA00u;
    if (runtime->hasFunction(0x12BA00u)) {
        auto targetFn = runtime->lookupFunction(0x12BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF018u; }
        if (ctx->pc != 0x1BF018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BA00_0x12ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF018u; }
        if (ctx->pc != 0x1BF018u) { return; }
    }
    ctx->pc = 0x1BF018u;
label_1bf018:
    // 0x1bf018: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bf018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bf01c: 0x24a5b628  addiu       $a1, $a1, -0x49D8
    ctx->pc = 0x1bf01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948392));
    // 0x1bf020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf024: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bf024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf028: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bf028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf02c: 0xc06fc2c  jal         func_1BF0B0
    ctx->pc = 0x1BF02Cu;
    SET_GPR_U32(ctx, 31, 0x1BF034u);
    ctx->pc = 0x1BF030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF02Cu;
            // 0x1bf030: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0B0u;
    if (runtime->hasFunction(0x1BF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF034u; }
        if (ctx->pc != 0x1BF034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF0B0_0x1bf0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF034u; }
        if (ctx->pc != 0x1BF034u) { return; }
    }
    ctx->pc = 0x1BF034u;
label_1bf034:
    // 0x1bf034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bf034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf038: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x1bf038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf03c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1bf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1bf040: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF040u;
    {
        const bool branch_taken_0x1bf040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF040u;
            // 0x1bf044: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf040) {
            ctx->pc = 0x1BF050u;
            goto label_1bf050;
        }
    }
    ctx->pc = 0x1BF048u;
    // 0x1bf048: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BF048u;
    {
        const bool branch_taken_0x1bf048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF048u;
            // 0x1bf04c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf048) {
            ctx->pc = 0x1BF08Cu;
            goto label_1bf08c;
        }
    }
    ctx->pc = 0x1BF050u;
label_1bf050:
    // 0x1bf050: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1BF050u;
    SET_GPR_U32(ctx, 31, 0x1BF058u);
    ctx->pc = 0x1BF054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF050u;
            // 0x1bf054: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF058u; }
        if (ctx->pc != 0x1BF058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF058u; }
        if (ctx->pc != 0x1BF058u) { return; }
    }
    ctx->pc = 0x1BF058u;
label_1bf058:
    // 0x1bf058: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bf05c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf060: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bf060u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bf064: 0x24a5b630  addiu       $a1, $a1, -0x49D0
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948400));
    // 0x1bf068: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1bf068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf06c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1bf06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bf070: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1bf070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1bf074: 0xc04ae80  jal         func_12BA00
    ctx->pc = 0x1BF074u;
    SET_GPR_U32(ctx, 31, 0x1BF07Cu);
    ctx->pc = 0x1BF078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF074u;
            // 0x1bf078: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BA00u;
    if (runtime->hasFunction(0x12BA00u)) {
        auto targetFn = runtime->lookupFunction(0x12BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF07Cu; }
        if (ctx->pc != 0x1BF07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BA00_0x12ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF07Cu; }
        if (ctx->pc != 0x1BF07Cu) { return; }
    }
    ctx->pc = 0x1BF07Cu;
label_1bf07c:
    // 0x1bf07c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1bf07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf080: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bf080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf084: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1bf084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1bf088: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bf088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1bf08c:
    // 0x1bf08c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1bf08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf090: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1bf090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf094: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bf094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf098: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1bf098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bf09c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bf09cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf0a0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1bf0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bf0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0A4u;
            // 0x1bf0a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF0ACu;
    // 0x1bf0ac: 0x0  nop
    ctx->pc = 0x1bf0acu;
    // NOP
}
