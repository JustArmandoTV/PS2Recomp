#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291B80
// Address: 0x291b80 - 0x291ce0
void sub_00291B80_0x291b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291B80_0x291b80");
#endif

    switch (ctx->pc) {
        case 0x291c28u: goto label_291c28;
        case 0x291c74u: goto label_291c74;
        case 0x291cc4u: goto label_291cc4;
        default: break;
    }

    ctx->pc = 0x291b80u;

    // 0x291b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291b84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291b8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291b94: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x291b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x291b98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x291b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x291b9c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x291b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
    // 0x291ba0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x291ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x291ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291ba8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291bac: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x291bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x291bb0: 0x2463f550  addiu       $v1, $v1, -0xAB0
    ctx->pc = 0x291bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964560));
    // 0x291bb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291bb8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x291bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x291bbc: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x291bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x291bc0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291bc4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x291bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x291bc8: 0x2463f4d0  addiu       $v1, $v1, -0xB30
    ctx->pc = 0x291bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964432));
    // 0x291bcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291bd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x291bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x291bd4: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x291bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x291bd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291bdc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x291bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x291be0: 0x2463f4fc  addiu       $v1, $v1, -0xB04
    ctx->pc = 0x291be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964476));
    // 0x291be4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291be8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x291be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x291bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bf0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x291bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x291bf4: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x291bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x291bf8: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x291bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x291bfc: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x291bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x291c00: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x291c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x291c04: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x291c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x291c08: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x291c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x291c0c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x291c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x291c10: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x291c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x291c14: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x291c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x291c18: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x291c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x291c1c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x291c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x291c20: 0xc0a4738  jal         func_291CE0
    ctx->pc = 0x291C20u;
    SET_GPR_U32(ctx, 31, 0x291C28u);
    ctx->pc = 0x291C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C20u;
            // 0x291c24: 0xac8200a0  sw          $v0, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291CE0u;
    if (runtime->hasFunction(0x291CE0u)) {
        auto targetFn = runtime->lookupFunction(0x291CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C28u; }
        if (ctx->pc != 0x291C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291CE0_0x291ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C28u; }
        if (ctx->pc != 0x291C28u) { return; }
    }
    ctx->pc = 0x291C28u;
label_291c28:
    // 0x291c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291c34: 0x3e00008  jr          $ra
    ctx->pc = 0x291C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C34u;
            // 0x291c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291C3Cu;
    // 0x291c3c: 0x0  nop
    ctx->pc = 0x291c3cu;
    // NOP
    // 0x291c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c50: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x291C50u;
    {
        const bool branch_taken_0x291c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C50u;
            // 0x291c54: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c50) {
            ctx->pc = 0x291C78u;
            goto label_291c78;
        }
    }
    ctx->pc = 0x291C58u;
    // 0x291c58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291c5c: 0x2463f530  addiu       $v1, $v1, -0xAD0
    ctx->pc = 0x291c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964528));
    // 0x291c60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291c60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291c64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291C64u;
    {
        const bool branch_taken_0x291c64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C64u;
            // 0x291c68: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c64) {
            ctx->pc = 0x291C78u;
            goto label_291c78;
        }
    }
    ctx->pc = 0x291C6Cu;
    // 0x291c6c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x291C6Cu;
    SET_GPR_U32(ctx, 31, 0x291C74u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C74u; }
        if (ctx->pc != 0x291C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C74u; }
        if (ctx->pc != 0x291C74u) { return; }
    }
    ctx->pc = 0x291C74u;
label_291c74:
    // 0x291c74: 0x0  nop
    ctx->pc = 0x291c74u;
    // NOP
label_291c78:
    // 0x291c78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291c84: 0x3e00008  jr          $ra
    ctx->pc = 0x291C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C84u;
            // 0x291c88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291C8Cu;
    // 0x291c8c: 0x0  nop
    ctx->pc = 0x291c8cu;
    // NOP
    // 0x291c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ca0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x291CA0u;
    {
        const bool branch_taken_0x291ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CA0u;
            // 0x291ca4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ca0) {
            ctx->pc = 0x291CC8u;
            goto label_291cc8;
        }
    }
    ctx->pc = 0x291CA8u;
    // 0x291ca8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291cac: 0x2463f550  addiu       $v1, $v1, -0xAB0
    ctx->pc = 0x291cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964560));
    // 0x291cb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291cb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291cb4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291CB4u;
    {
        const bool branch_taken_0x291cb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CB4u;
            // 0x291cb8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cb4) {
            ctx->pc = 0x291CC8u;
            goto label_291cc8;
        }
    }
    ctx->pc = 0x291CBCu;
    // 0x291cbc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x291CBCu;
    SET_GPR_U32(ctx, 31, 0x291CC4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CC4u; }
        if (ctx->pc != 0x291CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CC4u; }
        if (ctx->pc != 0x291CC4u) { return; }
    }
    ctx->pc = 0x291CC4u;
label_291cc4:
    // 0x291cc4: 0x0  nop
    ctx->pc = 0x291cc4u;
    // NOP
label_291cc8:
    // 0x291cc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x291CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CD4u;
            // 0x291cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291CDCu;
    // 0x291cdc: 0x0  nop
    ctx->pc = 0x291cdcu;
    // NOP
}
