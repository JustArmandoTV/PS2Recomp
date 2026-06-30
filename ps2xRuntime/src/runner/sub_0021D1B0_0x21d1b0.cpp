#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D1B0
// Address: 0x21d1b0 - 0x21d2a0
void sub_0021D1B0_0x21d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D1B0_0x21d1b0");
#endif

    switch (ctx->pc) {
        case 0x21d1f4u: goto label_21d1f4;
        default: break;
    }

    ctx->pc = 0x21d1b0u;

    // 0x21d1b0: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x21d1b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21d1b4: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x21d1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x21d1b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21d1bc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x21d1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21d1c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d1c4: 0x24c80030  addiu       $t0, $a2, 0x30
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x21d1c8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x21d1cc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d1d0: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x21d1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x21d1d4: 0x94870006  lhu         $a3, 0x6($a0)
    ctx->pc = 0x21d1d4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x21d1d8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x21d1d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21d1dc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x21d1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x21d1e0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21d1e4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x21d1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d1e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21d1ec: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x21D1ECu;
    {
        const bool branch_taken_0x21d1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1ECu;
            // 0x21d1f0: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1ec) {
            ctx->pc = 0x21D290u;
            goto label_21d290;
        }
    }
    ctx->pc = 0x21D1F4u;
label_21d1f4:
    // 0x21d1f4: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x21d1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d1f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21d1fc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x21d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x21d200: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x21d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d204: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x21d204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x21d208: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x21d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d20c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x21d20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x21d210: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x21d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d214: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x21d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x21d218: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x21d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d21c: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x21d21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x21d220: 0xc5000034  lwc1        $f0, 0x34($t0)
    ctx->pc = 0x21d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d224: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x21d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x21d228: 0xc5000038  lwc1        $f0, 0x38($t0)
    ctx->pc = 0x21d228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d22c: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x21d22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x21d230: 0xc500003c  lwc1        $f0, 0x3C($t0)
    ctx->pc = 0x21d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d234: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x21d234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x21d238: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x21d238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d23c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x21d240: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x21d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x21d244: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x21d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d248: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x21d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x21d24c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x21d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x21d250: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x21d250u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x21d254: 0x90c30020  lbu         $v1, 0x20($a2)
    ctx->pc = 0x21d254u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x21d258: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x21d258u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d25c: 0x90c30021  lbu         $v1, 0x21($a2)
    ctx->pc = 0x21d25cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 33)));
    // 0x21d260: 0xa0c3000d  sb          $v1, 0xD($a2)
    ctx->pc = 0x21d260u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d264: 0x90c30022  lbu         $v1, 0x22($a2)
    ctx->pc = 0x21d264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x21d268: 0xa0c3000e  sb          $v1, 0xE($a2)
    ctx->pc = 0x21d268u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d26c: 0x90c30023  lbu         $v1, 0x23($a2)
    ctx->pc = 0x21d26cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 35)));
    // 0x21d270: 0xa0c3000f  sb          $v1, 0xF($a2)
    ctx->pc = 0x21d270u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d274: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x21d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d278: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x21d278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x21d27c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x21d27cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21d280: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x21d280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d284: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21D284u;
    {
        const bool branch_taken_0x21d284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D284u;
            // 0x21d288: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d284) {
            ctx->pc = 0x21D1F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d1f4;
        }
    }
    ctx->pc = 0x21D28Cu;
    // 0x21d28c: 0x0  nop
    ctx->pc = 0x21d28cu;
    // NOP
label_21d290:
    // 0x21d290: 0x3e00008  jr          $ra
    ctx->pc = 0x21D290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D298u;
    // 0x21d298: 0x0  nop
    ctx->pc = 0x21d298u;
    // NOP
    // 0x21d29c: 0x0  nop
    ctx->pc = 0x21d29cu;
    // NOP
}
