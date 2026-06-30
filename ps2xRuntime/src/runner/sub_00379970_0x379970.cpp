#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379970
// Address: 0x379970 - 0x379a50
void sub_00379970_0x379970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379970_0x379970");
#endif

    switch (ctx->pc) {
        case 0x379a04u: goto label_379a04;
        case 0x379a28u: goto label_379a28;
        case 0x379a38u: goto label_379a38;
        default: break;
    }

    ctx->pc = 0x379970u;

    // 0x379970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379974: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x379974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x379978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37997c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379984: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x379984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x379988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37998c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37998cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x379990: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x379990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x379994: 0xc44052f4  lwc1        $f0, 0x52F4($v0)
    ctx->pc = 0x379994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379998: 0x8c6552f0  lw          $a1, 0x52F0($v1)
    ctx->pc = 0x379998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21232)));
    // 0x37999c: 0x3c023eac  lui         $v0, 0x3EAC
    ctx->pc = 0x37999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16044 << 16));
    // 0x3799a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3799a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3799a4: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x3799a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3799a8: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x3799a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3799ac: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3799ACu;
    {
        const bool branch_taken_0x3799ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3799B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3799ACu;
            // 0x3799b0: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799ac) {
            ctx->pc = 0x3799C0u;
            goto label_3799c0;
        }
    }
    ctx->pc = 0x3799B4u;
    // 0x3799b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3799b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3799b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3799B8u;
    {
        const bool branch_taken_0x3799b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3799BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3799B8u;
            // 0x3799bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799b8) {
            ctx->pc = 0x3799DCu;
            goto label_3799dc;
        }
    }
    ctx->pc = 0x3799C0u;
label_3799c0:
    // 0x3799c0: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x3799c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3799c4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3799c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3799c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3799c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3799cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3799ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3799d0: 0x0  nop
    ctx->pc = 0x3799d0u;
    // NOP
    // 0x3799d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3799d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3799d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3799d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3799dc:
    // 0x3799dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3799dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3799e0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3799e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3799e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3799e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3799e8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x3799e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x3799ec: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3799ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3799f0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3799f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3799f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3799f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3799f8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3799f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3799fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3799FCu;
    {
        const bool branch_taken_0x3799fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3799FCu;
            // 0x379a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799fc) {
            ctx->pc = 0x379A20u;
            goto label_379a20;
        }
    }
    ctx->pc = 0x379A04u;
label_379a04:
    // 0x379a04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x379a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x379a08: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x379a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x379a0c: 0x0  nop
    ctx->pc = 0x379a0cu;
    // NOP
    // 0x379a10: 0x0  nop
    ctx->pc = 0x379a10u;
    // NOP
    // 0x379a14: 0x0  nop
    ctx->pc = 0x379a14u;
    // NOP
    // 0x379a18: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x379A18u;
    {
        const bool branch_taken_0x379a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379a18) {
            ctx->pc = 0x379A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_379a04;
        }
    }
    ctx->pc = 0x379A20u;
label_379a20:
    // 0x379a20: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x379A20u;
    SET_GPR_U32(ctx, 31, 0x379A28u);
    ctx->pc = 0x379A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379A20u;
            // 0x379a24: 0x920400ac  lbu         $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A28u; }
        if (ctx->pc != 0x379A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A28u; }
        if (ctx->pc != 0x379A28u) { return; }
    }
    ctx->pc = 0x379A28u;
label_379a28:
    // 0x379a28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x379A28u;
    {
        const bool branch_taken_0x379a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379a28) {
            ctx->pc = 0x379A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379A28u;
            // 0x379a2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379A3Cu;
            goto label_379a3c;
        }
    }
    ctx->pc = 0x379A30u;
    // 0x379a30: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x379A30u;
    SET_GPR_U32(ctx, 31, 0x379A38u);
    ctx->pc = 0x379A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379A30u;
            // 0x379a34: 0x920400ac  lbu         $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A38u; }
        if (ctx->pc != 0x379A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A38u; }
        if (ctx->pc != 0x379A38u) { return; }
    }
    ctx->pc = 0x379A38u;
label_379a38:
    // 0x379a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_379a3c:
    // 0x379a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379a40: 0x3e00008  jr          $ra
    ctx->pc = 0x379A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379A40u;
            // 0x379a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379A48u;
    // 0x379a48: 0x0  nop
    ctx->pc = 0x379a48u;
    // NOP
    // 0x379a4c: 0x0  nop
    ctx->pc = 0x379a4cu;
    // NOP
}
