#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DDB70
// Address: 0x2ddb70 - 0x2ddc70
void sub_002DDB70_0x2ddb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDB70_0x2ddb70");
#endif

    switch (ctx->pc) {
        case 0x2ddc3cu: goto label_2ddc3c;
        default: break;
    }

    ctx->pc = 0x2ddb70u;

    // 0x2ddb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ddb74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ddb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ddb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ddb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ddb7c: 0x908305a8  lbu         $v1, 0x5A8($a0)
    ctx->pc = 0x2ddb7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1448)));
    // 0x2ddb80: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2DDB80u;
    {
        const bool branch_taken_0x2ddb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB80u;
            // 0x2ddb84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb80) {
            ctx->pc = 0x2DDC54u;
            goto label_2ddc54;
        }
    }
    ctx->pc = 0x2DDB88u;
    // 0x2ddb88: 0xc6000614  lwc1        $f0, 0x614($s0)
    ctx->pc = 0x2ddb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddb8c: 0x260405e8  addiu       $a0, $s0, 0x5E8
    ctx->pc = 0x2ddb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1512));
    // 0x2ddb90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ddb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb94: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2ddb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ddb98: 0xe6000658  swc1        $f0, 0x658($s0)
    ctx->pc = 0x2ddb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1624), bits); }
    // 0x2ddb9c: 0xc6000610  lwc1        $f0, 0x610($s0)
    ctx->pc = 0x2ddb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddba0: 0xe6000654  swc1        $f0, 0x654($s0)
    ctx->pc = 0x2ddba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1620), bits); }
    // 0x2ddba4: 0xae00065c  sw          $zero, 0x65C($s0)
    ctx->pc = 0x2ddba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1628), GPR_U32(ctx, 0));
    // 0x2ddba8: 0xc60205e8  lwc1        $f2, 0x5E8($s0)
    ctx->pc = 0x2ddba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddbac: 0xc60105ec  lwc1        $f1, 0x5EC($s0)
    ctx->pc = 0x2ddbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddbb0: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x2ddbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddbb4: 0xe60205ac  swc1        $f2, 0x5AC($s0)
    ctx->pc = 0x2ddbb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1452), bits); }
    // 0x2ddbb8: 0xe60105b0  swc1        $f1, 0x5B0($s0)
    ctx->pc = 0x2ddbb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1456), bits); }
    // 0x2ddbbc: 0xe60005b4  swc1        $f0, 0x5B4($s0)
    ctx->pc = 0x2ddbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1460), bits); }
    // 0x2ddbc0: 0xc60205f4  lwc1        $f2, 0x5F4($s0)
    ctx->pc = 0x2ddbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddbc4: 0xc60105f8  lwc1        $f1, 0x5F8($s0)
    ctx->pc = 0x2ddbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddbc8: 0xc60005fc  lwc1        $f0, 0x5FC($s0)
    ctx->pc = 0x2ddbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddbcc: 0xe60205b8  swc1        $f2, 0x5B8($s0)
    ctx->pc = 0x2ddbccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1464), bits); }
    // 0x2ddbd0: 0xe60105bc  swc1        $f1, 0x5BC($s0)
    ctx->pc = 0x2ddbd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1468), bits); }
    // 0x2ddbd4: 0xe60005c0  swc1        $f0, 0x5C0($s0)
    ctx->pc = 0x2ddbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    // 0x2ddbd8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x2ddbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddbdc: 0xe60005c4  swc1        $f0, 0x5C4($s0)
    ctx->pc = 0x2ddbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1476), bits); }
    // 0x2ddbe0: 0x82020604  lb          $v0, 0x604($s0)
    ctx->pc = 0x2ddbe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2ddbe4: 0xa20205c8  sb          $v0, 0x5C8($s0)
    ctx->pc = 0x2ddbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1480), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ddbe8: 0x82020605  lb          $v0, 0x605($s0)
    ctx->pc = 0x2ddbe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1541)));
    // 0x2ddbec: 0xa20205c9  sb          $v0, 0x5C9($s0)
    ctx->pc = 0x2ddbecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1481), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ddbf0: 0x82020606  lb          $v0, 0x606($s0)
    ctx->pc = 0x2ddbf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2ddbf4: 0xa20205ca  sb          $v0, 0x5CA($s0)
    ctx->pc = 0x2ddbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1482), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ddbf8: 0x82020607  lb          $v0, 0x607($s0)
    ctx->pc = 0x2ddbf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1543)));
    // 0x2ddbfc: 0xa20205cb  sb          $v0, 0x5CB($s0)
    ctx->pc = 0x2ddbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1483), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ddc00: 0x8e020608  lw          $v0, 0x608($s0)
    ctx->pc = 0x2ddc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x2ddc04: 0xae0205cc  sw          $v0, 0x5CC($s0)
    ctx->pc = 0x2ddc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1484), GPR_U32(ctx, 2));
    // 0x2ddc08: 0xc600060c  lwc1        $f0, 0x60C($s0)
    ctx->pc = 0x2ddc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc0c: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x2ddc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
    // 0x2ddc10: 0xc6000610  lwc1        $f0, 0x610($s0)
    ctx->pc = 0x2ddc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc14: 0xe60005d4  swc1        $f0, 0x5D4($s0)
    ctx->pc = 0x2ddc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1492), bits); }
    // 0x2ddc18: 0xc6000614  lwc1        $f0, 0x614($s0)
    ctx->pc = 0x2ddc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc1c: 0xe60005d8  swc1        $f0, 0x5D8($s0)
    ctx->pc = 0x2ddc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1496), bits); }
    // 0x2ddc20: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x2ddc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc24: 0xe60005dc  swc1        $f0, 0x5DC($s0)
    ctx->pc = 0x2ddc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1500), bits); }
    // 0x2ddc28: 0x8e02061c  lw          $v0, 0x61C($s0)
    ctx->pc = 0x2ddc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1564)));
    // 0x2ddc2c: 0xae0205e0  sw          $v0, 0x5E0($s0)
    ctx->pc = 0x2ddc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 2));
    // 0x2ddc30: 0x8e020620  lw          $v0, 0x620($s0)
    ctx->pc = 0x2ddc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x2ddc34: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2DDC34u;
    SET_GPR_U32(ctx, 31, 0x2DDC3Cu);
    ctx->pc = 0x2DDC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDC34u;
            // 0x2ddc38: 0xae0205e4  sw          $v0, 0x5E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDC3Cu; }
        if (ctx->pc != 0x2DDC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDC3Cu; }
        if (ctx->pc != 0x2DDC3Cu) { return; }
    }
    ctx->pc = 0x2DDC3Cu;
label_2ddc3c:
    // 0x2ddc3c: 0xc60005dc  lwc1        $f0, 0x5DC($s0)
    ctx->pc = 0x2ddc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc40: 0xe6000618  swc1        $f0, 0x618($s0)
    ctx->pc = 0x2ddc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    // 0x2ddc44: 0xc60005d4  lwc1        $f0, 0x5D4($s0)
    ctx->pc = 0x2ddc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc48: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x2ddc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x2ddc4c: 0xc60005d8  lwc1        $f0, 0x5D8($s0)
    ctx->pc = 0x2ddc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc50: 0xe6000614  swc1        $f0, 0x614($s0)
    ctx->pc = 0x2ddc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1556), bits); }
label_2ddc54:
    // 0x2ddc54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ddc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ddc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDC5Cu;
            // 0x2ddc60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDC64u;
    // 0x2ddc64: 0x0  nop
    ctx->pc = 0x2ddc64u;
    // NOP
    // 0x2ddc68: 0x0  nop
    ctx->pc = 0x2ddc68u;
    // NOP
    // 0x2ddc6c: 0x0  nop
    ctx->pc = 0x2ddc6cu;
    // NOP
}
