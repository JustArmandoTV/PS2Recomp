#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011FFA0
// Address: 0x11ffa0 - 0x1200b8
void sub_0011FFA0_0x11ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FFA0_0x11ffa0");
#endif

    switch (ctx->pc) {
        case 0x11fff8u: goto label_11fff8;
        case 0x120044u: goto label_120044;
        case 0x120064u: goto label_120064;
        case 0x120088u: goto label_120088;
        default: break;
    }

    ctx->pc = 0x11ffa0u;

    // 0x11ffa0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x11ffa4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x11ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11ffa8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x11ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x11ffac: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x11ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x11ffb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ffb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ffb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffb8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x11ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11ffbc: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x11ffbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11ffc0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x11ffc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11ffc4: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x11ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x11ffc8: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x11ffc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x11ffcc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x11ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x11ffd0: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x11ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x11ffd4: 0x26620d10  addiu       $v0, $s3, 0xD10
    ctx->pc = 0x11ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3344));
    // 0x11ffd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11ffdc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x11ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ffe0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11ffe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffe4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x11ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11ffe8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FFE8u;
    {
        const bool branch_taken_0x11ffe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FFE8u;
            // 0x11ffec: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffe8) {
            ctx->pc = 0x120000u;
            goto label_120000;
        }
    }
    ctx->pc = 0x11FFF0u;
    // 0x11fff0: 0xc0431c0  jal         func_10C700
    ctx->pc = 0x11FFF0u;
    SET_GPR_U32(ctx, 31, 0x11FFF8u);
    ctx->pc = 0x10C700u;
    if (runtime->hasFunction(0x10C700u)) {
        auto targetFn = runtime->lookupFunction(0x10C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFF8u; }
        if (ctx->pc != 0x11FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C700_0x10c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFF8u; }
        if (ctx->pc != 0x11FFF8u) { return; }
    }
    ctx->pc = 0x11FFF8u;
label_11fff8:
    // 0x11fff8: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11FFF8u;
    {
        const bool branch_taken_0x11fff8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11FFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FFF8u;
            // 0x11fffc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fff8) {
            ctx->pc = 0x120074u;
            goto label_120074;
        }
    }
    ctx->pc = 0x120000u;
label_120000:
    // 0x120000: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x120000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x120004: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x120004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x120008: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x120008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x12000c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x12000cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x120010: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x120010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120014: 0x26730d10  addiu       $s3, $s3, 0xD10
    ctx->pc = 0x120014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3344));
    // 0x120018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12001c: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x12001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x120020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x120020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x120024: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x120024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x120028: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x120028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12002c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x12002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x120030: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x120030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x120034: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x120034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x120038: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x120038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x12003c: 0xc043316  jal         func_10CC58
    ctx->pc = 0x12003Cu;
    SET_GPR_U32(ctx, 31, 0x120044u);
    ctx->pc = 0x120040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12003Cu;
            // 0x120040: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120044u; }
        if (ctx->pc != 0x120044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120044u; }
        if (ctx->pc != 0x120044u) { return; }
    }
    ctx->pc = 0x120044u;
label_120044:
    // 0x120044: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x120044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120048: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x120048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x12004c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x12004cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x120050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120054: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x120054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x120058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12005c: 0xc043ca2  jal         func_10F288
    ctx->pc = 0x12005Cu;
    SET_GPR_U32(ctx, 31, 0x120064u);
    ctx->pc = 0x120060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12005Cu;
            // 0x120060: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F288u;
    if (runtime->hasFunction(0x10F288u)) {
        auto targetFn = runtime->lookupFunction(0x10F288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120064u; }
        if (ctx->pc != 0x120064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F288_0x10f288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120064u; }
        if (ctx->pc != 0x120064u) { return; }
    }
    ctx->pc = 0x120064u;
label_120064:
    // 0x120064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120068: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x120068u;
    {
        const bool branch_taken_0x120068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120068u;
            // 0x12006c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120068) {
            ctx->pc = 0x120090u;
            goto label_120090;
        }
    }
    ctx->pc = 0x120070u;
    // 0x120070: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_120074:
    // 0x120074: 0x8c43168c  lw          $v1, 0x168C($v0)
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5772)));
    // 0x120078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120078u;
    {
        const bool branch_taken_0x120078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120078u;
            // 0x12007c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120078) {
            ctx->pc = 0x120088u;
            goto label_120088;
        }
    }
    ctx->pc = 0x120080u;
    // 0x120080: 0xc043c12  jal         func_10F048
    ctx->pc = 0x120080u;
    SET_GPR_U32(ctx, 31, 0x120088u);
    ctx->pc = 0x120084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120080u;
            // 0x120084: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120088u; }
        if (ctx->pc != 0x120088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120088u; }
        if (ctx->pc != 0x120088u) { return; }
    }
    ctx->pc = 0x120088u;
label_120088:
    // 0x120088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120088u;
    {
        const bool branch_taken_0x120088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120088u;
            // 0x12008c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120088) {
            ctx->pc = 0x120098u;
            goto label_120098;
        }
    }
    ctx->pc = 0x120090u;
label_120090:
    // 0x120090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120094: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x120094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_120098:
    // 0x120098: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x120098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12009c: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x12009cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1200a0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1200a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1200a4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1200a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1200a8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1200a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1200ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1200ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1200B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1200ACu;
            // 0x1200b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1200B4u;
    // 0x1200b4: 0x0  nop
    ctx->pc = 0x1200b4u;
    // NOP
}
