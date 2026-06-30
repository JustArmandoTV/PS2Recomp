#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00380D50
// Address: 0x380d50 - 0x380f40
void sub_00380D50_0x380d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380D50_0x380d50");
#endif

    switch (ctx->pc) {
        case 0x380eb0u: goto label_380eb0;
        case 0x380f08u: goto label_380f08;
        case 0x380f20u: goto label_380f20;
        default: break;
    }

    ctx->pc = 0x380d50u;

    // 0x380d50: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x380d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x380d54: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x380d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x380d58: 0x8c6a0eac  lw          $t2, 0xEAC($v1)
    ctx->pc = 0x380d58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
    // 0x380d5c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x380d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x380d60: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x380d60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x380d64: 0x3c0900af  lui         $t1, 0xAF
    ctx->pc = 0x380d64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)175 << 16));
    // 0x380d68: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x380d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x380d6c: 0x8d480094  lw          $t0, 0x94($t2)
    ctx->pc = 0x380d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x380d70: 0xc4615984  lwc1        $f1, 0x5984($v1)
    ctx->pc = 0x380d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x380d74: 0x8d470098  lw          $a3, 0x98($t2)
    ctx->pc = 0x380d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 152)));
    // 0x380d78: 0x8d4600a0  lw          $a2, 0xA0($t2)
    ctx->pc = 0x380d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 160)));
    // 0x380d7c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x380d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x380d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380d84: 0x0  nop
    ctx->pc = 0x380d84u;
    // NOP
    // 0x380d88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x380d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x380d8c: 0x8d430078  lw          $v1, 0x78($t2)
    ctx->pc = 0x380d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x380d90: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x380d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x380d94: 0x35823  negu        $t3, $v1
    ctx->pc = 0x380d94u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x380d98: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x380d98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
    // 0x380d9c: 0xe4806100  swc1        $f0, 0x6100($a0)
    ctx->pc = 0x380d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24832), bits); }
    // 0x380da0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x380da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x380da4: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x380da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x380da8: 0x8d4a0080  lw          $t2, 0x80($t2)
    ctx->pc = 0x380da8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x380dac: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x380dacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x380db0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x380db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x380db4: 0xe46821  addu        $t5, $a3, $a0
    ctx->pc = 0x380db4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x380db8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x380db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x380dbc: 0xacaa60c0  sw          $t2, 0x60C0($a1)
    ctx->pc = 0x380dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24768), GPR_U32(ctx, 10));
    // 0x380dc0: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x380dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x380dc4: 0xa48b60d4  sh          $t3, 0x60D4($a0)
    ctx->pc = 0x380dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24788), (uint16_t)GPR_U32(ctx, 11));
    // 0x380dc8: 0xac6060d0  sw          $zero, 0x60D0($v1)
    ctx->pc = 0x380dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24784), GPR_U32(ctx, 0));
    // 0x380dcc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x380dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x380dd0: 0xa4eb60d8  sh          $t3, 0x60D8($a3)
    ctx->pc = 0x380dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24792), (uint16_t)GPR_U32(ctx, 11));
    // 0x380dd4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x380dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x380dd8: 0x848b5978  lh          $t3, 0x5978($a0)
    ctx->pc = 0x380dd8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22904)));
    // 0x380ddc: 0xe46160dc  swc1        $f1, 0x60DC($v1)
    ctx->pc = 0x380ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24796), bits); }
    // 0x380de0: 0xad0c60c8  sw          $t4, 0x60C8($t0)
    ctx->pc = 0x380de0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24776), GPR_U32(ctx, 12));
    // 0x380de4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x380de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x380de8: 0x90c35982  lbu         $v1, 0x5982($a2)
    ctx->pc = 0x380de8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22914)));
    // 0x380dec: 0x3c0a00af  lui         $t2, 0xAF
    ctx->pc = 0x380decu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)175 << 16));
    // 0x380df0: 0x84ac597e  lh          $t4, 0x597E($a1)
    ctx->pc = 0x380df0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22910)));
    // 0x380df4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x380df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x380df8: 0xe48160e8  swc1        $f1, 0x60E8($a0)
    ctx->pc = 0x380df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24808), bits); }
    // 0x380dfc: 0xad2d60c4  sw          $t5, 0x60C4($t1)
    ctx->pc = 0x380dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24772), GPR_U32(ctx, 13));
    // 0x380e00: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x380e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x380e04: 0x3c0900af  lui         $t1, 0xAF
    ctx->pc = 0x380e04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)175 << 16));
    // 0x380e08: 0x1832023  subu        $a0, $t4, $v1
    ctx->pc = 0x380e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x380e0c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x380e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x380e10: 0xa4c460e2  sh          $a0, 0x60E2($a2)
    ctx->pc = 0x380e10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24802), (uint16_t)GPR_U32(ctx, 4));
    // 0x380e14: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x380e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
    // 0x380e18: 0xa54460d6  sh          $a0, 0x60D6($t2)
    ctx->pc = 0x380e18u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24790), (uint16_t)GPR_U32(ctx, 4));
    // 0x380e1c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x380e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x380e20: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x380e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x380e24: 0xa4ac60e6  sh          $t4, 0x60E6($a1)
    ctx->pc = 0x380e24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24806), (uint16_t)GPR_U32(ctx, 12));
    // 0x380e28: 0x848a597a  lh          $t2, 0x597A($a0)
    ctx->pc = 0x380e28u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22906)));
    // 0x380e2c: 0xb2823  negu        $a1, $t3
    ctx->pc = 0x380e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
    // 0x380e30: 0xa52c60da  sh          $t4, 0x60DA($t1)
    ctx->pc = 0x380e30u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24794), (uint16_t)GPR_U32(ctx, 12));
    // 0x380e34: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x380e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x380e38: 0xa50560e4  sh          $a1, 0x60E4($t0)
    ctx->pc = 0x380e38u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24804), (uint16_t)GPR_U32(ctx, 5));
    // 0x380e3c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x380e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x380e40: 0xa4e560e0  sh          $a1, 0x60E0($a3)
    ctx->pc = 0x380e40u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24800), (uint16_t)GPR_U32(ctx, 5));
    // 0x380e44: 0x84895980  lh          $t1, 0x5980($a0)
    ctx->pc = 0x380e44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22912)));
    // 0x380e48: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x380e48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
    // 0x380e4c: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x380e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x380e50: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x380e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x380e54: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x380e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x380e58: 0xa4c960f2  sh          $t1, 0x60F2($a2)
    ctx->pc = 0x380e58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24818), (uint16_t)GPR_U32(ctx, 9));
    // 0x380e5c: 0xe48160f4  swc1        $f1, 0x60F4($a0)
    ctx->pc = 0x380e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24820), bits); }
    // 0x380e60: 0xa2023  negu        $a0, $t2
    ctx->pc = 0x380e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x380e64: 0xa50460f0  sh          $a0, 0x60F0($t0)
    ctx->pc = 0x380e64u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24816), (uint16_t)GPR_U32(ctx, 4));
    // 0x380e68: 0x1234023  subu        $t0, $t1, $v1
    ctx->pc = 0x380e68u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x380e6c: 0xa4e460ec  sh          $a0, 0x60EC($a3)
    ctx->pc = 0x380e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24812), (uint16_t)GPR_U32(ctx, 4));
    // 0x380e70: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x380e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x380e74: 0xa4a860ee  sh          $t0, 0x60EE($a1)
    ctx->pc = 0x380e74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24814), (uint16_t)GPR_U32(ctx, 8));
    // 0x380e78: 0x8466597c  lh          $a2, 0x597C($v1)
    ctx->pc = 0x380e78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22908)));
    // 0x380e7c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x380e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x380e80: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x380e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x380e84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x380e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x380e88: 0xa46860fa  sh          $t0, 0x60FA($v1)
    ctx->pc = 0x380e88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24826), (uint16_t)GPR_U32(ctx, 8));
    // 0x380e8c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x380e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x380e90: 0xa46960fe  sh          $t1, 0x60FE($v1)
    ctx->pc = 0x380e90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24830), (uint16_t)GPR_U32(ctx, 9));
    // 0x380e94: 0x61823  negu        $v1, $a2
    ctx->pc = 0x380e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x380e98: 0xa4a360fc  sh          $v1, 0x60FC($a1)
    ctx->pc = 0x380e98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24828), (uint16_t)GPR_U32(ctx, 3));
    // 0x380e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x380E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380E9Cu;
            // 0x380ea0: 0xa48360f8  sh          $v1, 0x60F8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24824), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x380EA4u;
    // 0x380ea4: 0x0  nop
    ctx->pc = 0x380ea4u;
    // NOP
    // 0x380ea8: 0x0  nop
    ctx->pc = 0x380ea8u;
    // NOP
    // 0x380eac: 0x0  nop
    ctx->pc = 0x380eacu;
    // NOP
label_380eb0:
    // 0x380eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x380eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x380ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ec4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x380EC4u;
    {
        const bool branch_taken_0x380ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380EC4u;
            // 0x380ec8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ec4) {
            ctx->pc = 0x380F20u;
            goto label_380f20;
        }
    }
    ctx->pc = 0x380ECCu;
    // 0x380ecc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x380eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x380ed0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x380ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x380ed4: 0x24637650  addiu       $v1, $v1, 0x7650
    ctx->pc = 0x380ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30288));
    // 0x380ed8: 0x24427688  addiu       $v0, $v0, 0x7688
    ctx->pc = 0x380ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30344));
    // 0x380edc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x380edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x380ee0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x380EE0u;
    {
        const bool branch_taken_0x380ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380EE0u;
            // 0x380ee4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ee0) {
            ctx->pc = 0x380F08u;
            goto label_380f08;
        }
    }
    ctx->pc = 0x380EE8u;
    // 0x380ee8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x380ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x380eec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x380eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x380ef0: 0x24637730  addiu       $v1, $v1, 0x7730
    ctx->pc = 0x380ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30512));
    // 0x380ef4: 0x24427768  addiu       $v0, $v0, 0x7768
    ctx->pc = 0x380ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30568));
    // 0x380ef8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x380ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x380efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f00: 0xc0e03d0  jal         func_380F40
    ctx->pc = 0x380F00u;
    SET_GPR_U32(ctx, 31, 0x380F08u);
    ctx->pc = 0x380F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380F00u;
            // 0x380f04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380F40u;
    if (runtime->hasFunction(0x380F40u)) {
        auto targetFn = runtime->lookupFunction(0x380F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F08u; }
        if (ctx->pc != 0x380F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380F40_0x380f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F08u; }
        if (ctx->pc != 0x380F08u) { return; }
    }
    ctx->pc = 0x380F08u;
label_380f08:
    // 0x380f08: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x380f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x380f0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x380f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x380f10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380F10u;
    {
        const bool branch_taken_0x380f10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x380f10) {
            ctx->pc = 0x380F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380F10u;
            // 0x380f14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380F24u;
            goto label_380f24;
        }
    }
    ctx->pc = 0x380F18u;
    // 0x380f18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x380F18u;
    SET_GPR_U32(ctx, 31, 0x380F20u);
    ctx->pc = 0x380F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380F18u;
            // 0x380f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F20u; }
        if (ctx->pc != 0x380F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F20u; }
        if (ctx->pc != 0x380F20u) { return; }
    }
    ctx->pc = 0x380F20u;
label_380f20:
    // 0x380f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x380f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380f24:
    // 0x380f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380f30: 0x3e00008  jr          $ra
    ctx->pc = 0x380F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380F30u;
            // 0x380f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x380F38u;
    // 0x380f38: 0x0  nop
    ctx->pc = 0x380f38u;
    // NOP
    // 0x380f3c: 0x0  nop
    ctx->pc = 0x380f3cu;
    // NOP
}
