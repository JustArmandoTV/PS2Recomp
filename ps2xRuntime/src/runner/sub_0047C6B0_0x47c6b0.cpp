#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C6B0
// Address: 0x47c6b0 - 0x47c9f0
void sub_0047C6B0_0x47c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C6B0_0x47c6b0");
#endif

    switch (ctx->pc) {
        case 0x47c780u: goto label_47c780;
        case 0x47c7b8u: goto label_47c7b8;
        case 0x47c7ecu: goto label_47c7ec;
        case 0x47c800u: goto label_47c800;
        case 0x47c818u: goto label_47c818;
        case 0x47c834u: goto label_47c834;
        case 0x47c84cu: goto label_47c84c;
        case 0x47c868u: goto label_47c868;
        case 0x47c888u: goto label_47c888;
        case 0x47c8b4u: goto label_47c8b4;
        case 0x47c8d8u: goto label_47c8d8;
        case 0x47c954u: goto label_47c954;
        case 0x47c974u: goto label_47c974;
        case 0x47c980u: goto label_47c980;
        case 0x47c994u: goto label_47c994;
        case 0x47c9a8u: goto label_47c9a8;
        case 0x47c9c0u: goto label_47c9c0;
        default: break;
    }

    ctx->pc = 0x47c6b0u;

    // 0x47c6b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x47c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x47c6b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x47c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x47c6b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x47c6bc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x47c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x47c6c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47c6c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47c6c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47c6c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c6cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47c6d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47c6d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c6d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c6d8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x47c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c6dc: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x47c6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47c6e0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x47c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c6e4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x47c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c6e8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x47c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c6ec: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x47c6ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x47c6f0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x47c6f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x47c6f4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x47c6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x47c6f8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x47c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x47c6fc: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x47c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c700: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x47c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c704: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x47c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c708: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x47c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c70c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x47c70cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x47c710: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x47c710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x47c714: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x47c714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x47c718: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x47c718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x47c71c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x47c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x47c720: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x47c720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x47c724: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x47c724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x47c728: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x47c728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x47c72c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x47c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x47c730: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x47c730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x47c734: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x47c734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x47c738: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x47c738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x47c73c: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x47c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x47c740: 0xa085004c  sb          $a1, 0x4C($a0)
    ctx->pc = 0x47c740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 5));
    // 0x47c744: 0xa090004d  sb          $s0, 0x4D($a0)
    ctx->pc = 0x47c744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 16));
    // 0x47c748: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x47c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x47c74c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x47c74cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x47c750: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x47c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x47c754: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x47c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x47c758: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x47c758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x47c75c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x47C75Cu;
    {
        const bool branch_taken_0x47c75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C75Cu;
            // 0x47c760: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c75c) {
            ctx->pc = 0x47C780u;
            goto label_47c780;
        }
    }
    ctx->pc = 0x47C764u;
    // 0x47c764: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x47c764u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47c768: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x47c768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x47c76c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x47C76Cu;
    {
        const bool branch_taken_0x47c76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c76c) {
            ctx->pc = 0x47C770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C76Cu;
            // 0x47c770: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C774u;
            goto label_47c774;
        }
    }
    ctx->pc = 0x47C774u;
label_47c774:
    // 0x47c774: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x47c774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x47c778: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x47C778u;
    SET_GPR_U32(ctx, 31, 0x47C780u);
    ctx->pc = 0x47C77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C778u;
            // 0x47c77c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C780u; }
        if (ctx->pc != 0x47C780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C780u; }
        if (ctx->pc != 0x47C780u) { return; }
    }
    ctx->pc = 0x47C780u;
label_47c780:
    // 0x47c780: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x47c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x47c784: 0x9263004d  lbu         $v1, 0x4D($s3)
    ctx->pc = 0x47c784u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 77)));
    // 0x47c788: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x47c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x47c78c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x47c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x47c790: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x47c790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x47c794: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x47C794u;
    {
        const bool branch_taken_0x47c794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c794) {
            ctx->pc = 0x47C798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C794u;
            // 0x47c798: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C7BCu;
            goto label_47c7bc;
        }
    }
    ctx->pc = 0x47C79Cu;
    // 0x47c79c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x47c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47c7a0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x47c7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x47c7a4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x47C7A4u;
    {
        const bool branch_taken_0x47c7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c7a4) {
            ctx->pc = 0x47C7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C7A4u;
            // 0x47c7a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C7ACu;
            goto label_47c7ac;
        }
    }
    ctx->pc = 0x47C7ACu;
label_47c7ac:
    // 0x47c7ac: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x47c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x47c7b0: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x47C7B0u;
    SET_GPR_U32(ctx, 31, 0x47C7B8u);
    ctx->pc = 0x47C7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C7B0u;
            // 0x47c7b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C7B8u; }
        if (ctx->pc != 0x47C7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C7B8u; }
        if (ctx->pc != 0x47C7B8u) { return; }
    }
    ctx->pc = 0x47C7B8u;
label_47c7b8:
    // 0x47c7b8: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x47c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_47c7bc:
    // 0x47c7bc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x47c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x47c7c0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x47c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x47c7c4: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x47c7c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x47c7c8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x47C7C8u;
    {
        const bool branch_taken_0x47c7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c7c8) {
            ctx->pc = 0x47C7ECu;
            goto label_47c7ec;
        }
    }
    ctx->pc = 0x47C7D0u;
    // 0x47c7d0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x47c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47c7d4: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x47c7d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x47c7d8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x47C7D8u;
    {
        const bool branch_taken_0x47c7d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c7d8) {
            ctx->pc = 0x47C7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C7D8u;
            // 0x47c7dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C7E0u;
            goto label_47c7e0;
        }
    }
    ctx->pc = 0x47C7E0u;
label_47c7e0:
    // 0x47c7e0: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x47c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x47c7e4: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x47C7E4u;
    SET_GPR_U32(ctx, 31, 0x47C7ECu);
    ctx->pc = 0x47C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C7E4u;
            // 0x47c7e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C7ECu; }
        if (ctx->pc != 0x47C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C7ECu; }
        if (ctx->pc != 0x47C7ECu) { return; }
    }
    ctx->pc = 0x47C7ECu;
label_47c7ec:
    // 0x47c7ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47c7f0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x47c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x47c7f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x47c7f8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x47C7F8u;
    SET_GPR_U32(ctx, 31, 0x47C800u);
    ctx->pc = 0x47C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C7F8u;
            // 0x47c7fc: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C800u; }
        if (ctx->pc != 0x47C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C800u; }
        if (ctx->pc != 0x47C800u) { return; }
    }
    ctx->pc = 0x47C800u;
label_47c800:
    // 0x47c800: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x47c800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x47c804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c808: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47C808u;
    {
        const bool branch_taken_0x47c808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C808u;
            // 0x47c80c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c808) {
            ctx->pc = 0x47C81Cu;
            goto label_47c81c;
        }
    }
    ctx->pc = 0x47C810u;
    // 0x47c810: 0xc0874ec  jal         func_21D3B0
    ctx->pc = 0x47C810u;
    SET_GPR_U32(ctx, 31, 0x47C818u);
    ctx->pc = 0x21D3B0u;
    if (runtime->hasFunction(0x21D3B0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C818u; }
        if (ctx->pc != 0x47C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D3B0_0x21d3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C818u; }
        if (ctx->pc != 0x47C818u) { return; }
    }
    ctx->pc = 0x47C818u;
label_47c818:
    // 0x47c818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c81c:
    // 0x47c81c: 0xae64003c  sw          $a0, 0x3C($s3)
    ctx->pc = 0x47c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 4));
    // 0x47c820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47c820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47c824: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x47c828: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x47c828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x47c82c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x47C82Cu;
    SET_GPR_U32(ctx, 31, 0x47C834u);
    ctx->pc = 0x47C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C82Cu;
            // 0x47c830: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C834u; }
        if (ctx->pc != 0x47C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C834u; }
        if (ctx->pc != 0x47C834u) { return; }
    }
    ctx->pc = 0x47C834u;
label_47c834:
    // 0x47c834: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x47c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x47c838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c83c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47C83Cu;
    {
        const bool branch_taken_0x47c83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C83Cu;
            // 0x47c840: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c83c) {
            ctx->pc = 0x47C850u;
            goto label_47c850;
        }
    }
    ctx->pc = 0x47C844u;
    // 0x47c844: 0xc087848  jal         func_21E120
    ctx->pc = 0x47C844u;
    SET_GPR_U32(ctx, 31, 0x47C84Cu);
    ctx->pc = 0x47C848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C844u;
            // 0x47c848: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E120u;
    if (runtime->hasFunction(0x21E120u)) {
        auto targetFn = runtime->lookupFunction(0x21E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C84Cu; }
        if (ctx->pc != 0x47C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E120_0x21e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C84Cu; }
        if (ctx->pc != 0x47C84Cu) { return; }
    }
    ctx->pc = 0x47C84Cu;
label_47c84c:
    // 0x47c84c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c850:
    // 0x47c850: 0xae640038  sw          $a0, 0x38($s3)
    ctx->pc = 0x47c850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 4));
    // 0x47c854: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47c854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47c858: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47c858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x47c85c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x47c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x47c860: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x47C860u;
    SET_GPR_U32(ctx, 31, 0x47C868u);
    ctx->pc = 0x47C864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C860u;
            // 0x47c864: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C868u; }
        if (ctx->pc != 0x47C868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C868u; }
        if (ctx->pc != 0x47C868u) { return; }
    }
    ctx->pc = 0x47C868u;
label_47c868:
    // 0x47c868: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x47c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x47c86c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c870: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47C870u;
    {
        const bool branch_taken_0x47c870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C870u;
            // 0x47c874: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c870) {
            ctx->pc = 0x47C88Cu;
            goto label_47c88c;
        }
    }
    ctx->pc = 0x47C878u;
    // 0x47c878: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47c878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x47c87c: 0xc44c9ba0  lwc1        $f12, -0x6460($v0)
    ctx->pc = 0x47c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47c880: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x47C880u;
    SET_GPR_U32(ctx, 31, 0x47C888u);
    ctx->pc = 0x47C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C880u;
            // 0x47c884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C888u; }
        if (ctx->pc != 0x47C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C888u; }
        if (ctx->pc != 0x47C888u) { return; }
    }
    ctx->pc = 0x47C888u;
label_47c888:
    // 0x47c888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c88c:
    // 0x47c88c: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x47c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
    // 0x47c890: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x47c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x47c894: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x47c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x47c898: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x47c898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x47c89c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x47c89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x47c8a0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47C8A0u;
    {
        const bool branch_taken_0x47c8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47c8a0) {
            ctx->pc = 0x47C8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C8A0u;
            // 0x47c8a4: 0x8e630030  lw          $v1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C8B8u;
            goto label_47c8b8;
        }
    }
    ctx->pc = 0x47C8A8u;
    // 0x47c8a8: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x47c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x47c8ac: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x47C8ACu;
    SET_GPR_U32(ctx, 31, 0x47C8B4u);
    ctx->pc = 0x47C8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C8ACu;
            // 0x47c8b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C8B4u; }
        if (ctx->pc != 0x47C8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C8B4u; }
        if (ctx->pc != 0x47C8B4u) { return; }
    }
    ctx->pc = 0x47C8B4u;
label_47c8b4:
    // 0x47c8b4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x47c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_47c8b8:
    // 0x47c8b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x47c8bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x47c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x47c8c0: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x47c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x47c8c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x47c8c8: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x47c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x47c8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c8d0: 0xc0892d0  jal         func_224B40
    ctx->pc = 0x47C8D0u;
    SET_GPR_U32(ctx, 31, 0x47C8D8u);
    ctx->pc = 0x47C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C8D0u;
            // 0x47c8d4: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C8D8u; }
        if (ctx->pc != 0x47C8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C8D8u; }
        if (ctx->pc != 0x47C8D8u) { return; }
    }
    ctx->pc = 0x47C8D8u;
label_47c8d8:
    // 0x47c8d8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x47c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x47c8dc: 0xafb000a4  sw          $s0, 0xA4($sp)
    ctx->pc = 0x47c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
    // 0x47c8e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x47c8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x47c8e4: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x47c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x47c8e8: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x47c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x47c8ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x47c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x47c8f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x47c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x47c8f4: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x47c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x47c8f8: 0xa3a20150  sb          $v0, 0x150($sp)
    ctx->pc = 0x47c8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 2));
    // 0x47c8fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c900: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x47c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x47c904: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x47c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x47c908: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x47c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c90c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x47c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x47c910: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x47c910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c914: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x47c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c918: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x47c918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x47c91c: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x47c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x47c920: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x47c920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x47c924: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x47c924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x47c928: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x47c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c92c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x47c92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c930: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x47c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c934: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x47c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c938: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x47c938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x47c93c: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x47c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x47c940: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x47c940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x47c944: 0xa3a20153  sb          $v0, 0x153($sp)
    ctx->pc = 0x47c944u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 339), (uint8_t)GPR_U32(ctx, 2));
    // 0x47c948: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x47c948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x47c94c: 0xc0f667c  jal         func_3D99F0
    ctx->pc = 0x47C94Cu;
    SET_GPR_U32(ctx, 31, 0x47C954u);
    ctx->pc = 0x47C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C94Cu;
            // 0x47c950: 0xe7a300cc  swc1        $f3, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D99F0u;
    if (runtime->hasFunction(0x3D99F0u)) {
        auto targetFn = runtime->lookupFunction(0x3D99F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C954u; }
        if (ctx->pc != 0x47C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D99F0_0x3d99f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C954u; }
        if (ctx->pc != 0x47C954u) { return; }
    }
    ctx->pc = 0x47C954u;
label_47c954:
    // 0x47c954: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x47c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x47c958: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x47c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x47c95c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x47c960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47c960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x47c964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c968: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x47c968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47c96c: 0xc087884  jal         func_21E210
    ctx->pc = 0x47C96Cu;
    SET_GPR_U32(ctx, 31, 0x47C974u);
    ctx->pc = 0x47C970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C96Cu;
            // 0x47c970: 0x8e640038  lw          $a0, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (runtime->hasFunction(0x21E210u)) {
        auto targetFn = runtime->lookupFunction(0x21E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C974u; }
        if (ctx->pc != 0x47C974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E210_0x21e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C974u; }
        if (ctx->pc != 0x47C974u) { return; }
    }
    ctx->pc = 0x47C974u;
label_47c974:
    // 0x47c974: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x47c974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x47c978: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x47C978u;
    SET_GPR_U32(ctx, 31, 0x47C980u);
    ctx->pc = 0x47C97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C978u;
            // 0x47c97c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C980u; }
        if (ctx->pc != 0x47C980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C980u; }
        if (ctx->pc != 0x47C980u) { return; }
    }
    ctx->pc = 0x47C980u;
label_47c980:
    // 0x47c980: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x47c980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x47c984: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47c988: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x47c988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x47c98c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x47C98Cu;
    SET_GPR_U32(ctx, 31, 0x47C994u);
    ctx->pc = 0x47C990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C98Cu;
            // 0x47c990: 0x24c6f610  addiu       $a2, $a2, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C994u; }
        if (ctx->pc != 0x47C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C994u; }
        if (ctx->pc != 0x47C994u) { return; }
    }
    ctx->pc = 0x47C994u;
label_47c994:
    // 0x47c994: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x47c998: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47c99c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47c99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47c9a0: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x47C9A0u;
    SET_GPR_U32(ctx, 31, 0x47C9A8u);
    ctx->pc = 0x47C9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C9A0u;
            // 0x47c9a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C9A8u; }
        if (ctx->pc != 0x47C9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C9A8u; }
        if (ctx->pc != 0x47C9A8u) { return; }
    }
    ctx->pc = 0x47C9A8u;
label_47c9a8:
    // 0x47c9a8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x47c9ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c9b0: 0xc44c9ba0  lwc1        $f12, -0x6460($v0)
    ctx->pc = 0x47c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47c9b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c9b8: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x47C9B8u;
    SET_GPR_U32(ctx, 31, 0x47C9C0u);
    ctx->pc = 0x47C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C9B8u;
            // 0x47c9bc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C9C0u; }
        if (ctx->pc != 0x47C9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C9C0u; }
        if (ctx->pc != 0x47C9C0u) { return; }
    }
    ctx->pc = 0x47C9C0u;
label_47c9c0:
    // 0x47c9c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47c9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c9c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47c9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c9c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47c9c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c9cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47c9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c9d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47c9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x47C9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C9D8u;
            // 0x47c9dc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C9E0u;
    // 0x47c9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x47C9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C9E0u;
            // 0x47c9e4: 0x24025230  addiu       $v0, $zero, 0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C9E8u;
    // 0x47c9e8: 0x0  nop
    ctx->pc = 0x47c9e8u;
    // NOP
    // 0x47c9ec: 0x0  nop
    ctx->pc = 0x47c9ecu;
    // NOP
}
